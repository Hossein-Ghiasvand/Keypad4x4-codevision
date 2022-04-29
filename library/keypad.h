//  4x4 Keypad 
//  Connect the keypad matrix as follows:
//  [PORTD HEADER]   [KEYS]  
//  1 P.0 -----0----1----2----3
//             |    |    |    |  
//  2 P.1 -----4----5----6----7
//             |    |    |    |     
//  3 P.2 -----8----9----10---11
//             |    |    |    |     
//  4 P.3 -----12---13---14---15
//             |    |    |    |
//  5 P.4 -----     |    |    |
//                  |    |    |
//  6 P.5 ----------     |    |
//                       |    |
//  7 P.6 ---------------     |  
//                            |
//  8 P.7 --------------------   

#ifndef _keypad_h
#define _keypad_h

#pragma used+


void kbd_init(void);
void debounce(unsigned char Debouncing_time);

void waitkey(void);
void waitnokey(void);

char readkey(void);

char getkey(void);
char getnum(void);

#pragma used-

#pragma library keypad.lib

#endif

