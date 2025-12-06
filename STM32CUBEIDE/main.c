#include "stm32f4xx.h"
void delay_ms(int ms)
{
	int count = 1600*ms;
    while(count != 0){
    	count--;
    }
}
int main(void)
{
    // 1. Enable clock for GPIOA 
    RCC->AHB1ENR |= (1 << 0);

    // 2. Set PA0, PA1, PA2 as output
    GPIOA->MODER |= (1 << 0);  // PA0 output
    GPIOA->MODER |= (1 << 2);  // PA1 output
    GPIOA->MODER |= (1 << 4);  // PA2 output

    while (1)
    {
        //RED ON
        GPIOA->ODR |= (1 << 0);              // PA0 HIGH
        GPIOA->ODR &= ~((1 << 1) | (1 << 2)); // PA1, PA2 LOW
        delay_ms(5000);

        //YELLOW ON
        GPIOA->ODR |= (1 << 1);              // PA1 HIGH
        GPIOA->ODR &= ~((1 << 0) | (1 << 2)); // PA0, PA2 LOW
        delay_ms(2000);

        //GREEN ON
        GPIOA->ODR |= (1 << 2);              // PA2 HIGH
        GPIOA->ODR &= ~((1 << 0) | (1 << 1)); // PA0, PA1 LOW
        delay_ms(4000);
    }
}



