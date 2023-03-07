#include <stdint.h>

#define SRAM_START	0x20000000U
#define	SRAM_SIZE	(128 * 1024)
#define	SRAM_END ( (SRAM_START) + (SRAM_SIZE) )

#define	STACK_START SRAM_END


extern uint32_t _end_of_text; // aka start of data
extern uint32_t	_start_of_data; // aka start address where we should copy data to
extern uint32_t	_end_of_data; // used with _start_of_data to get the size of data section

void	Reset_handler(void);
void	Fallback_handler(void);

void	NMI_Handler() __attribute__((weak, alias("Fallback_handler")));
void  	HardFault_Handler() __attribute__((weak, alias("Fallback_handler")));
void  	MemManage_Handler() __attribute__((weak, alias("Fallback_handler")));
void  	BusFault_Handler() __attribute__((weak, alias("Fallback_handler")));
void  	UsageFault_Handler() __attribute__((weak, alias("Fallback_handler")));
void  	SVC_Handler() __attribute__((weak, alias("Fallback_handler")));
void  	DebugMon_Handler() __attribute__((weak, alias("Fallback_handler")));
void  	PendSV_Handler() __attribute__((weak, alias("Fallback_handler")));
void  	SysTick_Handler() __attribute__((weak, alias("Fallback_handler")));
void     WWDG_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     PVD_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     TAMP_STAMP_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     RTC_WKUP_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     FLASH_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     RCC_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     EXTI0_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     EXTI1_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     EXTI2_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     EXTI3_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     EXTI4_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     DMA1_Stream0_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     DMA1_Stream1_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     DMA1_Stream2_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     DMA1_Stream3_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     DMA1_Stream4_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     DMA1_Stream5_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     DMA1_Stream6_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     ADC_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     CAN1_TX_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     CAN1_RX0_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     CAN1_RX1_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     CAN1_SCE_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     EXTI9_5_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     TIM1_BRK_TIM9_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     TIM1_UP_TIM10_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     TIM1_TRG_COM_TIM11_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     TIM1_CC_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     TIM2_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     TIM3_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     TIM4_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     I2C1_EV_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     I2C1_ER_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     I2C2_EV_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     I2C2_ER_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     SPI1_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     SPI2_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     USART1_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     USART2_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     USART3_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     EXTI15_10_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     RTC_Alarm_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     OTG_FS_WKUP_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     TIM8_BRK_TIM12_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     TIM8_UP_TIM13_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     TIM8_TRG_COM_TIM14_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     TIM8_CC_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     DMA1_Stream7_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     FMC_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     SDIO_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     TIM5_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     SPI3_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     UART4_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     UART5_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     TIM6_DAC_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     TIM7_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     DMA2_Stream0_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     DMA2_Stream1_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     DMA2_Stream2_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     DMA2_Stream3_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     DMA2_Stream4_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     CAN2_TX_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     CAN2_RX0_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     CAN2_RX1_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     CAN2_SCE_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     OTG_FS_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     DMA2_Stream5_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     DMA2_Stream6_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     DMA2_Stream7_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     USART6_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     I2C3_EV_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     I2C3_ER_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     OTG_HS_EP1_OUT_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     OTG_HS_EP1_IN_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     OTG_HS_WKUP_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     OTG_HS_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     DCMI_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     FPU_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     SPI4_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     SAI1_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     SAI2_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     QUADSPI_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     CEC_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     SPDIF_RX_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     FMPI2C1_EV_IRQHandler() __attribute__((weak, alias("Fallback_handler")));
void     FMPI2C1_ER_IRQHandler() __attribute__((weak, alias("Fallback_handler")));

