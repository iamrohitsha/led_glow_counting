#ifndef INC_LCD_CONFIG_H_
#define INC_LCD_CONFIG_H_

/* CONFIG FOR LIBRARY USER */
#define GPIO_PORT GPIOG

//4 pin mode -> pins
#define DATA5_Pin GPIO_PIN_4
#define DATA6_Pin GPIO_PIN_5
#define DATA7_Pin GPIO_PIN_6
#define DATA8_Pin GPIO_PIN_7

#define RS_Pin GPIO_PIN_3
#define E_Pin  GPIO_PIN_2
//RW Pin not used,connect to GND

//if you want to work with 8 bit mode uncomment the area which is given below

/*
#define LCD8Bit
#define DATA1_Pin GPIO_PIN_1
#define DATA2_Pin GPIO_PIN_2
#define DATA3_Pin GPIO_PIN_3
#define DATA4_Pin GPIO_PIN_4
*/


#endif /* INC_LCD_CONFIG_H_ */
