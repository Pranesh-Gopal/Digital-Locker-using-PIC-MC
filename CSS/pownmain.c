#include <16F877A.h>
#device ADC=16

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O
#FUSES PU
#use delay(crystal=4MHz)

#define LCD_ENABLE_PIN PIN_D2
#define LCD_RS_PIN PIN_D0
#define LCD_RW_PIN PIN_D1
#define LCD_DATA4 PIN_D4
#define LCD_DATA5 PIN_D5
#define LCD_DATA6 PIN_D6
#define LCD_DATA7 PIN_D7

#include <lcd.c>

void main()
{

   lcd_init();

   while(TRUE)
   {
     lcd_gotoxy(1,1);
     lcd_putc("22ECR128
     lcd_gotoxy(1,2);
     lcd_putc("22ECR132");
   }

}
