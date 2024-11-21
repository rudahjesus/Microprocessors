//DECLARAÇÃO DO ESTADO
//TURMINHA DO DIDI XD
#include <reg52.h>
#include "C:\Users\IFMaker\Downloads\Microprocessors-main\bizarrice\sll.h"
#include "ESCUDOHORIZONTAL_bmp.c"
#include "ESCUDOVERTICAL_bmp.c"
#include "apagaHorizontal_bmp.c"
#include "apagaVertical_bmp.c"
#include "CENARIO_bmp.c"
#include "DIDI_bmp.c"

COLOR corShield = {255,255,255};
COLOR eraseShield = {0,0,0};
int shieldUp, shieldDown, shieldLeft, shieldRight;
unsigned char erasex,erasey,shieldx,shieldy;
extern char estado;
extern int stop;
 
//PLAN p0;
void main(void){
   TMOD = 0x01;
   TH0=(256-78);
   IE = 0x82;
   TR0 = 1;
   estado = 0;
   paintscr(0,0,0);

/*   p0.backgroudplan = BACKPLN1;
   p0.shapeplan = BACKPLN1;
   p0.tcolor = RGB(0,0,0);
   p0.ptr = null;
   GRPLNSEL = BACKPLN1;
   printbmp(0,0,CENARIO);

   GRPLNSEL = BACKPLN2;
   PaintPlan(RGB(0,0,0));*/
   printbmp(100,44,ESCUDOHORIZONTAL);
   printbmp(110,54,DIDI);
   //JoinPlans(&p0);
   shieldUp = 1;
   shieldDown = 0;
   shieldLeft = 0;
   shieldRight = 0;

   while(1){
     if(stop == 0){

       if(vkeydown(VK_RIGHT)){
	     printbmp(110,54,DIDI);
         printbmp(140,44,ESCUDOVERTICAL); //direita
         printbmp(100,44,apagaHorizontal); //apaga cima
         printbmp(100,84,apagaHorizontal); //apaga baixo
         printbmp(100,44,apagaVertical); //apaga esquerda

		 shieldRight = 1;
	     shieldUp = 0;
	     shieldDown = 0;
	     shieldLeft = 0;
         delay(10);
       }

       if(vkeydown(VK_LEFT)){
	     printbmp(110,54,DIDI);
         printbmp(100,44,ESCUDOVERTICAL);
         printbmp(140,44,apagaVertical); 
         printbmp(100,44,apagaHorizontal);
         printbmp(100,84,apagaHorizontal);

	     shieldUp = 0;
	     shieldDown = 0;
	     shieldLeft = 1;
	     shieldRight = 0; 
         delay(10);
        }

       if(vkeydown(VK_UP)){
	     printbmp(110,54,DIDI);
         printbmp(100,44,ESCUDOHORIZONTAL);
         printbmp(140,44,apagaVertical);
         printbmp(100,84,apagaHorizontal);   
         printbmp(100,44,apagaVertical);

	     shieldUp = 1;
	     shieldDown = 0;
	     shieldLeft = 0;
	     shieldRight = 0;
         delay(10);    
        }

       if(vkeydown(VK_DOWN)){
	     printbmp(110,54,DIDI);
         printbmp(100,84,ESCUDOHORIZONTAL);
         printbmp(140,44,apagaVertical);
         printbmp(100,44,apagaVertical);
         printbmp(100,44,apagaHorizontal);

	     shieldUp = 0;
	     shieldDown = 1;
	     shieldLeft = 0;
	     shieldRight = 0;
         delay(10); 
        }
     delay(1);
	 
       }
     }
 	   while(1);
 }
