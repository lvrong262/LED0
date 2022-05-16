#include "sys.h"
#include "delay.h" 
#include "led.h"

int main(void)
{ 
	Stm32_Clock_Init(336,8,2,7);//设置时钟,168Mhz
	delay_init(168);		//初始化延时函数
	LED_Init();				//初始化LED时钟  
	while(1)
	{
		LED0=0;				//LED0亮
		delay_ms(500);
		LED0=1;				//LE0灭
		delay_ms(500);
	}
}



