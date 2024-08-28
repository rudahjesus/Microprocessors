;made by turminha do didi XD

SOM  equ  P1.2

       bseg
flag:  dbit  1

       dseg at 8
Ncont: ds  1

;----------------------------------------------------------------------
       cseg at 0
       jmp inicio

;-------------------------------------------------------------------
       cseg at 000Bh
       jmp  rot1

       cseg at 001Bh
       jmp  rot2

rot1:  mov  TH0,#(256-210)
       jb   flag,incnc
       dec  Ncont
       mov  a,Ncont
       CJNE a,#114,trocas
       jmp  trocaf

rot2:  CPL SOM
       reti

incnc: inc  Ncont
       mov  a,Ncont
       CJNE a,#213,trocas
       jmp trocaf

trocaf:cpl flag
       jmp trocas

trocas: mov a,#0
        CLR C
        SUBB a,Ncont
        mov TH1,a
        reti
;-------------------------------------------------------------------
inicio:mov  SP,#30h-1
       mov  tmod,#20h
       mov  TH0,#(256-210)
       mov  TH1,# (256-43)
       mov  IE,#8Ah
       mov Ncont,#213
       CLR flag
       SETB TR0
       SETB TR1
       jmp  volta
       

volta: jmp $ 

       end      
