/*
 * F103C8_RCC.c
 *
 *  Created on: Aug 7, 2021
 *      Author: CodeOn-ArK
 */
#include "F103C8_RCC.h"

void RCC_HSE_Config(uint8_t HSE_EnDi, uint8_t CSS_bit){
	if( RCC->CR & RCC_CR_HSEBYP ){
		//Conifgure to use external clock sourced from OSC_IN pin

	}else{
		if(HSE_EnDi == true){
			//Enable the HSE
			RCC->CR |= RCC_CR_HSEON;

			//hang here until HSE crystal gets stabilized
			while( !(RCC->CR & RCC_CR_HSERDY) );

			//Enable the CSS bit if CSS_bit set to true
			if( CSS_bit ) RCC->CR |= RCC_CR_CSSON;

		}else
			//Disable the HSE
			RCC->CR &= ~RCC_CR_HSEON;
	}

}

void RCC_HSI_Config(uint8_t HSI_EnDi, uint8_t TRIM_VAL){
	if( HSI_EnDi == true){
		//switch on the HSI
		RCC->CR |= RCC_CR_HSION;

		//hang here until internal oscillator gets stabilized
		while( RCC->CR & RCC_CR_HSIRDY );

		//Set the trim value of the internal oscillator to fine tune the performance
		RCC->CR |= ( (TRIM_VAL & 0x1F) << RCC_CR_HSITRIM_Pos);

	}else{
		//switch off the HSI
		RCC->CR &= ~RCC_CR_HSION;
	}
}

void RCC_PLL_Config(uint8_t PLL_EnDi){
	//Check to enable/disable PLL
	if( PLL_EnDi == true ){

	}else{

	}

}
