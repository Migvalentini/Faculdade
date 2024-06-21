// Desenvolva um programa em C solicite ao usuário informar dez números inteiros e armazene estes valores em um vetor. 
// Após, o programa em C deverá mostrar na tela cada elemento do vetor acompanhado do seu elemento simétrico em relação a sua posição no conjunto: 
// o elemento simétrico do valor que está na posição 1 é o valor que está na posição 10, o elemento simétrico do valor que está na posição 2 é o valor que está na posição 9
// Exemplo: supondo que o usuário informou os seguintes valores: 
// 7   40   3   9   21   0   63   31   7   22
// O programa em C deverá mostrar na tela:
// 7 - 22
// 40 - 7
// 3  - 31
// 9 - 63
// 21 - 0
// 0 - 21
// 63 - 9
// 31 - 3
// 7 - 40
// 22 - 7

#include <stdio.h>

int main() {
    int x,y,vet[10];

    for(x=0; x<10; x++) {
        printf("Digite vet[%d]: ",x); scanf("%d",&vet[x]);
    }

    for(y=0; y<5; y++) {
        printf("%d - %d\n",vet[y],vet[9-y]);
    }

    return 0; 
}