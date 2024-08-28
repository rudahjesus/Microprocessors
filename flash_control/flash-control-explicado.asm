;PROGRAM BY TURMINHA DO DIDI XDDDD
;Código de controle de lâmpadas através da serial

LAMP1     equ       P1.0
LAMP2     equ       P1.1
LAMP3     equ       P1.2
LAMP4     equ       P1.3
;************************************************************************************************
         cseg    at 0

inicio:  mov    TMOD,#20h          ; Timer 1 em modo 2 (auto-reload)
         mov    SCON,#52h          ; Configura UART (8 bits, REN habilitado)
         mov    TH1,#(256-13)      ; Configura baud rate para 9600 bps
         orl    PCON,#80h          ; Habilita SMOD = 1 (dobro da taxa de baud)
         setb   TR1                

         mov    dptr,#msgola
         call   print

volta:   jnb    RI,$               ; Espera receber um caractere
         clr    RI                 ; Limpa flag de recepção
         mov    a,SBUF             ; Move o caractere recebido para A

;************************************************************************************************
;VERIFICA

         cjne   a,#'1',verifica_2
         cpl    LAMP1              ; Inverte o estado da lâmpada 1
         jmp    volta              ; Volta para esperar o próximo comando

verifica_2: cjne   a,#'2',verifica_3
            cpl    LAMP2              ; Inverte o estado da lâmpada 2
            jmp    volta              ; Volta para esperar o próximo comando
         

verifica_3:  cjne   a,#'3',verifica_4
             cpl    LAMP3              ; Inverte o estado da lâmpada 3
             jmp    volta              ; Volta para esperar o próximo comando


verifica_4:  cjne   a,#'4',verifica_5
             cpl    LAMP4              ; Inverte o estado da lâmpada 4
             jmp    volta              ; Volta para esperar o próximo comando  
         

verifica_5:  cjne   a,#'5',verifica_6
             clr   LAMP1              ; Liga todas as lâmpadas
             clr   LAMP2
             clr   LAMP3
             clr   LAMP4
             jmp    volta              ; Volta para esperar o próximo comando
         

verifica_6:  cjne   a,#'6',verifica_7
             setb    LAMP1              ; Desliga todas as lâmpadas
             setb    LAMP2
             setb    LAMP3
             setb    LAMP4
             jmp    volta              ; Volta para esperar o próximo comando
         

verifica_7:  cjne   a,#'7',volta
             call   verificar_L1 ; Verifica e envia o status das lâmpadas
             jmp    volta              ; Volta para esperar o próximo comando

;*********************************************************************************************************************************************************         
;O CÓDIGO ESTÁ DIVIDIDO ENTRE LNX, LX E LTX. LX É UMA OCASIÃO EM QUE A LAMPADA 1 NÃO ESTÁ LIGADA, LOGO, A SITUAÇÃO DE TODAS LIGADAS NÃO PODE OCORRER
;LTX É UMA OCASIÃO EM QUE A LÂMPADA 1 ESTÁ LIGADA, PULA PARA VERIFICAR A PRÓXIMA EM UMA SEQUÊNCIA EM CADEIA, E NO FINAL, PRINTA QUE TODAS ESTÃO ACESAS
;LNX É TODAS DESLIGADAS

;************************************************************************************************
;LN1 / LT1

verificar_L1:  mov    dptr,#L1a
               jnb    LAMP1,enviar_LT1    ; Se LAMP1 está ligada, pula para ENVIAR LT1 e envia mensagem
               jmp    verificar_LN2       ; Caso contrário, pula para VERIFICAR L2 vai para a próxima lâmpada
                     

enviar_LT1:   call   print               ; PRINTA MENSAGEM
              jmp    verificar_LT2       ; PULA PARA VERIFICAR LT2
			 
;************************************************************************************************
;LN2 / L2 / LT2
verificar_LN2:  mov    dptr,#L2a
               jnb    LAMP2,enviar_L2    ; Se LAMP2 está ligada, envia mensagem
               jmp    verificar_LN3       ; Caso contrário, vai para a próxima lâmpada
			   
