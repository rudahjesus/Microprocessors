//PROGRAM BY MORCGOPOCILGAXD

#include <reg52.h>

extern void led_on(char n);
extern void led_off(char n);
extern void delay(void);

void main(void){
  char j;
  while (1){
    for (j = 7; j>=0; j--){
      led_on(j);
      delay();
         }
    for (j = 0; j < 8; j++){
       led_off(j);
       delay();
    }    
  }
}
    
