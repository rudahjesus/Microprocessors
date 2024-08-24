;PROGRAM BY TURMINHA DO DIDI XDDDD
;Código de controle de lâmpadas pelo celular

LAMP1     equ       P1.0
LAMP2     equ       P1.1
LAMP3     equ       P1.2
LAMP4     equ       P1.3

         cseg    at 0

inicio:  mov    TMOD,#20h          ; Timer 1 em modo 2 (auto-reload)
         mov    SCON,#52h          ; Configura UART (8 bits, REN habilitado)
         mov    TH1,#(256-13)      ; Configura baud rate para 9600 bps
         orl    PCON,#80h          ; Habilita SMOD = 1 (dobro da taxa de baud)
         setb   TR1                

         mov    dptr,#msgola
         call   print

volta:   jnb    RI,$               
         clr    RI                 
         mov    a,SBUF             

         cjne   a,#'1',verifica_2
         cpl    LAMP1              
         jmp    volta             

verifica_2: cjne   a,#'2',verifica_3
            cpl    LAMP2              
            jmp    volta              
         

verifica_3:  cjne   a,#'3',verifica_4
             cpl    LAMP3              
             jmp    volta              


verifica_4:  cjne   a,#'4',verifica_5
             cpl    LAMP4              
             jmp    volta              
         

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
             call   verificar_lampadas ; Verifica e envia o status das lâmpadas
             jmp    volta              ; Volta para esperar o próximo comando
         

verificar_lampadas:  mov    dptr,#L1a
                     jnb     LAMP1,enviar_L1    ; Se LAMP1 está ligada, envia mensagem
                     jmp    verificar_L2       ; Caso contrário, vai para a próxima lâmpada
                     

enviar_L1:   call   print
             jmp    verificar_L2
             

verificar_L2:  mov    dptr,#L2a
               jnb     LAMP2,enviar_L2    ; Se LAMP2 está ligada, envia mensagem
               jmp    verificar_L3       ; Caso contrário, vai para a próxima lâmpada
               

enviar_L2:  call   print
            jmp    verificar_L3
         

verificar_L3:  mov    dptr,#L3a
               jnb     LAMP3,enviar_L3    ; Se LAMP3 está ligada, envia mensagem
               jmp    verificar_L4       ; Caso contrário, vai para a próxima lâmpada
         

enviar_L3: call   print
           jmp    verificar_L4
         

verificar_L4:  mov    dptr,#L4a
               jnb     LAMP4,enviar_L4    ; Se LAMP4 está ligada, envia mensagem
               ret                       ; Retorna após verificar todas as lâmpadas

         
enviar_L4:  call   print
            ret
         

print:  clr    a
        movc   a,@a+dptr
        jz     acabouastring         
        jnb    TI,$                  
        clr    TI                    
        mov    SBUF,a                
        inc    dptr                  
        jmp    print                 
      

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
         end
