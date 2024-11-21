//DECLARAÇÃO DO ESTADO
//TURMINHA DO DIDI XD
#include <reg52.h>
#include "C:\Users\rudah\Downloads\diditale-main\sll.h"
#include "diditale_bmp.c"

COLOR corShield = {0, 0, 255};
COLOR eraseShield = {0,0,0};
int shieldUp, shieldDown, shieldLeft, shieldRight;
unsigned char shieldx,shieldy,erasex,erasey;
extern char estado;
extern int stop;

 void main(void){
   TMOD = 0x01;
   TH0=(256-78);
   IE = 0x82;
   TR0 = 1;
   estado = 0;
   paintscr(0, 0, 0);

 
   
   for (shieldx = 100; shieldx <=140; shieldx++){
      plotxy(shieldx,44,&corShield);
    }
     printbmp(110,54,diditale);
	 shieldUp = 1;
	 shieldDown = 0;
	 shieldLeft = 0;
	 shieldRight = 0;


   while(1){
     if(stop == 0){

       if(vkeydown(VK_RIGHT)){
	     printbmp(110,54,diditale);
         for (shieldy = 44; shieldy <=84; shieldy++){
           plotxy(141,shieldy,&corShield); //direita	
         }
         for (erasex = 100; erasex <=140; erasex++){
           plotxy(erasex,44,&eraseShield);          //apaga cima
         }
         for (erasex = 100; erasex <=140; erasex++){
           plotxy(erasex,84,&eraseShield);  //apaga baixo
         }
         for (erasey = 44; erasey <=84; erasey++){
           plotxy(100,erasey,&eraseShield);  //apaga esquerda
         }
	     shieldUp = 0;
	     shieldDown = 0;
	     shieldLeft = 0;
	     shieldRight = 1;

         delay(30);
       }

       if(vkeydown(VK_LEFT)){
	     printbmp(110,54,diditale);
         for (shieldy = 44; shieldy <=84; shieldy++){
           plotxy(100,shieldy,&corShield);  //esquerda
         }
         for (erasey = 44; erasey <=84; erasey++){
           plotxy(141,erasey,&eraseShield);  //apaga direita
         }
         for (erasex = 100; erasex <=140; erasex++){
            plotxy(erasex,44,&eraseShield);    // apaga cima     
         }
         for (erasex = 100; erasex <=140; erasex++){
            plotxy(erasex,84,&eraseShield);  //apaga baixo
         }
	     shieldUp = 0;
	     shieldDown = 0;
	     shieldLeft = 1;
	     shieldRight = 0; 
         delay(30);
        }

       if(vkeydown(VK_UP)){
	     printbmp(110,54,diditale);
         for (shieldx = 100; shieldx <=140; shieldx++){
           plotxy(shieldx,44,&corShield);  //cima
         }
         for (erasey = 44; erasey <=84; erasey++){
           plotxy(141,erasey,&eraseShield);     //apaga direita
         }
         for (erasex = 100; erasex <=140; erasex++){
           plotxy(erasex,84,&eraseShield);  //apaga baixo
         }   
         for (erasey = 44; erasey <=84; erasey++){
           plotxy(100,erasey,&eraseShield);  //apaga esquerda
         }
	     shieldUp = 1;
	     shieldDown = 0;
	     shieldLeft = 0;
	     shieldRight = 0;
         delay(30);    
        }

       if(vkeydown(VK_DOWN)){
	     printbmp(110,54,diditale);
         for (shieldx = 100; shieldx <=140; shieldx++){
           plotxy(shieldx,84,&corShield);  //baixo
         }
         for (erasey = 44; erasey <=84; erasey++){
           plotxy(141,erasey,&eraseShield); // apaga direita
         }
         for (erasex = 100; erasex <=140; erasex++){
           plotxy(erasex,44,&eraseShield);    // apaga cima     
         }
         for (erasey = 44; erasey <=84; erasey++){
           plotxy(100,erasey,&eraseShield);  //apaga esquerda
         }
	     shieldUp = 0;
	     shieldDown = 1;
	     shieldLeft = 0;
	     shieldRight = 0;
         delay(30); 
        }
     delay(1);
	 
       }
     }
 	   while(1);
 }