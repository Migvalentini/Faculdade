// Desenvolva um programa em C que solicite ao usuário informar 15 valores inteiros. 
// O programa em C deverá calcular e mostrar na tela a soma dos números digitados.

#include <stdio.h>

int main () {
    int x,n,soma=0;

    for (x=1;x<=15;x++) {
        printf("Digite o numero %d: ",x);
        scanf("%d",&n);

        soma+=n;
    }

    printf("Soma: %d",soma);

    return 0;
}