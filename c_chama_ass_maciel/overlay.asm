;PROGRAM BY MORCEGOPOCILGA
; programa do conjunto de funções 
; biblioteca de função
public    _led_on
public    _led_off
public    delay

          cseg      at 50h
_led_on:  mov       a,r7
          mov       dptr,#tabela
          movc      a,@a+dptr
          anl       P1,a
          ret

_led_off: mov       a,r7
          mov       dptr,#tabela
          movc      a,@a+dptr
          cpl       a
          orl       P1,a
          ret

delay:    mov       r0,#255
rot:      mov       r1,#255
          djnz      r1,$
          djnz      r0,rot
          ret
          ret

tabela:   db        11111110b  ; led 0
          db        11111101b  ; led 1
          db        11111011b  ; led 2
          db        11110111b  ; led 3
          db        11101111b  ; led 4
          db        11011111b  ; led 5
          db        10111111b  ; led 6
          db        01111111b  ; led 7
          
                    end