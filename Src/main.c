#include "NEC.h"
#include "SYSTICK.h"

int main(void)
{
    NEC_Init();      // Initialize NEC and DWT
    GPIO_Init();     // Initialize GPIO for IR LED
    TIM_Init();      // Initialize Timer for PWM

    while (1)
    {
        NEC_SendCommand(0x10, 0x20); // Example: Send address 0x10 and command 0x20
        delay_ms(2000);
    }
}
