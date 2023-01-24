#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

ISR (INT0_vect){
    PORTB &= ~(1<<PB3); // turn PB3 (red light) off
    PORTB |= (1<<PB4); // turn PB4 (yellow light) on
    _delay_ms(1000); // wait 1 sec
    PORTB &= ~(1<<PB4); // turn PB4 (yellow light) off
    PORTB |= (1<<PB1); // turn PB4 (green light) on
    _delay_ms(1000); // wait 1 sec
    PORTB &= ~(1<<PB1); // turn PB4 (green light) off
    PORTB |= (1<<PB3); // turn PB4 (red light) on
    _delay_ms(1000); // wait 1 sec
}

// Initialize external interrupt on INT0
void Init_external_interrupt(){
    DDRB |= (1<<PB3); // set PB3 as output
    DDRB |= (1<<PB4); // set PB4 as output
    DDRB |= (1<<PB1); // set PB1 as output
    sei(); // Enable global interrupts
    GIMSK |= (1<<INT0); // Enable INT0 interrupt
    MCUCR &= ~(1<<ISC01); // Set INT0 to trigger on low level
    MCUCR &= ~(1<<ISC00); // Set INT0 to trigger on low level
}

int main(){
    Init_external_interrupt(); // Call the initialization function
    while(1){
        PORTB |= (1 << PB3); // set PB3 (red light) on
    } //while no interupt is active
}