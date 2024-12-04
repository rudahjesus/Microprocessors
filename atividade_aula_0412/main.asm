;-------------------------------------------------------------------------------
; MSP430 Assembler Code Template for use with TI Code Composer Studio
;
;
;-------------------------------------------------------------------------------
            .cdecls C,LIST,"msp430.h"       ; Include device header file
            
;-------------------------------------------------------------------------------
            .def    RESET                   ; Export program entry-point to
                                            ; make it known to linker.
;-------------------------------------------------------------------------------
            .text                           ; Assemble into program memory.
            .retain                         ; Override ELF conditional linking
                                            ; and retain current section.
            .retainrefs                     ; And retain any sections that have
                                            ; references to current section.

;-------------------------------------------------------------------------------
RESET       mov.w   #__STACK_END,SP         ; Initialize stackpointer
StopWDT     mov.w   #WDTPW|WDTHOLD,&WDTCTL  ; Stop watchdog timer


;-------------------------------------------------------------------------------
; Main loop here
;-------------------------------------------------------------------------------

;MADE BY CELTA from TURMINHA DO DIDI XD
		bic.b		#BIT4,&P1DIR	;chave
		bis.b		#BIT2,&P1DIR	;Amarelo
		bis.b		#BIT0,&P2DIR	;Azul
		bis.b		#BIT1,&P2DIR	;Verde
		bis.b		#BIT4,&P2DIR	;Vermelho
		bis.b			#(BIT4+BIT5),&P1OUT

volta	bis.b		#BIT2,&P1DIR	;Amarelo
		bis.b		#BIT0,&P2DIR	;Azul
		bis.b		#BIT1,&P2DIR	;Verde
		bis.b		#BIT4,&P2DIR	;Vermelho
		bit.b		#BIT4,&P1DIR
		jnz			cima
		jmp			baixo

baixo	 	bic.b		#BIT4,&P2DIR	;Amarelo
			call #delay
			bic.b		#BIT1,&P2DIR	;Azul
			call #delay
			bic.b		#BIT0,&P2DIR	;Verde
			call #delay
			bic.b		#BIT2,&P1DIR	;Vermelho
			jmp volta

cima		bic.b		#BIT4,&P2DIR	;Amarelo
			call #delay
			bic.b		#BIT1,&P2DIR	;Azul
			call #delay
			bic.b		#BIT0,&P2DIR	;Verde
			call #delay
			bic.b		#BIT2,&P1DIR	;Vermelho
			jmp volta

delay	mov.w	#30000,r15
loop	sub	#1,r15
		jc	loop
		ret


;-------------------------------------------------------------------------------
; Stack Pointer definition
;-------------------------------------------------------------------------------
            .global __STACK_END
            .sect   .stack
            
;-------------------------------------------------------------------------------
; Interrupt Vectors
;-------------------------------------------------------------------------------
            .sect   ".reset"                ; MSP430 RESET Vector
            .short  RESET
            