uint32_t	interrupt_vector_table[] __attribute__((section (".ivt"))) = {
	STACK_START,
	(uint32_t)&Reset_handler,
	(uint32_t)NMI_Handler,
	(uint32_t)HardFault_Handler,
	(uint32_t)MemManage_Handler,
	(uint32_t)BusFault_Handler,
	(uint32_t)UsageFault_Handler,
	(uint32_t)  0,
	(uint32_t)  0,
	(uint32_t)  0,
	(uint32_t)  0,
	(uint32_t)SVC_Handler,
	(uint32_t)DebugMon_Handler,
	(uint32_t)0,
	(uint32_t)PendSV_Handler,
	(uint32_t)SysTick_Handler,
	(uint32_t)WWDG_IRQHandler,
	(uint32_t)PVD_IRQHandler,
	(uint32_t)TAMP_STAMP_IRQHandler,
	(uint32_t)RTC_WKUP_IRQHandler,
	(uint32_t)FLASH_IRQHandler,
	(uint32_t)RCC_IRQHandler,
	(uint32_t)EXTI0_IRQHandler,
	(uint32_t)EXTI1_IRQHandler,
	(uint32_t)EXTI2_IRQHandler,
	(uint32_t)EXTI3_IRQHandler,
	(uint32_t)EXTI4_IRQHandler,
	(uint32_t)DMA1_Stream0_IRQHandler,
	(uint32_t)DMA1_Stream1_IRQHandler,
	(uint32_t)DMA1_Stream2_IRQHandler,
	(uint32_t)DMA1_Stream3_IRQHandler,
	(uint32_t)DMA1_Stream4_IRQHandler,
	(uint32_t)DMA1_Stream5_IRQHandler,
	(uint32_t)DMA1_Stream6_IRQHandler,
	(uint32_t)ADC_IRQHandler,
	(uint32_t)CAN1_TX_IRQHandler,
	(uint32_t)CAN1_RX0_IRQHandler,
	(uint32_t)CAN1_RX1_IRQHandler,
	(uint32_t)CAN1_SCE_IRQHandler,
	(uint32_t)EXTI9_5_IRQHandler,
	(uint32_t)TIM1_BRK_TIM9_IRQHandler,
	(uint32_t)TIM1_UP_TIM10_IRQHandler,
	(uint32_t)TIM1_TRG_COM_TIM11_IRQHandler,
	(uint32_t)TIM1_CC_IRQHandler,
	(uint32_t)TIM2_IRQHandler,
	(uint32_t)TIM3_IRQHandler,
	(uint32_t)TIM4_IRQHandler,
	(uint32_t)I2C1_EV_IRQHandler,
	(uint32_t)I2C1_ER_IRQHandler,
	(uint32_t)I2C2_EV_IRQHandler,
	(uint32_t)I2C2_ER_IRQHandler,
	(uint32_t)SPI1_IRQHandler,
	(uint32_t)SPI2_IRQHandler,
	(uint32_t)USART1_IRQHandler,
	(uint32_t)USART2_IRQHandler,
	(uint32_t)USART3_IRQHandler,
	(uint32_t)EXTI15_10_IRQHandler,
	(uint32_t)RTC_Alarm_IRQHandler,
	(uint32_t)OTG_FS_WKUP_IRQHandler,
	(uint32_t)TIM8_BRK_TIM12_IRQHandler,
	(uint32_t)TIM8_UP_TIM13_IRQHandler,
	(uint32_t)TIM8_TRG_COM_TIM14_IRQHandler,
	(uint32_t)TIM8_CC_IRQHandler,
	(uint32_t)DMA1_Stream7_IRQHandler,
	(uint32_t)FMC_IRQHandler,
	(uint32_t)SDIO_IRQHandler,
	(uint32_t)TIM5_IRQHandler,
	(uint32_t)SPI3_IRQHandler,
	(uint32_t)UART4_IRQHandler,
	(uint32_t)UART5_IRQHandler,
	(uint32_t)TIM6_DAC_IRQHandler,
	(uint32_t)TIM7_IRQHandler,
	(uint32_t)DMA2_Stream0_IRQHandler,
	(uint32_t)DMA2_Stream1_IRQHandler,
	(uint32_t)DMA2_Stream2_IRQHandler,
	(uint32_t)DMA2_Stream3_IRQHandler,
	(uint32_t)DMA2_Stream4_IRQHandler,
	(uint32_t)0,
	(uint32_t)0,
	(uint32_t)CAN2_TX_IRQHandler,
	(uint32_t)CAN2_RX0_IRQHandler,
	(uint32_t)CAN2_RX1_IRQHandler,
	(uint32_t)CAN2_SCE_IRQHandler,
	(uint32_t)OTG_FS_IRQHandler,
	(uint32_t)DMA2_Stream5_IRQHandler,
	(uint32_t)DMA2_Stream6_IRQHandler,
	(uint32_t)DMA2_Stream7_IRQHandler,
	(uint32_t)USART6_IRQHandler,
	(uint32_t)I2C3_EV_IRQHandler,
	(uint32_t)I2C3_ER_IRQHandler,
	(uint32_t)OTG_HS_EP1_OUT_IRQHandler,
	(uint32_t)OTG_HS_EP1_IN_IRQHandler,
	(uint32_t)OTG_HS_WKUP_IRQHandler,
	(uint32_t)OTG_HS_IRQHandler,
	(uint32_t)DCMI_IRQHandler,
	(uint32_t)0,
	(uint32_t)0,
	(uint32_t)FPU_IRQHandler,
	(uint32_t)0,
	(uint32_t)0,
	(uint32_t)SPI4_IRQHandler,
	(uint32_t)0,
	(uint32_t)0,
	(uint32_t)SAI1_IRQHandler,
	(uint32_t)0,
	(uint32_t)0,
	(uint32_t)0,
	(uint32_t)SAI2_IRQHandler,
	(uint32_t)QUADSPI_IRQHandler,
	(uint32_t)CEC_IRQHandler,
	(uint32_t)SPDIF_RX_IRQHandler,
	(uint32_t)FMPI2C1_EV_IRQHandler,
	(uint32_t)FMPI2C1_ER_IRQHandler
};

void	Reset_handler(void) {
	uint32_t	data_section_size = &_end_of_data - &_start_of_data;
	uint32_t	*src = (uint32_t*)&_end_of_text; // flash
	uint32_t	*dst = (uint32_t*)&_start_of_data; // data
	for (uint32_t i = 0; i < data_section_size; ++i) {
		*dst = *src;
		++dst;
		++src;
	}
}
void	Fallback_handler(void){

}
