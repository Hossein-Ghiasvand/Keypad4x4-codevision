/****************************************************
Project : 4 x 4 Keypad - polling
Version : 1
Date    : 4/5/2013
Author  : hossein ghiasvand
Company : https://www.micronik.ir
E-mail  : info@micronik.ir

Chip type               : ATmega16
Program type            : Application
AVR Core Clock frequency: 8.000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 256
****************************************************/
#include <mega16.h>
#include <delay.h>
#include <alcd.h>

#asm
    .equ __kbd_port=0x1b ;PORTA
#endasm
#include <keypad.h>

void main(void)
{
lcd_init(16);
kbd_init();

while (1)
      { 
      unsigned char keypressed;
      lcd_clear();      
      lcd_gotoxy(0,0);
      lcd_putsf("Enter Key:");
      lcd_gotoxy(0,1); 
      _lcd_write_data(0x0f);     //Cursor blanked
          while(1)
          { 
          keypressed=getkey();
          lcd_putchar(keypressed);
          if(keypressed=='C') break; //'C'-----> clear screen
          }
      }
}

