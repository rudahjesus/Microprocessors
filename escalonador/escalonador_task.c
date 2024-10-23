/*MADE BY TURMINHA DO DIDI XD*/
#include <reg52.h>
#include "didicolher_bmp.c"
#include "Z:\Rudah_Mariana\lib\sll.h"
int x;
int y;
extern char estado;

void task1(void){
  printbmp(0,0, didicolher);
  paintscr(255,255,255);
  while(1);

    switch(estado){
	  case 1:
	    x++;
	    y--;
	    if(x>=(240-21)){
	      estado = 0;
	    }
	    if(y <=0){
	      if(estado == 0){
		    estado = 3;
		  } 
		  else{
		    estado = 2;
		  }
	    }
	    break;
	    case 0:
	      x--;
	      y--;
		  if(x<=(240-21)){
		    estado = 0;
		  }
	  
	    break;
	    case 3:
		x--;
		y++;
		case 2:
		x++;
		y--;
      }
}
void task2 (void){
}

void task3(void){ 
}
