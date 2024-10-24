/* Arquivo compactado RLE formato VM51 1/4/8bits Os n�meros colunas e linhas s�o do arquivo original */
unsigned char code DIDICOLHER[] = {
  
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
, 0x01, 0x01, 0x16, 0xE8, 0xF6, 0xF6, 0xF7, 0x5B
, 0x9B, 0xA4, 0x01, 0x0D, 0xEF, 0xE8, 0xE8, 0xFF
, 0x08, 0x01, 0x03, 0x9B, 0xA4, 0x01, 0x0D, 0xEF
, 0xE8, 0xE8, 0xFF, 0x07, 0x9B, 0x5B, 0x5B, 0x01
, 0x0E, 0xEF, 0xE8, 0xE8, 0xF6, 0x08, 0xA4, 0x01
, 0x10, 0xEF, 0xE8, 0xE8, 0x08, 0x07, 0x01, 0x11
, 0xEF, 0xE8, 0xE8, 0x9C, 0xA4, 0x01, 0x11, 0xEF
, 0xE8, 0xE8, 0x52, 0x5B, 0x01, 0x11, 0xEF, 0xE8
, 0xE8, 0x52, 0x52, 0x01, 0x07, 0xEF, 0x49, 0x00
, 0x49, 0x01, 0x07, 0xEF, 0xE8, 0xE8, 0x52, 0x52
, 0x01, 0x06, 0xEF, 0x0A, 0x52, 0x49, 0x00, 0x00
, 0x01, 0x06, 0xEF, 0xE8, 0xE8, 0x4A, 0x01, 0x06
, 0xEF, 0x49, 0x01, 0x03, 0x52, 0x49, 0x00, 0x00
, 0x01, 0x05, 0xEF, 0xE8, 0xE8, 0x49, 0x01, 0x05
, 0xEF, 0x52, 0x4A, 0x52, 0x52, 0x01, 0x03, 0x49
, 0x00, 0x52, 0x01, 0x04, 0xEF, 0xE8, 0xE8, 0x01
, 0x06, 0xEF, 0x52, 0x01, 0x05, 0x49, 0x00, 0x00
, 0x49, 0x01, 0x04, 0xEF, 0xE8, 0xE8, 0x01, 0x05
, 0xEF, 0x52, 0x49, 0x01, 0x07, 0x00, 0x49, 0x01
, 0x04, 0xEF, 0xE8, 0xE8, 0x01, 0x05, 0xEF, 0xA4
, 0x52, 0x01, 0x07, 0x00, 0x49, 0x01, 0x04, 0xEF
, 0xE8, 0xE8, 0x01, 0x05, 0xEF, 0xA4, 0x49, 0x00
, 0x00, 0x49, 0x01, 0x04, 0x00, 0x52, 0x01, 0x04
, 0xEF, 0xE8, 0xE8, 0x01, 0x05, 0xEF, 0x52, 0x01
, 0x04, 0x49, 0x01, 0x04, 0x00, 0x52, 0x01, 0x04
, 0xEF, 0xE8, 0xE8, 0x01, 0x05, 0xEF, 0x52, 0x01
, 0x08, 0x00, 0x52, 0x01, 0x04, 0xEF, 0xE8, 0xE8
, 0x01, 0x05, 0xEF, 0x52, 0x01, 0x08, 0x00, 0x01
, 0x05, 0xEF, 0xE8, 0xE8, 0x01, 0x05, 0xEF, 0x52
, 0x01, 0x07, 0x00, 0x49, 0x01, 0x05, 0xEF, 0x01
, 0x15, 0xE8, 0xE8

}; // Fim do vetor.