// Servidor WEB com uC 8051

#include <reg52.h>
#include <stdio.h>
#include <string.h>

#define STX 0xAA
#define ETX 0xA5

sbit LAMP1 = P1^0;
sbit LAMP2 = P1^1; 
sbit LAMP3 = P1^2;
sbit LAMP4 = P1^3;

extern char code htmlpage[];
void main(void){
  unsigned int contstx;
  char buffer[32];  // vai ficar aqui os bytes recebidos
  char i;
  unsigned int cont_timeout = 0;

  TMOD = 0x20;
  SCON = 0x52;
  TH1 = (256-13);
  PCON |= 0x80; // SMOD = 1
  TR1 = 1;
  while(1) {
    cont_timeout = 0; i= 0; contstx = 0;
    while(1) {
      if (RI == 1) {
        RI = 0;
        buffer[i] = SBUF;
        cont_timeout = 0;
        i++;
        if (i>=32) i = 31;
      } else {
        cont_timeout++;
        if (cont_timeout >= 200) {
          if (i >= 5) break;
        }
        contstx++;
        if (contstx >= 65530) {
          contstx = 0;
          printf("%c",STX);  // 4s
        }
      }     
    }
    if(strncmp(buffer,"GET /lampcntl1",14)==0){
       LAMP1 = ~LAMP1;
       if (LAMP1 == 0){
       printf("1");
       }
       else{
       printf("0");
       }
       printf("%c%c%c", ETX,ETX,ETX);
    }
      else if(strncmp(buffer,"GET /lampcntl2",14)==0){
       LAMP2 = ~LAMP2;
       if (LAMP2 == 0){
        printf("1");
       }
       else{
        printf("0");
       }
       printf("%c%c%c", ETX,ETX,ETX);
      }
      else if(strncmp(buffer,"GET /lampcntl3",14)==0){
       LAMP3 = ~LAMP3;
       if (LAMP3 == 0){
        printf("1");
       }
       else{
        printf("0");
       }
       printf("%c%c%c", ETX,ETX,ETX);
      } 
      else if(strncmp(buffer,"GET /lampcntl4",14)==0){
       LAMP4 = ~LAMP4;
       if (LAMP4 == 0){
        printf("1");
       }
       else{
        printf("0");
       }
       printf("%c%c%c", ETX,ETX,ETX);
      }
    else if(strncmp(buffer,"GET /",5)==0){
      printf("HTTP/1.1 200 OK\n\n");
      printf("%s",htmlpage);
  
      printf("%c%c%c",ETX,ETX,ETX);
    }  
  }
}