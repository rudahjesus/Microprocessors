;made by TURMINHA DO DIDI - GFDD
;programa de controle Fluxo bomba
;SPE - sensor de pressão
;SPS - sensor de poço seco
;SPV - sensor de poço vazio
;SPC - sensor de poço cheio
;STV - sensor de tanque vazio
;STC - sensor de tanque cheio
;Vvin - Valvula do vizinho
;Vsin - Valvula do sindico
;ALMV - alarme do vizinho
;ALMS - alarme do síndico

;sensores
SPE		equ			p3.0
SPS 	equ 		p3.1
SPV		equ 		p3.2
SPC 	equ 		p3.3
STV		equ			p3.4
STC		equ			p3.5
Vvin 	equ 		p3.6
Vsin 	equ 		p3.7
;atuadores

VAL 	equ 		p1.0
BM 		equ 		p1.1
ALMV 	equ 		p1.2
ALMS 	equ 		p1.3
LED_FALHA 	equ 	p1.4


inicio: setb		VAL	   		;desliga todas as carga;
		setb		BM	   		;bomba
		setb		ALMV			;alarme vizinho
		setb 		ALMS			;alarme síndico

		 
volta:	 jnb		SPE,teste_spc	;saltar se SPE ativo
		 setb		VAL				; fecha a valvula
		 jmp		encontro1


teste_spc:	jnb		SPC,teste_spv		; salta se tiver com o poço cheio
			jnb		SPV,encontro1		; salta se poço vazio
			clr		VAL					; abre a valvula
			jmp 	encontro1

teste_spv:  jnb		SPV,fecha_val
			jmp		falha

falha:  setb			VAL
	  	setb			BM
		setb			ALMV
		setb			ALMS
		clr				LED_FALHA
		jmp				$


fecha_val:  setb	VAL
            jmp		encontro1


encontro1:  jnb		SPS,teste_stc
            setb	BM
			jmp		encontro2


teste_stc:  jnb		STC,teste_stv
     		jnb		STV,encontro2
			clr     BM 
            jmp		encontro2	 

teste_stv:  jnb		STV,fecha_bm
			jmp		falha

fecha_bm:   setb	BM
            jmp		encontro2

encontro2: jnb		SPS, desligaALMV
		   jnb		Vvin, ligaALMV
		   setb		ALMV
		   jnb		Vsin, ligaALMS
		   jmp		desligaALMS

ligaALMV:	clr		ALMV
			clr		ALMS
			jmp		volta

desligaALMV: setb	ALMV
			 jmp	volta


ligaALMS:	 clr	ALMS
			 jmp 	volta

desligaALMS: setb	ALMS
			 jmp	volta
			 end
