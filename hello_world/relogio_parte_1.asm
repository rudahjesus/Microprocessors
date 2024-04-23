; Projeto do relógio Digital

          dseg      at 8
seg:      ds        1
min:      ds        1
hora:     ds        1
dia:      ds        1
mes:      ds        1
ano:      ds        1

          cseg
inicio:   mov       seg,#0 
          mov       min,#0
          mov       hora,#12
          mov       dia,#11    ; 11/02/2007
          mov       mes,#2
          mov       ano,#07

volta:    inc       seg 
          mov       a,seg
          cjne      a,#60,dif60
          jmp       zeraseg
dif60:    jc        encontro1
zeraseg:  mov       seg,#0
          inc       min

		  mov		a,min
		  cjne		a,#60,dif60i
		  jmp		zeramin
dif60i:    jc        encontro1

zeramin:  mov 		min,#0
		  inc		hora

		  mov		a,hora
		  cjne		a,#24,dif24
		  jmp		zerahora
encontro1: jmp		encontro2

dif24:	  jc		encontro1

zerahora: mov		hora,#0
		  inc       dia

		  	
          ;.....
          ;....
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
dif_11:   cjne      a,#12,encontro2
		  mov 		a,dia
		  cjne		a,#31,dif31
		  jmp       encontro2
dif31:	  jnc		nano
		  jmp       encontro2

nano:	  mov		mes,#1
		  mov		dia,#1
		  inc		ano

		  mov 		a,ano
		  cjne		a,#99,dif99
		  jmp		encontro2
		  
dif99:	  jc		encontro2
		  mov		ano,#0
		  jmp       encontro2

m31:	  mov		a,dia
		  cjne		a,#31,dif31i
		  jmp       encontro2
dif31i:	  jnc		incmes
		  jmp       encontro2

m30:	  mov		a,dia
		  cjne		a,#30,dif30i
		  jmp       encontro2
dif30i:	  jnc		incmes
		  jmp       encontro2

incmes:	  mov		dia,#1
		  inc		mes
		  jmp       encontro1

fev:	  mov		a,ano
		  mov		b,#4
		  div 		ab
		  mov		a,b
		  jz		bissexto
		  mov		a,dia
		  cjne		a,#28,dif28
		  jmp       encontro1
dif28:	  jnc		incmes
		  jmp       encontro1
		  

bissexto: mov		a,dia
		  cjne		a,#29,dif29
		  jmp       encontro1
dif29:	  jnc		incmes
		  jmp       encontro1

          ;...
          ;...





encontro2:
          jmp       volta
		  
		  end          