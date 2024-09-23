// Escreva uma função em linguagem C que receba uma string representando um CPF no formato "XXX.XXX.XXX-YY", onde X e Y são dígitos verificadores.
// A função deve retornar 1 se os dígitos verificadores estiverem corretos e 0 se não estiverem.
// Um CPF é composto por 11 dígitos, sendo que os dois últimos são os dígitos verificadores.
// O cálculo do dígito verificador do CPF segue um algoritmo específico, baseado na fórmula conhecida como "Módulo 11".
// Começando da esquerda para a direita, multiplique cada dígito do CPF pela sequência de números 10, 9, 8, ..., 3, 2, nessa ordem.
// Por exemplo, utilizando o número 123.456.789, é calculada a soma dos produtos dos nove dígitos utilizando:
// (1x10) + (2x9) + (3x8) + (4x7) + (5x6) + (6x5) + (7x4) + (8x3) + (9x2) = 210.
// O primeiro dígito verificador é 0 caso o resto da divisão por 11 da soma dos produtos seja 0 ou 1; 
// caso contrário, o dígito verificador corresponde a subtrair de 11 o resto da divisão por 11 da soma dos produtos.
// Por exemplo, o resto da divisão de 210 por 11 é 1, então o primeiro dígito verificador é 0.
// Após isso, o processo é repetido, incluindo o primeiro dígito verificador, obtendo o valor 123.456.789-0, e utilizando os pesos 11, 10, 9, 8, ..., 3, 2.
// Ou seja, a soma dos produtos é obtida utilizando: (1x11) + (2x10) + (3x9) + (4x8) + (5x7) + (6x6) + (7x5) + (8x4) + (9x3) + (0x2) = 255.
// O segundo dígito verificador é 0 caso o resto da divisão da soma dos produtos seja 0 ou 1; caso contrário, o dígito corresponde a 11 menos o resto da divisão por 11 da soma dos produtos.
// Exemplo: o resto da divisão de 255 por 11 é 2, então o segundo dígito verificador é 11 - 2 = 9.

#include <stdio.h>

#define N 14

int verificaCPF(char cpf[N]) {
    int x,y=10,soma=0;

    for(x=0; x<11; x++) {
        if(cpf[x]>='0'&&cpf[x]<='9') {
            printf("%d %d\n",(cpf[x]-48),(y));
            soma+=(cpf[x]-48)*(y--);
        }
    }

    if(soma%11==0||soma%11==1) {
        if(cpf[12]-48==0) {
            
        }
    }

    printf("Soma=%d\n",soma);


    return 1;
    return 0;
}

int main() {
    printf("%d\n",verificaCPF("123.456.789-09"));
    printf("%d\n",verificaCPF("040.615.340-09"));
    printf("%d\n",verificaCPF("123.456.789-09"));
    printf("%d\n",verificaCPF("987.654.321-00"));
    printf("%d\n",verificaCPF("111.444.777-35"));
    printf("%d\n",verificaCPF("012.345.678-90"));
    printf("%d\n",verificaCPF("852.741.963-10"));
    printf("%d\n",verificaCPF("123.456.789-10"));
    printf("%d\n",verificaCPF("987.654.321-99"));
    printf("%d\n",verificaCPF("111.444.777-00"));
    printf("%d\n",verificaCPF("012.345.678-12"));
    printf("%d\n",verificaCPF("852.741.963-99"));
}