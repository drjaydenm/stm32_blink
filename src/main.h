#ifndef __MAIN_H
#define __MAIN_H

#include <stdint.h>

#ifdef MCU_CLASS_F0
	#include "stm32f0xx.h"
#elif MCU_CLASS_L0
	#include "stm32l0xx.h"
#endif

void delay(int count);

#endif