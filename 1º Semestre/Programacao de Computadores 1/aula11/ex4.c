// Desenvolva um programa em C que solicite ao usuário informar 10 valores inteiros e armazene estes valores em um vetor. 
// O programa em C deverá mostrar na tela a posição de cada número menor que zero desse vetor.
// Exemplo: se o usuário informar os valores:
// V[0]= 2  V[1]= 5  V[2]= -87  V[3]= 10  V[4]= 43  V[5]= -54  V[6]= 23  V[7]= -88  V[8]= 121  V[9]= 231
// O programa em C deverá mostrar na tela:
// Posições do vetor que possuem números menores que zero:
// 2 5 7

#include <stdio.h>

int main() {
    int x,vet[10];

    for (x=0;x<10;x++) {
        printf("Digite o valor %d: ",x);
        scanf("%d",&vet[x]);
    }

    printf("Posicoes do vetor que possuem numeros menores que zero:\n");
    for (x=0;x<10;x++) {
        if(vet[x]<0) {
            printf("%d ",x);
        }
    }

    return 0;
}