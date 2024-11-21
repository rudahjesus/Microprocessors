 /*DIDITALE XD*/
 /*TURMINHA DO DIDI XD*/
#include "GAMEOVER_bmp.c"
#include "SHURIKEN_bmp.c"
#include "C:\Users\IFMaker\Downloads\Microprocessors-main\bizarrice\sll.h"

extern int shieldUp, shieldDown, shieldLeft, shieldRight;
bit rodando = 1;
int x2 = 0;
int y2 = 0;
int x1 = 0;
int y1 = 0;
char estado1,estado2,estado3;
int stop = 0;

int finish(){
	printbmp(0,0,GAMEOVER);
	stop = 1;
	return stop;
}

 void task1(void){

 if(stop == 0){
    printbmp(x1,y1, SHURIKEN);

    switch(estado1){
			
	  case 3:
	    x1--;
	    y1--;
	    if(x1<=0 || shieldRight == 1 && x1 == 146 && 44-31 <= y1 && y1 <= 84){
	      estado1 = 2;
	    }

		else if (shieldRight == 0 && x1 == 132 && 44-31 <= y1 && y1 <= 84){
		  finish();
		}  // direita OK
		
	    if(y1 <=0 || shieldDown == 1 && y1 == 90 && x1 >= 100-31 && x1 <= 140){
	      if(estado1 == 2){
		      estado1 = 0;
		  }
		    else{
		      estado1 = 1;
		    }
	    }
         if(shieldDown == 0 && y1 == 90 && x1 >= 100-31 && x1 <= 140){
	       finish();
		 } // baixo OK
	    break;
			
	    case 2:
	      x1++;
	      y1--;
		  if(x1>=(240-21) || shieldLeft == 1 && x1 == 100-31 && 44-31 <= y1 && y1 <= 84){
		    estado1 = 3;
		  }
		  else if (shieldLeft == 0 && x1 == 100-21 && 44-21 <= y1 && y1 <= 84){
		    finish();
		  }
		  if(y1 <=0 || shieldDown == 1 && y1 == 88 && x1 >= 100-31 && x1 <= 140){
		    if(estado1 ==3){
			  estado1 = 1;
		    }  
		    else{
		      estado1 = 0;
		     }
		  }
		  else if(shieldDown == 0 && y1 == 82 && x1 >= 100-21 && x1 <= 140){
	        finish();
	    }  //baixo OK
	    break;
					
	    case 0:
		    x1++;
		    y1++;
			if(x1>=(240-21) || shieldLeft == 1 && x1 == 100-31 && 44-31 <= y1 && y1 <= 84){
			  estado1 = 1;
			}
		  else if (shieldLeft == 0 && x1 == 100-21 && 44-31 <= y1 && y1 <= 84){
		    finish();
		  }
			if(y1 > (128-21)|| shieldUp == 1 && y1 == 44-32 && 100-31 <= x1 && x1 <= 140){
			  if(estado1 == 1){
				  estado1 = 3;
			  }
			  else{
			    estado1 = 2;
			  }
			}
             else if (shieldUp == 0 && y1 == 50-22 && 100-31 <= x1 && x1 <= 140){
		      finish();
		    } //cima OK
			break;
			
		  case 1:
		    x1--;
		    y1++;
			if(x1 <= 0 || shieldRight == 1 && x1 <= 140+31 && 44-31 <= y1 && y1 <= 84){
			  estado1 = 0;
			}
		    else if (shieldRight == 0 && x1 == 130 && 54 <= y1 && y1 <= 74){
		      finish();
		    } 	// direita OK

			if(y1 >= 128-21 ||shieldUp == 1 && y1 == 44-32 && 100-31 <= x1 && x1 <= 140){
			  if(estado1 == 0){
				  estado1 = 2;
				}
			  else{
			    estado1 = 3;
			  }
			}
			else if (shieldUp == 0 && y1 == 50 && 110-31 <= x1 && x1 <= 125){
		      finish();
		    }  //Cima OK
			
    }
  }
}

void task2(void){

 if(stop == 0){
    printbmp(x2,y2, SHURIKEN);
    switch(estado2){
			
	  case 3:
	    x2--;
	    y2--;
	    if(x2<=0 || shieldRight == 1 && x2 == 142 && 44-31 <= y2 && y2 <= 84){
	      estado2 = 2;
	    }

		else if (shieldRight == 0 && x2 == 132 && 44-31 <= y2 && y2 <= 84){
		  finish();
		}  // direita OK
		
	    if(y2 <=0 || shieldDown == 1 && y2 == 85 && x2 >= 100-31 && x2 <= 140){
	      if(estado2 == 2){
		      estado2 = 0;
		  }
		    else{
		      estado2 = 1;
		    }
	    }
         if(shieldDown == 0 && y2 == 82 && x2 >= 100-31 && x2 <= 140){
	       finish();
		 } // baixo OK
	    break;
			
	    case 2:
	      x2++;
	      y2--;
		  if(x2>=(240-21) || shieldLeft == 1 && x2 == 100-31 && 44-31 <= y2 && y2 <= 84){
		    estado2 = 3;
		  }
		  else if (shieldLeft == 0 && x2 == 100-21 && 44-21 <= y2 && y2 <= 84){
		    finish();
		  }
		  if(y2 <=0 || shieldDown == 1 && y2 == 85 && x2 >= 100-31 && x2 <= 140){
		    if(estado2 ==3){
			  estado2 = 1;
		    }  
		    else{
		      estado2 = 0;
		     }
		  }
		  else if(shieldDown == 0 && y2 == 82 && x2 >= 100-21 && x2 <= 140){
	        finish();
	    }  //baixo OK
	    break;
					
	    case 0:
		    x2++;
		    y2++;
			if(x2>=(240-21) || shieldLeft == 1 && x2 == 100-31 && 44-31 <= y2 && y2 <= 84){
			  estado2 = 1;
			}
		  else if (shieldLeft == 0 && x2 == 100-21 && 44-31 <= y2 && y2 <= 84){
		    finish();
		  }
			if(y2 > (128-21)|| shieldUp == 1 && y2 == 44-32 && 100-31 <= x2 && x2 <= 140){
			  if(estado2 == 1){
				  estado2 = 3;
			  }
			  else{
			    estado2 = 2;
			  }
			}
             else if (shieldUp == 0 && y2 == 50-22 && 100-31 <= x2 && x2 <= 140){
		      finish();
		    } //cima OK
			break;
			
		  case 1:
		    x2--;
		    y2++;
			if(x2 <= 0 || shieldRight == 1 && x2 == 132 && 44-31 <= y2 && y2 <= 84){
			  estado2 = 0;
			}
		    else if (shieldRight == 0 && x2 == 130 && 44-31 <= y2 && y2 <= 84){
		      finish();
		    } 	// direita OK

			if(y2 >= 128-21 || shieldUp == 1 && y2 == 44-32 && 100-31 <= x2 && x2 <= 140){
			  if(estado2 == 0){
				  estado2 = 2;
				}
			  else{
			    estado2 = 3;
			  }
			}
			else if (shieldUp == 0 && y2 == 50-22 && 100-31 <= x2 && x2 <= 140){
		      finish();
		    }  //Cima OK
			
    }
  }
}

