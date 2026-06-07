#ifndef STM32F7_COMMON_H
#define STM32F7_COMMON_H

#include "can.h"
#include "gpio.h"
#include "spi.h"
#include "usart.h"
#include "usb_otg.h"

#ifdef __cplusplus
extern "C" {
#endif

void SystemClock_Config(void);
void MPU_Config(void);
int _write(int file, char *ptr, int len);
void Error_Handler(void);

#ifdef __cplusplus
}
#endif

#endif