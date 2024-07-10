;made by turminha d0 didi

SOM 		equ			P1.2
			
inicio: 	mov			TMOD,#20h; timer 1 modo 2
								 ; timer 0 modo 0
			mov 		TH1,#(256-141)  ;  N DO SOM  20%: 176
			mov 		TH0,#(256-59) ; N DO INTERVALO
			mov			r0, #0 				; inicio do MOD
			setb		TR0
			setb		TR1					; liga os dois

volta:		jb			TF1,ligasom
			jb			TF0, procintv
			jmp 		volta

procintv:	clr			TF0
			mov			TH0,#(256-59) ;n do intervalo
			inc			r0
			cjne		r0, #56,volta ;compara com M
			mov			r0, #0
			jb			F0, #(256-176)
			cpl			F0
			jmp			volta



ligasom: 	clr			TF1
			cpl			SOM	
			JMP			volta
			end