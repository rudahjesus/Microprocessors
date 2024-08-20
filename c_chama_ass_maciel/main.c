//PROGRAM BY MORCGOPOCILGAXD
#include <reg52.h>

extern void led_on(char n);
extern void led_off(char n);
extern void delay(void);

void main(void){
  char i;
  while (1){
    for (i = 7; i >= 0; i--){
      led_on(i);
      delay();
       
    }
   for(i = 0; i < 8; i++){
      led_off(i);
      delay();
		}
  }
}
