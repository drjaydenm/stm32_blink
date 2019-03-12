#include "main.h"

int main ()
{
	// Enable GPIOB peripheral
	RCC->AHBENR |= RCC_AHBENR_GPIOBEN;

	// Setup pin B3
	GPIOB->MODER  &= ~(0x3 << (LED_PIN * 2));
	GPIOB->MODER  |=  (0x1 << (LED_PIN * 2));
	GPIOB->OTYPER &= ~(1 << LED_PIN);

	int counter = 0;
    while (1)
    {
        for (int i = 0; i < 10000 + counter; i++)
        {
        	// sleep
        }
        counter += 1000;

        GPIOB->ODR ^= (1 << LED_PIN);
    }
}