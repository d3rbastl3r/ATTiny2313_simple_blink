/**
 * A minimal blink example for ATTiny2313 on port B0
 *
 * @author Igor Martens
 * @since 30.09.2018
 */

#define F_CPU 8000000

#include <util/delay.h>
#include <avr/io.h>

void setup() {
    DDRB |= (1 << DDB0); // Setup the Output fon port B0
}

int main(void) {
    setup();

    while(1) {
        PORTB |= (1<<PB0);
		_delay_ms(300);

		PORTB &= ~(1<<PB0);
		_delay_ms(300);
    }

    return 0;
}
