#include "main.h"

int main ()
{
	// Enable GPIOB peripheral
	RCC->AHBENR |= RCC_AHBENR_GPIOBEN;

	// Setup pin B3 for output and push-pull
	GPIOB->MODER &= ~GPIO_MODER_MODER3;
	GPIOB->MODER |= GPIO_MODER_MODER3_0;
    GPIOB->OTYPER &= ~GPIO_OTYPER_OT_3;

	int counter = 0;
    while (1)
    {
        // Turn on the LED
        GPIOB->BSRR = (1 << 3);
        delay(counter);

        // Turn off the LED
        GPIOB->BRR = (1 << 3);
        delay(counter);

        counter += 10000;
    }
}

void delay(int count) {
    for (int i = 0; i < count; i++) {
        // sleep
    }
}