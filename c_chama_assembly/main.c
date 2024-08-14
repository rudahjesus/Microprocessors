 // programa exemplo de C chamando assembly

 // nossa atividade: Construir um algoritmo de vai e vem LAB 7


#include <reg52.h>

extern void led_on(char n);
extern void led_off(char n);
extern void delay(void);

void main(void){
  char i,j,k;
  while (1){
    for (i = 0; i< 8; i++){
       j = i + 1;
       k = 4 - (i+1);
       if (j > 4) {
         j = 1;
         led_off(7);
       }
       if (k < 0){
         k = 3;
         led_off(0);
       }
       led_on(j+3);
       led_off(j+2);
       led_on(k);
       if(k + 1 != 4){
         led_off(k+1);
       }
       delay();
    }
  }
}