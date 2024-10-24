/* Arquivo compactado RLE formato VM51 1/4/8bits Os n�meros colunas e linhas s�o do arquivo original */
unsigned char code rostoneutro[] = {
  
  0x43, /* Letra C de compacto */

  0x15, /* 21 colunas */
  0x15, /* 21 linhas */

  0x01, /* Tamanho em Bytes MBS 441 Bytes*/
  0xB9, /* Tamanho em Bytes LBS */

  0x03, /* Inicio Dados BitmaP MBS */
  0x08, /* Inicio Dados BitmaP LBS */

  0x08  /* Numero de bit cores */

//Paleta de cores com 256 cores RGB
, 0x00, 0x00, 0x00
, 0x80, 0x00, 0x00
, 0x00, 0x80, 0x00
, 0x80, 0x80, 0x00
, 0x00, 0x00, 0x80
, 0x80, 0x00, 0x80
, 0x00, 0x80, 0x80
, 0xC0, 0xC0, 0xC0
, 0xC0, 0xDC, 0xC0
, 0xA6, 0xCA, 0xF0
, 0x40, 0x20, 0x00
, 0x60, 0x20, 0x00
, 0x80, 0x20, 0x00
, 0xA0, 0x20, 0x00
, 0xC0, 0x20, 0x00
, 0xE0, 0x20, 0x00
, 0x00, 0x40, 0x00
, 0x20, 0x40, 0x00
, 0x40, 0x40, 0x00
, 0x60, 0x40, 0x00
, 0x80, 0x40, 0x00
, 0xA0, 0x40, 0x00
, 0xC0, 0x40, 0x00
, 0xE0, 0x40, 0x00
, 0x00, 0x60, 0x00
, 0x20, 0x60, 0x00
, 0x40, 0x60, 0x00
, 0x60, 0x60, 0x00
, 0x80, 0x60, 0x00
, 0xA0, 0x60, 0x00
, 0xC0, 0x60, 0x00
, 0xE0, 0x60, 0x00
, 0x00, 0x80, 0x00
, 0x20, 0x80, 0x00
, 0x40, 0x80, 0x00
, 0x60, 0x80, 0x00
, 0x80, 0x80, 0x00
, 0xA0, 0x80, 0x00
, 0xC0, 0x80, 0x00
, 0xE0, 0x80, 0x00
, 0x00, 0xA0, 0x00
, 0x20, 0xA0, 0x00
, 0x40, 0xA0, 0x00
, 0x60, 0xA0, 0x00
, 0x80, 0xA0, 0x00
, 0xA0, 0xA0, 0x00
, 0xC0, 0xA0, 0x00
, 0xE0, 0xA0, 0x00
, 0x00, 0xC0, 0x00
, 0x20, 0xC0, 0x00
, 0x40, 0xC0, 0x00
, 0x60, 0xC0, 0x00
, 0x80, 0xC0, 0x00
, 0xA0, 0xC0, 0x00
, 0xC0, 0xC0, 0x00
, 0xE0, 0xC0, 0x00
, 0x00, 0xE0, 0x00
, 0x20, 0xE0, 0x00
, 0x40, 0xE0, 0x00
, 0x60, 0xE0, 0x00
, 0x80, 0xE0, 0x00
, 0xA0, 0xE0, 0x00
, 0xC0, 0xE0, 0x00
, 0xE0, 0xE0, 0x00
, 0x00, 0x00, 0x40
, 0x20, 0x00, 0x40
, 0x40, 0x00, 0x40
, 0x60, 0x00, 0x40
, 0x80, 0x00, 0x40
, 0xA0, 0x00, 0x40
, 0xC0, 0x00, 0x40
, 0xE0, 0x00, 0x40
, 0x00, 0x20, 0x40
, 0x20, 0x20, 0x40
, 0x40, 0x20, 0x40
, 0x60, 0x20, 0x40
, 0x80, 0x20, 0x40
, 0xA0, 0x20, 0x40
, 0xC0, 0x20, 0x40
, 0xE0, 0x20, 0x40
, 0x00, 0x40, 0x40
, 0x20, 0x40, 0x40
, 0x40, 0x40, 0x40
, 0x60, 0x40, 0x40
, 0x80, 0x40, 0x40
, 0xA0, 0x40, 0x40
, 0xC0, 0x40, 0x40
, 0xE0, 0x40, 0x40
, 0x00, 0x60, 0x40
, 0x20, 0x60, 0x40
, 0x40, 0x60, 0x40
, 0x60, 0x60, 0x40
, 0x80, 0x60, 0x40
, 0xA0, 0x60, 0x40
, 0xC0, 0x60, 0x40
, 0xE0, 0x60, 0x40
, 0x00, 0x80, 0x40
, 0x20, 0x80, 0x40
, 0x40, 0x80, 0x40
, 0x60, 0x80, 0x40
, 0x80, 0x80, 0x40
, 0xA0, 0x80, 0x40
, 0xC0, 0x80, 0x40
, 0xE0, 0x80, 0x40
, 0x00, 0xA0, 0x40
, 0x20, 0xA0, 0x40
, 0x40, 0xA0, 0x40
, 0x60, 0xA0, 0x40
, 0x80, 0xA0, 0x40
, 0xA0, 0xA0, 0x40
, 0xC0, 0xA0, 0x40
, 0xE0, 0xA0, 0x40
, 0x00, 0xC0, 0x40
, 0x20, 0xC0, 0x40
, 0x40, 0xC0, 0x40
, 0x60, 0xC0, 0x40
, 0x80, 0xC0, 0x40
, 0xA0, 0xC0, 0x40
, 0xC0, 0xC0, 0x40
, 0xE0, 0xC0, 0x40
, 0x00, 0xE0, 0x40
, 0x20, 0xE0, 0x40
, 0x40, 0xE0, 0x40
, 0x60, 0xE0, 0x40
, 0x80, 0xE0, 0x40
, 0xA0, 0xE0, 0x40
, 0xC0, 0xE0, 0x40
, 0xE0, 0xE0, 0x40
, 0x00, 0x00, 0x80
, 0x20, 0x00, 0x80
, 0x40, 0x00, 0x80
, 0x60, 0x00, 0x80
, 0x80, 0x00, 0x80
, 0xA0, 0x00, 0x80
, 0xC0, 0x00, 0x80
, 0xE0, 0x00, 0x80
, 0x00, 0x20, 0x80
, 0x20, 0x20, 0x80
, 0x40, 0x20, 0x80
, 0x60, 0x20, 0x80
, 0x80, 0x20, 0x80
, 0xA0, 0x20, 0x80
, 0xC0, 0x20, 0x80
, 0xE0, 0x20, 0x80
, 0x00, 0x40, 0x80
, 0x20, 0x40, 0x80
, 0x40, 0x40, 0x80
, 0x60, 0x40, 0x80
, 0x80, 0x40, 0x80
, 0xA0, 0x40, 0x80
, 0xC0, 0x40, 0x80
, 0xE0, 0x40, 0x80
, 0x00, 0x60, 0x80
, 0x20, 0x60, 0x80
, 0x40, 0x60, 0x80
, 0x60, 0x60, 0x80
, 0x80, 0x60, 0x80
, 0xA0, 0x60, 0x80
, 0xC0, 0x60, 0x80
, 0xE0, 0x60, 0x80
, 0x00, 0x80, 0x80
, 0x20, 0x80, 0x80
, 0x40, 0x80, 0x80
, 0x60, 0x80, 0x80
, 0x80, 0x80, 0x80
, 0xA0, 0x80, 0x80
, 0xC0, 0x80, 0x80
, 0xE0, 0x80, 0x80
, 0x00, 0xA0, 0x80
, 0x20, 0xA0, 0x80
, 0x40, 0xA0, 0x80
, 0x60, 0xA0, 0x80
, 0x80, 0xA0, 0x80
, 0xA0, 0xA0, 0x80
, 0xC0, 0xA0, 0x80
, 0xE0, 0xA0, 0x80
, 0x00, 0xC0, 0x80
, 0x20, 0xC0, 0x80
, 0x40, 0xC0, 0x80
, 0x60, 0xC0, 0x80
, 0x80, 0xC0, 0x80
, 0xA0, 0xC0, 0x80
, 0xC0, 0xC0, 0x80
, 0xE0, 0xC0, 0x80
, 0x00, 0xE0, 0x80
, 0x20, 0xE0, 0x80
, 0x40, 0xE0, 0x80
, 0x60, 0xE0, 0x80
, 0x80, 0xE0, 0x80
, 0xA0, 0xE0, 0x80
, 0xC0, 0xE0, 0x80
, 0xE0, 0xE0, 0x80
, 0x00, 0x00, 0xC0
, 0x20, 0x00, 0xC0
, 0x40, 0x00, 0xC0
, 0x60, 0x00, 0xC0
, 0x80, 0x00, 0xC0
, 0xA0, 0x00, 0xC0
, 0xC0, 0x00, 0xC0
, 0xE0, 0x00, 0xC0
, 0x00, 0x20, 0xC0
, 0x20, 0x20, 0xC0
, 0x40, 0x20, 0xC0
, 0x60, 0x20, 0xC0
, 0x80, 0x20, 0xC0
, 0xA0, 0x20, 0xC0
, 0xC0, 0x20, 0xC0
, 0xE0, 0x20, 0xC0
, 0x00, 0x40, 0xC0
, 0x20, 0x40, 0xC0
, 0x40, 0x40, 0xC0
, 0x60, 0x40, 0xC0
, 0x80, 0x40, 0xC0
, 0xA0, 0x40, 0xC0
, 0xC0, 0x40, 0xC0
, 0xE0, 0x40, 0xC0
, 0x00, 0x60, 0xC0
, 0x20, 0x60, 0xC0
, 0x40, 0x60, 0xC0
, 0x60, 0x60, 0xC0
, 0x80, 0x60, 0xC0
, 0xA0, 0x60, 0xC0
, 0xC0, 0x60, 0xC0
, 0xE0, 0x60, 0xC0
, 0x00, 0x80, 0xC0
, 0x20, 0x80, 0xC0
, 0x40, 0x80, 0xC0
, 0x60, 0x80, 0xC0
, 0x80, 0x80, 0xC0
, 0xA0, 0x80, 0xC0
, 0xC0, 0x80, 0xC0
, 0xE0, 0x80, 0xC0
, 0x00, 0xA0, 0xC0
, 0x20, 0xA0, 0xC0
, 0x40, 0xA0, 0xC0
, 0x60, 0xA0, 0xC0
, 0x80, 0xA0, 0xC0
, 0xA0, 0xA0, 0xC0
, 0xC0, 0xA0, 0xC0
, 0xE0, 0xA0, 0xC0
, 0x00, 0xC0, 0xC0
, 0x20, 0xC0, 0xC0
, 0x40, 0xC0, 0xC0
, 0x60, 0xC0, 0xC0
, 0x80, 0xC0, 0xC0
, 0xA0, 0xC0, 0xC0
, 0xFF, 0xFB, 0xF0
, 0xA0, 0xA0, 0xA4
, 0x80, 0x80, 0x80
, 0xFF, 0x00, 0x00
, 0x00, 0xFF, 0x00
, 0xFF, 0xFF, 0x00
, 0x00, 0x00, 0xFF
, 0xFF, 0x00, 0xFF
, 0x00, 0xFF, 0xFF
, 0xFF, 0xFF, 0xFF

//Dados do Bitmap
, 0x01, 0x01, 0x16, 0x6F, 0x01, 0x13, 0xFB, 0x6F
, 0x6F, 0x01, 0x13, 0xFB, 0x6F, 0x6F, 0x01, 0x13
, 0xFB, 0x6F, 0x6F, 0x01, 0x13, 0xFB, 0x6F, 0x6F
, 0x01, 0x05, 0xFB, 0x00, 0x01, 0x06, 0xFB, 0x00
, 0x01, 0x06, 0xFB, 0x6F, 0x6F, 0x01, 0x05, 0xFB
, 0x00, 0x01, 0x06, 0xFB, 0x00, 0x01, 0x06, 0xFB
, 0x6F, 0x6F, 0x01, 0x05, 0xFB, 0x00, 0x01, 0x06
, 0xFB, 0x00, 0x01, 0x06, 0xFB, 0x6F, 0x6F, 0x01
, 0x05, 0xFB, 0x00, 0x01, 0x06, 0xFB, 0x00, 0x01
, 0x06, 0xFB, 0x6F, 0x6F, 0x01, 0x13, 0xFB, 0x6F
, 0x6F, 0x01, 0x13, 0xFB, 0x6F, 0x6F, 0x01, 0x13
, 0xFB, 0x6F, 0x6F, 0x01, 0x13, 0xFB, 0x6F, 0x6F
, 0x01, 0x03, 0xFB, 0x01, 0x0D, 0x00, 0x01, 0x03
, 0xFB, 0x6F, 0x6F, 0x01, 0x13, 0xFB, 0x6F, 0x6F
, 0x01, 0x13, 0xFB, 0x6F, 0x6F, 0x01, 0x13, 0xFB
, 0x6F, 0x6F, 0x01, 0x13, 0xFB, 0x6F, 0x6F, 0x01
, 0x13, 0xFB, 0x6F, 0x6F, 0x01, 0x13, 0xFB, 0x01
, 0x15, 0x6F, 0x6F

}; // Fim do vetor.