/**
 ******************************************************************************
 * @file           : main.c
 * @author         : github@CodeOn-ArK
 * @brief          : Main program body
 ******************************************************************************
 ******************************************************************************/

#include  "main.h"
#include "F103C8_RCC.h"

int main(void)
{
    /* Loop forever */
	RCC_HSE_Config(true, true);

	while(1){}
}
