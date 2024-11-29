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

	.bss	var1,1	;cria variavel de 1 byte
	.bss	var2,1	; ''
	.bss	var3,1
	.bss	var4,1
	.bss	var5,1
	.bss	var6,1

;-------------------------------------------------------------------------------
; Main loop here
;-------------------------------------------------------------------------------

;MADE BY CELTA from TURMINHA DO DIDI XD

inicio	mov.b	#0ffh,&P1DIR	;seta todos os bits da porta 1 como saida
	mov.b	#0ffh,&P2DIR
	mov.b	#0ffh,&P3DIR
	mov.b	#0ffh,&P4DIR
	mov.b	#0ffh,&P5DIR
	mov.b	#0ffh,&P6DIR
	bis.b	#BIT0,&var1		;liga bit 0 da variavel
	bis.b	#BIT1,&var3
	bis.b	#BIT2,&var5

volta	bit.b	#BIT7,&var2		;carry sera igual ao bit7 de var2
	bit.b	#BIT7,&var4
	bit.b	#BIT7,&var6
	rlc.b	&var1
	rlc.b	&var2
	rlc.b	&var3
	rlc.b	&var4
	rlc.b	&var5
	rlc.b	&var6
	mov.b	&var1,P1OUT
	mov.b	&var2,P2OUT
	mov.b	&var3,P3OUT
	mov.b	&var4,P4OUT
	mov.b	&var5,P5OUT
	mov.b	&var6,P6OUT
	;bis.b	#BIT0,&P1OUT	;joga 1 em p1.0 (setb = bis.b) = bit set
	;call	#delay
	;bic.b	#BIT0,&P1OUT	;joga 0 em p1.0(bic.b = clr) = bit clear
	call	#delay
	jmp	volta

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
            
