.model small ;sera o mesmo no projeto

.stack 100H

.data
    CR equ 0DH ;Enter -Eh como se fosse um define 
    LF equ 0AH ;Nova linha
    
.code 

ESC_CHAR proc 
    push AX
    mov AH, 2
    int 21h
    pop AX
    ret
endp 

LER_CHAR proc 
    mov AH, 7  ;No caso dessa rotina, nao vamos usar push e pop, pois perderia o valor
    int 21H
    ret
endp 

ESC_UNIT16 proc;escrever o valor em AX na tela
    push AX
    push BX
    push CX
    push DX
    
    xor CX, CX ;registrador contador, iniciando com 0. Mesma coisa que mov CX, 0, mas ocupa apenas 2 bytes, contra 3 bytes, alem de que o valor ja esta dentro do registrador
    mov BX, 10
    
    ;div BL ;AL = AX / BL   nao usaremos
    ;       ;AH = AX % BL

LACO_DIV:            
    xor DX, DX ;antes de usar, zeramos o registrador               
    ;1) Separar a unidade (%)
    div BX ;AX = DXAX / BX
           ;DH = DXAX % BX
    
    ;2) Empilhar o algarismo   
    push DX 
    
    ;3) Incrementa contador
    inc CX  
    
    ;4) Se o quociente for 0
        ;Ir para escrita
        ;Ir para 1)       
    test AX, AX ;eh a mesma coisa que cmp AX, 0, porem mais eficiente. CMP AX, 0 tem 3 bytes e test AX, AX tem 2 bytes    
    jne LACO_DIV;eh a mesma coisa que jz ESCRITA + jmp LACO_DIV

LACO_ESCRITA:        
    ;5) Desempilha algarismo
    pop DX
    
    ;6) Converter para char (+'0') 
    add DX, '0'
    
    ;7) Escrever char na tela
    call ESC_CHAR
    
    ;8) Decrementa o contador
    dec CX
    
    ;9) Testa se eh 0
        ;Ir para o fim
        ;Ir para 5)
    jnz LACO_ESCRITA 
    
    pop DX
    pop CX
    pop BX
    pop AX 
    ret ;usada para sair da rotina, serve de retorno. 
    ;Antes de entrar na rotina, o call grava em IP a proxima instrucao, entao quando o ret eh executado, volta para onde estava
endp;lembrar de sempre que for criar uma rotina, lembrar de colocar ret

LER_UNIT16 proc
    push BX
    push CX
    push DX
    
    xor AX, AX
    xor CX, CX
    mov BX, 10

LACO_LEITURA:              
    push AX
LEITURA:
    ;1) ler o char (sem mostrar)
    call LER_CHAR
    
    ;2) Eh um ENTER?
        ;Ir para o fim 
    cmp AL, CR ;assumira o valor declarado la encima, que sera 0DH
    je FIM_LEITURA
    
    ;3) Se eh um algarismo
        ;Continuar
        ;Ir para 1)
    cmp AL, '0' ;Essas 4 linhas sao como se fossem 0 <= x <= 9
    jb LEITURA
    cmp AL, '9'
    ja LEITURA
        
    ;4) Mostrar o char
    mov DL, AL
    call ESC_CHAR
    
    ;5) Multiplicar o acumulador por 10
    pop AX 
    mov CL, DL
    mul BX ;DXAX = AX * BX -> Causara um efeito de perder o DX
    
    ;6) Converter char para algarismo
    sub CL, '0'
    
    ;7) Soma o algarismo no acumulador
    add AX, CX
    
    ;6) Ir para 1)
    jmp LACO_LEITURA
    
FIM_LEITURA:
    pop AX
    mov DL, CR ;Adiciona um enter apos ler
    call ESC_CHAR 
    mov DL, LF
    call ESC_CHAR   
    
    pop DX
    pop CX
    pop BX
    ret
endp

inicio:
    ;Setar o DS
    mov AX, @DATA
    mov DS, AX
    
                
    ;A rotina deve extrair cada algarismo, transformando cada um em um caracter
    ;int x = 357
    ;x % 10
    
                    
    call LER_UNIT16
    call ESC_UNIT16 ; call (deslocamento)
     
    
    ;https://www.stanislavs.org/helppc/int_21.html
    
    ;Terminar o programa
    mov AH, 4CH
    int 21H ;Interrupcao para terminar o programa          
          
end inicio