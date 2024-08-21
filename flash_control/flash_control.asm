; controle de lampadas pelo celular
;PROGRAM BY TURMINHA DO DIDI XD
LAMP1     equ       P1.0
LAMP2     equ       P1.1
LAMP3     equ       P1.2
LAMP4     equ       P1.3
; até a lâmpada 4

         cseg    at 0

inicio:  mov    TMOD,#20h
         mov    SCON,#52h
         mov    TH1,#(256-13) ; N para 9600
         orl    PCON,#80h    ;SMOD = 1
         setb   TR1



volta:   mov    dptr,#msgola
         call   print 

voltal1: mov    dptr,#L1a
         call   print    

voltal2: mov    dptr,#L2a
         call   print 

voltal3: mov    dptr,#L3a
         call   print 

voltal4: mov    dptr,#L4a
         call   print 

acabouastring: 

volta3:  jnb    RI,$
         clr    RI
         mov    a,SBUF

         cjne   a,#'1',diferentede1
         cpl    LAMP1
         jmp    volta3

print:  clr    a
         movc   a,@a+dptr
         jz     acabouastring
         jnb    TI,$
         clr    TI
         mov    SBUF,a
         inc    dptr
         jmp    print
         reti

diferentede1: cjne   a,#'2',diferentede2
              cpl    LAMP2
              jmp    volta3

diferentede2: cjne   a,#'3',diferentede3
              cpl    LAMP3
              jmp    volta3

diferentede3: cjne   a,#'4',diferentede4
              cpl    LAMP4
              jmp    volta3
              
diferentede4: cjne   a,#'5',diferentede5
              clr    LAMP1
              clr    LAMP2
              clr    LAMP3
              clr    LAMP4
              jmp    volta3
              
diferentede5: cjne   a,#'6',diferentede6
              setb    LAMP1
              setb    LAMP2
              setb    LAMP3
              setb    LAMP4
              jmp    volta3
              
diferentede6: cjne   a,#'7',diferentede7
              jb     LAMP1,voltal1
              jb     LAMP2,voltal2
              jb     LAMP3,voltal3
              jb     LAMP4,voltal4
              jmp    volta3 


diferentede7: cjne  a,#0dh,volta3
              jmp   volta 

          

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
