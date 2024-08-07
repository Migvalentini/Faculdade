//Faça um programa que leia uma matriz M[5][5] e troque cada elemento da linha 3 com elemento correspondente da linha 1. Escreva a matriz resultante

#include <stdio.h>

#define N 5

main() {
    int M[N][N],x,y,aux=1,soma=0;

    // Lê os valores da matizes
    // for(x=0; x<N; x++) {
    //     for(y=0; y<N; y++) {
    //         scanf("%d",&M[x][y]);
    //     }
    // }

    // Preenche a matriz com valores
    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            M[x][y]=aux;
            aux++;
        }
    }
    
    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            printf("%d ",M[x][y]);            
        }
        printf("%\n");
    }

    printf("%\n");

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            if(x<y) {
                printf("%d ",M[x][y]);
                soma+=M[x][y];
            }
        }
        printf("%\n");
    }

    printf("A soma dos elementos em toda a regiao acima da diagonal principal eh %d",soma);
}