verificar_LT2: mov    dptr,#L2a
			   jnb    LAMP2,enviar_LT2    ; Se LAMP2 está ligada, envia mensagem
               jmp    verificar_L3       ; Caso contrário, vai para a próxima lâmpada
               
enviar_L2:  call   print
            jmp    verificar_L3          
			
enviar_LT2: call   print
            jmp    verificar_LT3
			
;************************************************************************************************
;LN3 / L3 / LT3

verificar_L3:  mov    dptr,#L3a
               jnb    LAMP3,enviar_L3    ; Se LAMP3 está ligada, envia mensagem
               jmp    verificar_L4       ; Caso contrário, vai para a próxima lâmpada

verificar_LT3: mov    dptr,#L3a
               jnb    LAMP3,enviar_LT3    ; Se LAMP2 está ligada, envia mensagem
               jmp    verificar_L4       ; Caso contrário, vai para a próxima lâmpada
			   
verificar_LN3: mov    dptr,#L3a
               jnb    LAMP3,enviar_L3    ; Se LAMP2 está ligada, envia mensagem
               jmp    verificar_LN4       ; Caso contrário, vai para a próxima lâmpada

enviar_L3: call   print
           jmp    verificar_L4
		   
enviar_LT3: call   print
            jmp    verificar_LT4

;************************************************************************************************		   
;LN4 / L4 / LT4        

verificar_L4:  mov    dptr,#L4a
               jnb    LAMP4,enviar_L4    ; Se LAMP4 está ligada, envia mensagem
			   ret
			   
verificar_LT4:  mov    dptr,#L4a
                jnb    LAMP4, enviar_LT4
                ret
				
verificar_LN4: mov    dptr,#L4a
               jnb    LAMP4,enviar_L4    ; Se LAMP2 está ligada, envia mensagem
               jmp    verificar_Ln       ; Caso contrário, vai para a próxima lâmpad
				
enviar_L4:  call   print
            ret
			
enviar_LT4: call   print
            jmp verificar_LTT

;************************************************************************************************			
;TODOS / NENHUM
				
verificar_LTT:  mov    dptr,#Ltt
                call   print
                ret
				
verificar_Ln:  mov   dptr,#Ln
               call  print
	      ret

;************************************************************************************************
;PRINTA 

print:  clr    a
        movc   a,@a+dptr
        jz     acabouastring         ; Se encontrou o final da string, sai
        jnb    TI,$                  ; Espera até que TI seja 1 (transmissão anterior completa)
        clr    TI                    ; Limpa TI para próxima transmissão
        mov    SBUF,a                ; Envia o caractere atual
        inc    dptr                  ; Incrementa o ponteiro da string
        jmp    print                 ; Repete até o final da string
      

acabouastring:
                ret

msgola:  db     "BEM VINDO A SMP",0dh, 0ah
         db     "DIGITE 1 PARA LAMPADA 1", 0dh, 0ah
         db     "DIGITE 2 PARA LAMPADA 2", 0dh, 0ah
         db     "DIGITE 3 PARA LAMPADA 3", 0dh, 0ah
         db     "DIGITE 4 PARA LAMPADA 4", 0dh, 0ah
         db     "DIGITE 5 PARA LIGAR TODAS AS LAMPADAS", 0dh, 0ah
         db     "DIGITE 6 PARA DESLIGAR TODAS AS LAMPADAS", 0dh, 0ah
         db     "DIGITE 7 PARA EXIBIR AS LAMPADAS ACESAS", 0dh, 0ah, 0

L1a:     db     "Lampada 1 acesa",0dh,0ah,0
L2a:     db     "Lampada 2 acesa",0dh,0ah,0
L3a:     db     "Lampada 3 acesa",0dh,0ah,0
L4a:     db     "Lampada 4 acesa",0dh,0ah,0
	
Ltt:     db     "Todas acesas",0dh,0ah,0
Ln:      db     "Todas apagados",0dh,0ah,0

         end
