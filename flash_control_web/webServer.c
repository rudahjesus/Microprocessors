// Servidor WEB com uC 8051

#include <reg52.h>
#include <stdio.h>
#include <string.h>

#define STX 0xAA
#define ETX 0xA5

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
    if(strncmp(buffer,"GET /",5)==0){
      printf("HTTP/1.1 200 OK\n\n");
      printf("<!DOCTYPE html>");
      printf("<html>");
      printf("<head>");
      printf("<title>Aplicação SMP</title>");
      printf("</head>");
      printf("<body>");
      printf("<h1>CONTROLE DE LÂMPADAS</h1>");
      printf("<p>Bem vindo ao HTML</p>");
      printf("</body>");
      printf("</html> ");
      printf("%c%c%c",ETX,ETX,ETX);
    }  
  }
}