;MADE BY TURMINHA DO DIDI

; programa do rel'ogio completo
          bseg

fdsp0:   dbit      1
fdsp1:   dbit      1
fdsp2:   dbit      1
fdsp3:   dbit      1
fdsp4:   dbit      1
fdsp5:   dbit      1
fdsp6:   dbit      1
fdsp7:   dbit      1

; aqui colocar oa flags do programa do da verredura (MUX)
          dseg at 8
seg:      ds        1
min:      ds        1
hora:     ds        1
dia:      ds        1
mes:      ds        1
ano:      ds        1
cod0:     ds        1
cod1:     ds        1
cod2:     ds        1
cod3:     ds        1
cod4:     ds        1
cod5:     ds        1
cod6:     ds        1
cod7:     ds        1
; aqui colocar as veri'aveis do programa da verredura (MUX)
; e as do rel'ogio
          cseg
inicio:	     
		  setb      fdsp0     ; liga flag
          clr       fdsp1   
          clr       fdsp2   
          clr       fdsp3   
          clr       fdsp4   
          clr       fdsp5   
          clr       fdsp6   
          clr       fdsp7
          mov       cod7,#0afh
          mov       cod6,#88h
          mov       cod5,#0f9h
          mov       cod4,#0c8h
          mov       cod3,#0c1h
          mov       cod2,#0abh
          mov       cod1,#0a1h
          mov       cod0,#0a3h
		  mov       seg,#0     ; 12:00:00
          mov       min,#0
          mov       hora,#12
          mov       dia,#3    ; 03/04/2024
          mov       mes,#4
          mov       ano,#24
; colocar as inicializa'coes dos as veri'aveis do programa da verredura (MUX)
; e as do rel'ogio
volta:    

		  ; colocar aqui o programa da multiplexa'c~aao
          ; + o delay
          inc       r2
          cjne      r2,#240,encontro2
          mov       r2,#0

          jnb       CHV0,ajustadata
          ; ajusta hora
ajustadata:
          ; ajusta data
          ; E O DIA DA SEMANA
          ;
          inc       r3
          cjne      r3,#2,encontro3
          mov       r3,#0
; coloque aqui o progrma do incremento do rel'ogio
          jnb       CHV0,mostraadata
; DSP7 DSP6 DSP5 DSP4 DSP3 DSP2 DSP1 DSP0
;  DH   UH   .    DM   UM   .    DS   US
          mov       a,seg
          mov       b,#10
          div       ab     ; a= dezena, b = unidade
          mov       dptr,#tabela
          movc      a,@a+dptr  ; j'a tenho o c'odigo em hexa
          mov       COD1,a
          mov       a,b
          movc      a,@a+dptr  ; j'a tenho o c'odigo em hexa
          mov       COD0,a
          jmp       final

            

mostraadata:

final:    
encontro2: jmp        volta

tabela:   ds        0c0h  ; 0
          ds        0f9h  ;1

          ds        0x80  ; 8
          ds        0x90  ; 9