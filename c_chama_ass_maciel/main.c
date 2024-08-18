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
       // led_off(i); // Opcional: Apaga o LED atual antes de acender o próximo.
    }
   for(i = 0; i < 8; i++){
      led_off(i);
      delay();
		}
  }
}
