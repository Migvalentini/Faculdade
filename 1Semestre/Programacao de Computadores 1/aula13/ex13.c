// Desenvolva um programa em C que solicite ao usuário informar 10 números inteiros e armazene estes números em um vetor de 10 posições. 
// Após leia mais 5 números inteiros e armazene em um segundo vetor de 5 posições. Calcule e mostre na tela dois vetores resultantes. 
// O primeiro vetor resultante será formado pelos números pares digitados no primeiro vetor. Cada um dos valores pares deve ser somado a todos os elementos do segundo vetor.  
// O segundo vetor resultante será composto pelos números ímpares digitados no primeiro vetor somado a todos os elementos do segundo vetor. 
// Exemplo:
// Primeiro vetor
// 4  7  5  8  2  15  9  6  10  11
// Segundo vetor
// 3  4  5  8  2
// Primeiro vetor resultante:    
// 26  30 ...
// 26 = 4+ 3+4+5+8+2
// 30 = 8+3+4+5+8+2
// Segundo vetor resultante:
// 29  27 ...
// 29 = 5+ 3+4+5+8+2
// 27 = 4+ 3+4+5+8+2

#include <stdio.h>

int main() {
    int x, vet[10], vet2[5], res1[10], res2[10];
    int soma=0;
    for(x=0; x<10; x++) {
        printf("Digite vet[%d]: ",x); 
        scanf("%d",&vet[x]);
    }
    for(x=0; x<5; x++) {
        printf("Digite vet2[%d]: ",x); 
        scanf("%d",&vet2[x]);
        soma += vet2[x];
    }
    for(x=0; x<10; x++) {
        if(vet[x%2==0]) {
            res1[x] = vet[x] + soma;
        } else {
            res2[x] = vet[x] + soma;
        }
    }
    printf("Vetor resultante 1: ");
    for(x=0; x<10; x++) {
        printf("%d ",res1[x]); 
    }
    printf("\nVetor resultante 2: ");
    for(x=0; x<10; x++) {
        printf("%d ",res2[x]); 
    }
    return 0;
}