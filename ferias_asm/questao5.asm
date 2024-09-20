; code by M0RC3G0P0C1LG4

LED1      equ       p1.0
LED2      equ       p1.1
LED3      equ       p1.2
entrada   equ       p1.3

cseg

inicio:       setb     LED1
              setb     LED2
              setb     LED3

verificasubtensão: cjne entrada,#90h, subtensão
									 jnc entrada, #0h, subtensão

									 jmp verificanormal

verificanormal: jnc entrada, #90h, normal
								jc entrada, #127, normal

							  jmp verificasobretensão

verificasobretensão: jnc entrada,#127, sobretensão

subtensão: clr LED1

normal: clr LED2

sobretensão: clr LED3