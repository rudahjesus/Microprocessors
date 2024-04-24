;MADE BY TURMINHA DO DIDI

; programa do rel'ogio completo
ANODE	   equ		P2.4
CHV0	   equ		P3.0
CHV1	   equ		P3.1
CHV2	   equ		P3.2
CHV3	   equ		P3.3
CHV4	   equ		P3.4
CHV5	   equ		P3.5
CHV6	   equ		P3.6
CHV7	   equ		P3.7
DSP   	   equ		P0

DSP0      equ       P2.4
DSP1      equ       P2.0
DSP2      equ       P2.1
DSP3      equ       P2.2
DSP4      equ       P2.3
DSP5      equ       P2.5
DSP6      equ       P2.6
DSP7      equ       P2.7

          bseg
fdsp0:   dbit      1
fdsp1:   dbit      1
fdsp2:   dbit      1
fdsp3:   dbit      1
fdsp4:   dbit      1
fdsp5:   dbit      1
fdsp6:   dbit      1
fdsp7:   dbit      1

          dseg at 8
cod0:     ds        1
cod1:     ds        1
cod2:     ds        1
cod3:     ds        1
cod4:     ds        1
cod5:     ds        1
cod6:     ds        1
cod7:     ds        1
	
sec:  	  ds        1
min:      ds        1
hora:     ds        1
dia:      ds        1
mes:      ds        1
ano:      ds        1
          cseg
inicio:   ; colocar as inicializa'coes dos as veri'aveis do programa da verredura (MUX)
		  setb       fdsp0;display0
          clr        fdsp1
          clr        fdsp1
          clr        fdsp1
          clr        fdsp1
          clr        fdsp1
          clr        fdsp1
          clr        fdsp1
		  
		  mov      cod7,#0c0h
          mov      cod6,#0C0h
          mov      cod5,#0c0h
          mov      cod4,#0c0h ;
          mov      cod3,#0c0h
          mov      cod2,#0c0h;
          mov      cod1,#0c0h
          mov      cod0,#0c0h
; e as do rel'ogio
		  mov       sec,#0         ;12:00:00
          mov       min,#0
          mov       hora,#12
          mov       dia,#11         ;11/02/2007
          mov       mes,#2
          mov       ano,#07
          mov       R2,#0
          mov       R3,#0

volta:    ; Colocar aqui o programa do MUX  + o delay
		  mov        P2, #0FFH
          jb         fdsp0,ligardsp0
          jb         fdsp1,ligardsp1
          jb         fdsp2,ligardsp2
          jb         fdsp3,ligardsp3
          jb         fdsp4,ligardsp4
          jb         fdsp5,ligardsp5
          jb         fdsp6,ligardsp6
          jb         fdsp7,ligardsp7
         


ligardsp0:mov      P0,cod0
           clr      DSP0
           clr      fdsp0
           setb     fdsp1
           jmp      stop

ligardsp1:mov      P0,cod1
           clr      DSP1
           clr      fdsp1
           setb     fdsp2
           jmp      stop

ligardsp2:mov      P0,cod2
           clr      DSP2
           clr      fdsp2
           setb     fdsp3
           jmp      stop

ligardsp3:mov      P0,cod3
           clr      DSP3
           clr      fdsp3
           setb     fdsp4
           jmp      stop

ligardsp4:mov      P0,cod4
           clr      DSP4
           clr      fdsp4
           setb     fdsp5
           jmp      stop

ligardsp5:mov      P0,cod5
           clr      DSP5
           clr      fdsp5
           setb     fdsp6
           jmp      stop

ligardsp6:mov      P0,cod6
           clr      DSP6
           clr      fdsp6
           setb     fdsp7
           jmp      stop

ligardsp7:mov      P0,cod7
           clr      DSP7
           clr      fdsp7
           setb     fdsp0
           jmp      stop
stop:
			mov			r7,#43
rot2:  		mov 		r6,#46
rot:  		djnz		r6,rot
		    djnz		r7,rot2


           inc       r2
           cjne      r2,#240,encontro2x
           mov       r2,#0
;---------------------------------------------------
; dever de casa
          jnb       CHV0,ajustadata
          ; ajusta hora
		  jmp		final1
encontro2x:
		  jmp		encontro2
ajustadata:
          ; ajusta data
          ; 
          ;
;---------------------------------------------------
final1: 
          inc       r3
          cjne      r3,#2,encontro1x
          mov       r3,#0
;
; coloque aqui o programa do incremento do rel'ogio
          inc       sec            ;seg = seg+1
          mov       a,sec
          cjne      a,#60,dif60
          jmp       zeraseg
dif60:    jc        encontro1x

         
zeraseg:  mov       sec,#0
          inc       min
          mov       a,min
          cjne      a,#60,dif60
          jmp       zeramin

zeramin:  mov       min,#0
          inc       hora
          mov       a,hora
          cjne      a,#24,dif24
          jmp       zerahora

encontro1x:jmp      encontro1
dif24:    jc        encontro1x

zerahora: mov       hora,#0
          inc       dia
          mov       a,mes
          cjne      a,#1,dif_1
          jmp       m31

