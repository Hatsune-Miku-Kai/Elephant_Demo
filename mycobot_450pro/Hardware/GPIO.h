#ifndef __GPIO_H_
#define __GPIO_H_
#include "stm32f10x.h"                  // Device header

void GPIO_Init_Input(void);
	
uint8_t GPIO_Read_Input(GPIO_TypeDef* GPIOx, uint16_t Pin);

void GPIO_Set_Output(GPIO_TypeDef* GPIOx, uint16_t Pin, uint8_t state);
	
void GPIO_Init_Output(void);
	

#endif

