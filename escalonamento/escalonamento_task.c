/*SOLOPLAY */
#include <reg52.h>
#include "rostobom_bmp.c"
#include "rostomau_bmp.c"
#include "rostoneutro_bmp.c"
#include "C:\Users\rudah\Projetos Assembly\escalonamento\sll.h"

int x,y;
extern char estado;


void task1(void){
	
    printbmp(x,y, rostobom);
    switch(estado){
			
	  case 3:
	    x--;
	    y--;
	    if(x<=0){
	      estado = 2;
	    }
	    if(y <=0){
	      if(estado == 2){
		      estado = 0;
		  } 
		    else{
		      estado = 1;
		    }
	    }
	    break;
			
	    case 2:
	      x++;
	      y--;
		  if(x>=(240-21)){
		    estado = 3;
		  }
			if(y <=0){
			  if(estado ==3){
				  estado = 1;
				}
			  else{
			    estado = 0;
			  }
	    }
	    break;
					
	    case 0:
		    x++;
		    y++;
			if(x>=(240-21)){
			  estado = 1;
			}
			if(y > (240-21)){
			  if(estado == 1){
				  estado = 2;
				}
			
			  else{
			    estado = 3;
			  }
			}
			break;
			
		  case 1:
		    x--;
		    y++;
			if(x <= 0){
			  estado = 0;
			}
			if(y >= 240-21){
			  if(estado == 0){
				  estado = 2;
				}
			  else{
			    estado = 3;
			  }
			}
			
    }
}

void task2 (void){
	
	    printbmp(0,0, rostomau);
    switch(estado){
			
	  case 3:
	    x--;
	    y--;
	    if(x<=0){
	      estado = 2;
	    }
	    if(y <=0){
	      if(estado == 2){
		      estado = 0;
		  } 
		    else{
		      estado = 1;
		    }
	    }
	    break;
			
	    case 2:
	      x++;
	      y--;
		  if(x>=(240-21)){
		    estado = 3;
		  }
			if(y <=0){
			  if(estado ==3){
				  estado = 1;
				}
			  else{
			    estado = 0;
			  }
	    }
	    break;
					
	    case 0:
		    x++;
		    y++;
			if(x>=(240-21)){
			  estado = 1;
			}
			if(y > (240-21)){
			  if(estado == 1){
				  estado = 2;
				}
			
			  else{
			    estado = 3;
			  }
			}
			break;
			
		  case 1:
		    x--;
		    y++;
			if(x <= 0){
			  estado = 0;
			}
			if(y >= 240-21){
			  if(estado == 0){
				  estado = 2;
				}
			  else{
			    estado = 3;
			  }
			}
			
    }
}

void task3(void){ 
	
	    printbmp(0,0, rostoneutro);
    switch(estado){
			
	  case 3:
	    x--;
	    y--;
	    if(x<=0){
	      estado = 2;
	    }
	    if(y <=0){
	      if(estado == 2){
		      estado = 0;
		  } 
		    else{
		      estado = 1;
		    }
	    }
	    break;
			
	    case 2:
	      x++;
	      y--;
		  if(x>=(240-21)){
		    estado = 3;
		  }
			if(y <=0){
			  if(estado ==3){
				  estado = 1;
				}
			  else{
			    estado = 0;
			  }
	    }
	    break;
					
	    case 0:
		    x++;
		    y++;
			if(x>=(240-21)){
			  estado = 1;
			}
			if(y > (240-21)){
			  if(estado == 1){
				  estado = 2;
				}
			
			  else{
			    estado = 3;
			  }
			}
			break;
			
		  case 1:
		    x--;
		    y++;
			if(x <= 0){
			  estado = 0;
			}
			if(y >= 240-21){
			  if(estado == 0){
				  estado = 2;
				}
			  else{
			    estado = 3;
			  }
			}
			
    }
}