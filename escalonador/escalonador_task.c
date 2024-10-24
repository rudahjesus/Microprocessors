/*MADE BY TURMINHA DO DIDI XD*/
#include <reg52.h>
#include "DIDICOLHER_bmp.c"
#include "DIDICOLHER2_bmp.c"
#include "DIDICOLHER3_bmp.c"
#include "C:\Keil_v5\Microprocessors-main\escalonador\sll.h"
int x;
int y;
extern char estado;

void task1(void){
  printbmp(x,y, DIDICOLHER);
  paintscr(0,160,192);

    switch(estado){
		case 1:  
		    x--;
		    y--;

			if(x<=0){
				estado = 3;	
			}
			if(y<=0){
              if(estado == 3){
				estado = 2;
			  }
			}
			else{
				estado = 0;
			}
	

	    case 0:  
		    x--;
		    y++;
			if(x<=0){
				estado = 1;
			}
			if(y>=(240-21)){
				if(estado == 1)
				estado = 3;
			}
			else{
				estado = 2;
			}
		break;	    
    
        case 3:  
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

        case 2:
	      x++;
	      y++;
		  if(x>=(240-21)){
		    estado = 0;
		  }
		  if(y>=(240-21)){
			if (estado==0){
				estado = 1;
			}
			else{
				estado = 3;
			}
		  }

		  
      }
}
void task2 (void){
  printbmp(x,y, DIDICOLHER2);
  paintscr(0,160,192);

    switch(estado){
		case 1:  
		    x--;
		    y--;

			if(x<=0){
				estado = 3;	
			}
			if(y<=0){
              if(estado == 3){
				estado = 2;
			  }
			}
			else{
				estado = 0;
			}
	

	    case 0:  
		    x--;
		    y++;
			if(x<=0){
				estado = 1;
			}
			if(y>=(240-21)){
				if(estado == 1)
				estado = 3;
			}
			else{
				estado = 2;
			}
		break;	    
    
        case 3:  
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

        case 2:
	      x++;
	      y++;
		  if(x>=(240-21)){
		    estado = 0;
		  }
		  if(y>=(240-21)){
			if (estado==0){
				estado = 1;
			}
			else{
				estado = 3;
			}
		  }

		  
      }
}

void task3(void){
  printbmp(x,y, DIDICOLHER3);
  paintscr(0,160,192);

    switch(estado){
		case 1:  
		    x--;
		    y--;

			if(x<=0){
				estado = 3;	
			}
			if(y<=0){
              if(estado == 3){
				estado = 2;
			  }
			}
			else{
				estado = 0;
			}
	

	    case 0:  
		    x--;
		    y++;
			if(x<=0){
				estado = 1;
			}
			if(y>=(240-21)){
				if(estado == 1)
				estado = 3;
			}
			else{
				estado = 2;
			}
		break;	    
    
        case 3:  
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

        case 2:
	      x++;
	      y++;
		  if(x>=(240-21)){
		    estado = 0;
		  }
		  if(y>=(240-21)){
			if (estado==0){
				estado = 1;
			}
			else{
				estado = 3;
			}
		  }

		  
      }
}
