/*
 * attiny13-rgb-hello
 *
 * Drive an RGB LED using ATtiny13A.
 *
 * Author : electronut Labs
 * Website: electronut.in
 */


// define CPU speed
#define F_CPU 9600000UL

#include <avr/io.h>

#include<avr/pgmspace.h>
#include<avr/interrupt.h>

#include <util/delay.h>

int main (void)
{
	// set pin directions
	DDRB |= (1 << PB0) | (1 << PB1) | (1 << PB2);

  // loop
  while (1) {

    // set PB0 high
    PORTB = (1 << PB0);

    _delay_ms(200);

    // set PB0 low
    PORTB &= ~(1 << PB0);

    _delay_ms(200);

		// set PB1 high
    PORTB = (1 << PB1);

    _delay_ms(200);

    // set PB1 low
    PORTB &= ~(1 << PB1);

    _delay_ms(200);

		// set PB2 high
    PORTB = (1 << PB2);

    _delay_ms(200);

    // set PB2 low
    PORTB &= ~(1 << PB2);

    _delay_ms(200);
  }

  return 1;
}
