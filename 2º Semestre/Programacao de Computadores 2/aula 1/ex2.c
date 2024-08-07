//Faça um programa que leia uma matriz M[5][5] e calcule e escreva a soma dos elementos da diagonal secundária

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
        printf("\n");
    }

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            if(x+y==4) {
                printf("%d ",M[x][y]);
                soma+=M[x][y];
            }
        }
        printf("%\n");
    }

    printf("\n");

    for(x=0; x<N; x++) {
        printf("%d ",M[N-1-x][x]);
    }
    
    printf("\n");
    
    for(x=0, y=N-1; x<N ; x++, y--) {
        printf("%d ",M[x][y]);
    }

    printf("A soma dos elementos da diagonal secundaria da matriz eh %d",soma);
}