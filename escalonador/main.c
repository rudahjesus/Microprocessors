/*MADE BY TURMINHA DO DIDI XD*/
 /*bancada 3  1032*/
#include <reg52.h>
#include "..\lib\sll.h"

extern char estado;
 void main(void){
   TMOD = 0x01;
   TH0=(256-78);
   IE = 0x82;
   TR0 = 1;
   estado = 0;
   paintscr(0, 160, 192);
   while(1);
 }
