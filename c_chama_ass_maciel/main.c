//PROGRAM BY MORCGOPOCILGAXD

#include <reg52.h>

extern void led_on(char n);
extern void led_off(char n);
extern void delay(void);

void main(void){
  char i,j;
  while (1){
    for (j = 7; j>= 0; j--){
      led_on(j);
      if( j < 0){
         for (i = 0; i > 8; i++){
           led_off(i);
    }   
       }
      delay();
    }

    
  }
}