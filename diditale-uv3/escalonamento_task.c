/*SOLOPLAY */
#include <reg52.h>

#include "flecha_bmp.c"
#include "C:\Users\rudah\Downloads\diditale-main\sll.h"


int x1,x2,x3,y1,y2,y3;
char estado1,estado2,estado3;

void task1(void){
	
    printbmp(x1,y1, flecha);
    switch(estado1){
			
	  case 3:
	    x1--;
	    y1--;
	    if(x1<=0){
	      estado1 = 2;
	    }
	    if(y1 <=0){
	      if(estado1 == 2){
		      estado1 = 0;
		  } 
		    else{
		      estado1 = 1;
		    }
	    }
	    break;
			
	    case 2:
	      x1++;
	      y1--;
		  if(x1>=(240-21)){
		    estado1 = 3;
		  }
			if(y1 <=0){
			  if(estado1 ==3){
				  estado1 = 1;
				}
			  else{
			    estado1 = 0;
			  }
	    }
	    break;
					
	    case 0:
		    x1++;
		    y1++;
			if(x1>=(240-21)){
			  estado1 = 1;
			}
			if(y1 > (128-21)){
			  if(estado1 == 1){
				  estado1 = 3;
				}
			
			  else{
			    estado1 = 2;
			  }
			}
			break;
			
		  case 1:
		    x1--;
		    y1++;
			if(x1 <= 0){
			  estado1 = 0;
			}
			if(y1 >= 128-21){
			  if(estado1 == 0){
				  estado1 = 2;
				}
			  else{
			    estado1 = 3;
			  }
			}
			
    }
}
