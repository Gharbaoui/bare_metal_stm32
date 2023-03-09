#include <stdint.h>
#define GPIOA_ADDR 0x40020000
#define RCC_ADDR 0x40023800

#define RCC_AHB1 *(volatile uint32_t *)(RCC_ADDR + 0x30)
#define GPIOA_ODR *(volatile uint32_t *)(GPIOA_ADDR + 0x14)
#define GPIOA_MODER *(volatile uint32_t *)(GPIOA_ADDR + 0x00)
#define GPIOA_OTYPER *(volatile uint32_t *)(GPIOA_ADDR + 0x04)
#define GPIOA_OSPEEDER *(volatile uint32_t *)(GPIOA_ADDR + 0x08)
#define PIN5_ON (1 << 5)
#define PIN5_OFF ~PIN5_ON

int	main(void)
{
	RCC_AHB1 |= 0x01; // enable clock for ahb
	GPIOA_MODER |= (1 << 10); // input or output // bad line
	GPIOA_OSPEEDER |= 0x00; // speed low
	GPIOA_OTYPER |= (0 << 5); // probably will change push-pull drain 

	while(1)
	{
		GPIOA_ODR |= PIN5_ON;
		for (int i = 0; i < 500000; ++i);
		GPIOA_ODR &= (PIN5_OFF);
		for (int i = 0; i < 500000; ++i);
	}
}
