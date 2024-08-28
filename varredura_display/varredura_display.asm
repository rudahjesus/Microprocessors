;hacked by turminha do DIDI
;programa de controle de display 7 seg
CHV0		equ 		p3.0
CHV1 		equ 		p3.1

DSP0		equ 		p2.4
DSP1	 	equ			p2.0
DSP2		equ 		p2.1
DSP3		equ 		p2.2
DSP4		equ 		p2.3
DSP5		equ 		p2.5
DSP6		equ 		p2.6
DSP7		equ 		p2.7


				bseg		;abaixo tem os flags
fdsp0:			dbit		1
fdsp1:			dbit		1
fdsp2:			dbit		1
fdsp3:			dbit		1
fdsp4:			dbit		1
fdsp5:			dbit		1
fdsp6:			dbit		1
fdsp7:			dbit		1
	        
				dseg at 8	;abaixo tem as variáveis
cod0:			ds			1
cod1:			ds			1
cod2:			ds			1
cod3:			ds			1
cod4:			ds			1
cod5:			ds			1
cod6:			ds			1
cod7:			ds			1

				cseg	;inicia o código
inicio:			setb	fdsp0
				clr		fdsp1
				clr		fdsp2
				clr		fdsp3
				clr		fdsp4
				clr		fdsp5
				clr		fdsp6
				clr		fdsp7

				mov			cod0,#0bfh
				mov			cod1,#0bfh
				mov			cod2,#0bfh
				mov			cod3,#0bfh
				mov			cod4,#0bfh
				mov			cod5,#0bfh
				mov			cod6,#0bfh
				mov			cod7,#0bfh

volta:			mov   	P2,#0ffh	;volta
				jb 		fdsp0,ligardsp0
				jb 		fdsp1,ligardsp1
				jb 		fdsp2,ligardsp2
				jb 		fdsp3,ligardsp3
				jb 		fdsp4,ligardsp4
				jb 		fdsp5,ligardsp5
				jb 		fdsp6,ligardsp6
				jb 		fdsp7,ligardsp7

ligardsp0: 		
			mov 		P0,cod0
			clr 		DSP0
			clr 		fdsp0
			setb		fdsp1
			jmp			encontro1

ligardsp1: 		
			mov 		P0,cod1
			clr 		DSP1
			clr 		fdsp1
			setb		fdsp2
			jmp			encontro1

ligardsp2: 		
			mov 		P0,cod2
			clr 		DSP2
			clr 		fdsp2
			setb		fdsp3
			jmp			encontro1

ligardsp3: 		
			mov 		P0,cod3
			clr 		DSP3
			clr 		fdsp3
			setb		fdsp4
			jmp			encontro1

ligardsp4: 		
			mov 		P0,cod4
			clr 		DSP4
			clr 		fdsp4
			setb		fdsp5
			jmp			encontro1

ligardsp5: 		
			mov 		P0,cod5
			clr 		DSP5
			clr 		fdsp5
			setb		fdsp6
			jmp			encontro1

ligardsp6: 		
			mov 		P0,cod6
			clr 		DSP6
			clr 		fdsp6
			setb		fdsp7
			jmp			encontro1

ligardsp7: 		
			mov 		P0,cod7
			clr 		DSP7
			clr 		fdsp7
			setb		fdsp0
			jmp			encontro1


encontro1:
			;delay
			mov			r7,#43
rot2:		mov			r6,#46		;1
rot:		djnz	 	r6,rot		;2
			djnz		r7,rot2	;AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
			jnb			CHV0,mostraplv0
			jnb			CHV1,mostraplv1
			jmp			volta


mostraplv0: 
			mov			cod0,#0c0h
			mov			cod1,#0a1h
			mov			cod2,#0c8h
			mov			cod3,#0c1h
			mov			cod4,#0abh
			mov			cod5,#0a0h
			mov			cod6,#0c7h
			mov			cod7,#0c0h
			jmp			volta
			
mostraplv1:
			mov			cod0,#0c0h
			mov			cod1,#0a1h
			mov			cod2,#0c8h
			mov			cod3,#0c1h
			mov			cod4,#0abh
			mov			cod5,#0cfh
			mov			cod6,#0a0h
			mov			cod7,#0ceh
			jmp			volta
			end
