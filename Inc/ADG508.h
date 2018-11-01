
#ifndef ADG508_H_
#define ADG508_H_
#include "stm32f1xx_hal.h"

#define IN_PORT							GPIOA
#define IN1_PIN							GPIO_PIN_13
#define IN2_PIN							GPIO_PIN_14
#define IN3_PIN							GPIO_PIN_15


#define HIGH							GPIO_PIN_SET
#define LOW								GPIO_PIN_RESET

#define digitalWrite3(PORT,PIN,VALUE)	HAL_GPIO_WritePin(PORT,PIN,VALUE)

void Init_ADG508(void);
void SetLow(uint8_t outPutnumber);
void SetHigh(uint8_t outPutnumber);
void setOut(uint8_t outPutnumber);
#endif /* 74ADG508_H_ */