dif_1:    cjne      a,#2,dif_2
          jmp       fev
dif_2:    cjne      a,#3,dif_3
          jmp       m31
dif_3:    cjne      a,#4,dif_4
          jmp       m30
dif_4:    cjne      a,#5,dif_5
          jmp       m31
dif_5:    cjne      a,#6,dif_6
          jmp       m30
dif_6:    cjne      a,#7,dif_7
          jmp       m31
dif_7:    cjne      a,#8,dif_8
          jmp       m31
dif_8:    cjne      a,#9,dif_9
          jmp       m30
dif_9:    cjne      a,#10,dif_10
          jmp       m31
dif_10:   cjne      a,#11,dif_11
          jmp       m30
dif_11:   cjne      a,#12,encontro1x
          mov       a,dia
          cjne      a,#31,dif31
          mov       dia,#1
          mov       mes,#1
          inc       ano
          mov       a,ano
          cjne      a,#99,dif99
          jmp       zera_ano
dif99:    jc        encontro1x
zera_ano: mov       ano,#0
          jmp       encontro1x
     
m31:      mov       a,dia
          cjne      a,#31,dif31
          jmp       encontro1x
dif31:    jc        encontro1x
          inc       mes
          mov       dia,#1 
          jmp       encontro1x

m30:      mov       a,dia
          cjne      a,#30,dif30
          jmp       encontro1x
dif30:    jc        encontro1x
          inc       mes
          mov       dia,#1 
          jmp       encontro1x
          
fev:      mov       a,ano
          mov       b,#4
          div       ab
          mov       a,b
          jz        bissexto
          mov       a,dia
          cjne      a,#28,dif28
          jmp       encontro1x
dif28:    jc        encontro1
          inc       mes
          mov       dia,#1 
          jmp       encontro1
                      
bissexto: mov       a,dia
          cjne      a,#29,dif29
          jmp       encontro1
dif29:    jc        encontro1
          inc       mes
          mov       dia,#1 
          jmp       encontro1

encontro1:
          jnb       CHV0,mostraadata
; DSP7 DSP6 DSP5 DSP4 DSP3 DSP2 DSP1 DSP0
;  DH   UH   .    DM   UM   .    DS   US

; cod7 cod6 cod5 cod4  cod3 cod2 cod1 cod0
; 
          mov       a,sec
          mov       b,#10
          div       ab     ; a= dezena, b = unidade
          mov       dptr,#tabela
          movc      a,@a+dptr  ; j'a tenho o c'odigo em hexa
          mov       COD1,a
          mov       a,b
          movc      a,@a+dptr  ; j'a tenho o c'odigo em hexa
          mov       COD0,a

		  mov       a,min
          mov       b,#10
          div       ab     ; a= dezena, b = unidade
          mov       dptr,#tabela
          movc      a,@a+dptr  ; j'a tenho o c'odigo em hexa
          mov       COD4,a
          mov       a,b
          movc      a,@a+dptr  ; j'a tenho o c'odigo em hexa
          mov       COD3,a

          mov       a,hora
          mov       b,#10
          div       ab     ; a= dezena, b = unidade
          mov       dptr,#tabela
          movc      a,@a+dptr  ; j'a tenho o c'odigo em hexa
          mov       COD7,a
          mov       a,b
          movc      a,@a+dptr  ; j'a tenho o c'odigo em hexa
          mov       COD6,a

		  mov		COD2,#7Fh
		  mov		COD5,#7Fh

          jmp       encontro2
            

mostraadata:  
		  mov       a,dia
          mov       b,#10
          div       ab     ; a= dezena, b = unidade
          mov       dptr,#tabela
          movc      a,@a+dptr  ; j'a tenho o c'odigo em hexa
          mov       COD7,a
          mov       a,b
          movc      a,@a+dptr  ; j'a tenho o c'odigo em hexa
          mov       COD6,a

		  mov       a,mes
          mov       b,#10
          div       ab     ; a= dezena, b = unidade
          mov       dptr,#tabela
          movc      a,@a+dptr  ; j'a tenho o c'odigo em hexa
          mov       COD4,a
          mov       a,b
          movc      a,@a+dptr  ; j'a tenho o c'odigo em hexa
          mov       COD3,a

		  mov       a,ano
          mov       b,#10
          div       ab     ; a= dezena, b = unidade
          mov       dptr,#tabela
          movc      a,@a+dptr  ; j'a tenho o c'odigo em hexa
          mov       COD1,a
          mov       a,b
          movc      a,@a+dptr  ; j'a tenho o c'odigo em hexa
          mov       COD0,a

		  mov		COD2,#0BFh
		  mov		COD5,#0BFh

encontro2: jmp        volta

tabela:   	db      0c0h  ; 0
			db      0f9h  ;1
			db		0a4h  ;2
			db		0b0h  ;3
			db		0x99  ;4
			db		0x92  ;5
			db		0x82  ;6
			db		0d8h  ;7
			db      0x80  ; 8
			db      0x90  ; 9

			end
