#include "led.h" 

//��ʼ��PG6Ϊ�����.��ʹ��ʱ��		    
//LED IO��ʼ��
void LED_Init(void)
{    	 
	RCC->AHB1ENR|=1<<5;//ʹ��PORTFʱ�� 
	GPIO_Set(GPIOG,PIN6,GPIO_MODE_OUT,GPIO_OTYPE_PP,GPIO_SPEED_100M,GPIO_PUPD_PU); //PG6����
	LED0=1;//LED0�ر�
}






