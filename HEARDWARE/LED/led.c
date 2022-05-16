#include "led.h" 

//初始化PG6为输出口.并使能时钟		    
//LED IO初始化
void LED_Init(void)
{    	 
	RCC->AHB1ENR|=1<<5;//使能PORTF时钟 
	GPIO_Set(GPIOG,PIN6,GPIO_MODE_OUT,GPIO_OTYPE_PP,GPIO_SPEED_100M,GPIO_PUPD_PU); //PG6设置
	LED0=1;//LED0关闭
}






