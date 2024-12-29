#ifndef UART_H_
#define UART_H_

#include <stdint.h>
#include "stm32f4xx.h"

void UART2_Init(void);
void UART2_DeInit(void);
void UART2_TxChar(char ch);
void UART2_TxString(char *str);
char UART2_RxChar(void);


#endif

