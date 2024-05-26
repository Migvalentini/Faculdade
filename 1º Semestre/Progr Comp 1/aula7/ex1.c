// Desenvolva um programa em C que solicite ao usuário informar valores inteiros até que o usuário digite o valor 0 (zero). 
// Quando o valor 0 for digitado, o programa em C deverá parar de solicitar novos valores e deverá mostrar na tela o menor número informado. 
// Este programa em C deverá desprezar os números negativos, ou seja, deverá encontrar o menor entre os valores positivos informados.

#include <stdio.h>

int main() {
    int menorNumero, x;
    
    printf("Digite um numero: ");
    scanf("%d",&x);
    menorNumero=x;

    while (x != 0) {
        if (x>0 && x<menorNumero) {
            menorNumero=x;
        }

        printf("Digite um numero: ");
        scanf("%d",&x);
    }

    printf("Menor numero: %d",menorNumero);

    return 0;
}
