unsigned int* RCC_AHB1ENR=(unsigned int *)0x40023830;
unsigned int* GPIOC_MODER=(unsigned int *)0x40020800;
unsigned int* GPIOC_ODR=(unsigned int *)0x40020814;
void delay(long delay)
{
	while(delay--);
}
int main()
{
	*RCC_AHB1ENR |=(1<<2);
	*GPIOC_MODER |=(1<<26);

while(1)
{
	*GPIOC_ODR |=(1<<13);
	delay(500000);
	*GPIOC_ODR &=~(1<<13);
	delay(500000);
}
return 0;
}


