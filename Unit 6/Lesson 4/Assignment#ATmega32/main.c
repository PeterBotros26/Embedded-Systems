/*
 * main.c
 *
 * Created: 11/30/2023 10:54:51 AM
 *  Author: P.Botros
 */ 



#include <xc.h>
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#define F_CPU 16000000UL

//#define IO_Base 0x20
//#define IO_DDRD		*(volatile uint32_t*)(IO_Base + 0x11)
//#define IO_PORTD		*(volatile uint32_t*)(IO_Base + 0x12)
//#define MCUCR		*(volatile uint32_t*)(IO_Base + 0x35)
//#define MCUCSR		*(volatile uint32_t*)(IO_Base + 0x34)
//#define GICR		*(volatile uint32_t*)(IO_Base + 0x3B)


//#define SET_BIT(ADDRESS,BIT)  ADDRESS |= (1<<BIT)
//#define RESET_BIT(ADDRESS,BIT)  ADDRESS &= ~(1<<BIT)
//#define TOGGLE_BIT(ADDRESS,BIT)  ADDRESS ^= (1<<BIT)
//#define READ_BIT(ADDRESS,BIT)  ((ADDRESS & (1<<BIT))>>BIT)

void GPIO_init(void)
{
	// Port D set direction to output
	DDRD |= (1<<PD5)|(1<<PD6)|(1<<PD7);
}

void EXTI_init(void)
{
	// Global interrupt enable
	sei();
	
	// Configuration of MCU Control Register to interrupt sense
	// INT0 -> Any logical change
	// INT1 -> Rising edge
	// INT2 -> Falling edge
	MCUCR |= (1 << ISC11) | (1 << ISC10) | (1 << ISC00);
	
	// External Interrupt Request Enable
	GICR |= (1<<INT1)|(1<<INT0)|(1<<INT2);
}


int main(void)
{
	// Initialize GPIO LEDs pin
	GPIO_init();
	
	// Initialize external interrupt
	EXTI_init();
	
    while (1)
    {
	    // Turn off all LEDs
	    PORTD &= ~((1<<PD5)|(1<<PD6)|(1<<PD7));
    }
	return 0;
}

ISR(INT0_vect)
{
	// Turn led on
	PORTD |= (1<<PD5);
	
	// Wait 1 second
	_delay_ms(1000);
	
	// Turn led off
	PORTD &= (~1<<PD5);
}

ISR(INT1_vect)
{
	// Turn led on
	PORTD |= (1<<PD6);
	
	// Wait 1 second
	_delay_ms(1000);
	
	// Turn led off
	PORTD &= (~1<<PD6);
}

ISR(INT2_vect)
{
	// Turn led on
	PORTD |= (1<<PD7);
	
	// Wait 1 second
	_delay_ms(1000);
	
	// Turn led off
	PORTD &= (~1<<PD7);
}