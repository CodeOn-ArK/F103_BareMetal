/*
 * F103C8_RCC.h
 *
 *  Created on: Aug 7, 2021
 *      Author: CodeOn-ArK
 */

#ifndef INC_F103C8_RCC_H_
#define INC_F103C8_RCC_H_

#include "main.h"

void RCC_HSE_Config(uint8_t HSE_EnDi, uint8_t CSS_bit);
void RCC_HSI_Config(uint8_t HSI_EnDi, uint8_t TRIM_VAL);

#endif /* INC_F103C8_RCC_H_ */
