// O desenho da fonte de caracteres 8x8 dos valores ASCII pode ser representado por 8 bytes. 
// Cada byte corresponde a uma das linhas do caractere e os bits de cada byte definem se aquela posição está ligada (valor 1) ou desligada (valor 0). 
// Por exemplo, os 8 bytes a seguir definem a representação da letra Y neste formato:
// 0 1 1 1 0 0 1 1 1 
// 1 1 1 1 0 0 1 1 1 
// 2 1 1 1 0 0 1 1 1
// 3 0 1 1 1 1 1 1 0
// 4 0 0 1 1 1 1 0 0
// 5 0 0 1 1 1 1 0 0
// 6 0 1 1 1 1 1 1 0
// 7 1 1 1 1 1 1 1 1 
// Escreva uma função que receba como argumento um vetor de 8 unsigned char e escreva na tela o caractere representado no vetor. 
// Quando o bit estiver ligado, deve-se imprimir o caractere ‘#’ e quando desligado, deve-se imprimir o caractere espaço ‘ ‘. O protótipo da função é: 
// void imprimeASCII(unsigned char caractere[8]);
// Para a representada do caractere Y dado pelo exemplo anterior, a função deverá escrever na tela o seguinte:
// ###  ###
// ###  ###
// ###  ###
//  ######
//   ####
//   ####
//  ######
// Faça também um programa que crie o vetor de char e chame a função implementada.

#include <stdio.h>

void imprimeASCII(unsigned char m[8]) {
    unsigned char aux = m[0];
    int i, j;

    for(j=0; j<7; j++) {
        aux=m[j];
        for(i=7; i>=0; i--) {
            ((aux>>i) & 1) == 1 ? printf("#") : printf(" ");
        }
        printf("\n");
    }
}

int main() {
    unsigned char m[8] = {0xe7, 0xe7, 0xe7, 0x7e, 0x3c, 0x3c, 0x7e, 0xff};

    imprimeASCII(m);
}