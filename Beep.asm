;made by turminha d0 didi
; Este código foi criado pelo grupo "turminha d0 didi".

SOM      equ     P1.2         ; Define a constante SOM como o pino P1.2.

inicio:  mov     TMOD,#20h    ; Configura o Timer 1 no modo 2 (auto-reload de 8 bits)
                              ; e o Timer 0 no modo 0 (modo de 13 bits).
        mov     TH1,#(256-141) ; Carrega o valor de recarga para TH1 (Timer 1) 
                               ; para gerar uma frequência de som específica.
        mov     TH0,#(256-59)  ; Carrega o valor de recarga para TH0 (Timer 0)
                               ; para definir o intervalo de tempo.
        mov     r0, #0         ; Inicializa o registrador r0 com 0, usado como contador.
        setb    TR0            ; Inicia o Timer 0.
        setb    TR1            ; Inicia o Timer 1.

volta:  jb      TF1, ligasom  ; Se o Timer 1 transbordou, vá para a rotina ligasom.
        jb      TF0, procintv ; Se o Timer 0 transbordou, vá para a rotina procintv.
        jmp     volta         ; Continue verificando o transbordo dos timers.

procintv: clr    TF0           ; Limpa a flag de transbordo do Timer 0.
        mov     TH0,#(256-59) ; Recarrega o valor do Timer 0 para o próximo intervalo.
        inc     r0            ; Incrementa o contador r0.
        cjne    r0, #56,volta ; Compara r0 com 56 (M). Se diferente, vá para volta.
        mov     r0, #0        ; Se r0 atingir 56, reinicia o contador r0.
        jb      F0, #(256-176); Se o bit de flag F0 estiver setado, ajusta o Timer 1.
        cpl     F0            ; Complementa o estado do bit de flag F0.
        jmp     volta         ; Volta para o início do loop.

ligasom: clr    TF1           ; Limpa a flag de transbordo do Timer 1.
        cpl    SOM           ; Inverte o estado do pino SOM (P1.2), ligando ou desligando o som.
        jmp    volta         ; Retorna para o início do loop.

end:    ; Final do código, nada mais é executado após essa linha.
