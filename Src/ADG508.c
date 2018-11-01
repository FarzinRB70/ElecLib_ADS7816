#include <ADG508.h>


void Init_ADG508(void)
{
	GPIO_InitTypeDef GPIO_InitStruct;

	/* GPIO Ports Clock Enable */
	__HAL_RCC_GPIOA_CLK_ENABLE();
	/*Configure GPIO pins : SCLK_PIN */
	GPIO_InitStruct.Pin = IN1_PIN | IN2_PIN | IN3_PIN;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(IN_PORT, &GPIO_InitStruct);
}

void setOut(uint8_t outPutnumber)
{
	if(outPutnumber & 0x01)digitalWrite3(IN_PORT,IN1_PIN,HIGH);
	else digitalWrite3(IN_PORT,IN1_PIN,LOW);
	if(outPutnumber & 0x02)digitalWrite3(IN_PORT,IN2_PIN,HIGH);
	else digitalWrite3(IN_PORT,IN2_PIN,LOW);
	if(outPutnumber & 0x04)digitalWrite3(IN_PORT,IN3_PIN,HIGH);
	else digitalWrite3(IN_PORT,IN3_PIN,LOW);
}
void SetHigh(uint8_t outPutnumber)
{
	setOut(outPutnumber);
	}

void SetLow(uint8_t outPutnumber)
{
	setOut(outPutnumber-1);
	}
