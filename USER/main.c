#include "sys.h"
#include "delay.h" 
#include "led.h"

int main(void)
{ 
	Stm32_Clock_Init(336,8,2,7);//����ʱ��,168Mhz
	delay_init(168);		//��ʼ����ʱ����
	LED_Init();				//��ʼ��LEDʱ��  
	while(1)
	{
		LED0=0;				//LED0��
		delay_ms(500);
		LED0=1;				//LE0��
		delay_ms(500);
	}
}



