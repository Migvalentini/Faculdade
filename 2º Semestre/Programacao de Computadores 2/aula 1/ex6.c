//Faça um programa que leia uma matriz M[5][5] e escreva o número da linha que contenha a maior soma de seus elementos. Considere que a matriz só contem valores positivos.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3

void leMatriz(int matriz[N][N]) {
    int x,y;

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            printf("Escreva o elemento da posicao %d%d: ",x,y);
            scanf("%d",&matriz[x][y]);
        }
    }
}

void escreveMatriz(int matriz[N][N]) {
    int x,y;

    printf("Todos os elementos da matriz sao:\n");

    for(x=0; x<N; x++) { 
        for(y=0; y<N; y++) {
            printf("%02d ",matriz[x][y]);
        }
        printf("\n");
    }

    printf("\n");
} 

int calculaMaiorLinha(int matriz[N][N]) {
    int x,y,soma[N],maiorLinha;

    for(x=0; x<N; x++) {
        soma[x]=0;
    }

    for(x=0; x<N; x++) { 
        for(y=0; y<N; y++) {
            soma[x]+=matriz[x][y];
        }
    }

    maiorLinha=0;

    for(x=0; x<N; x++) {
        printf("Soma da linha %d = %d\n",x,soma[x]);
        if(soma[x]>soma[x-1]) {
            maiorLinha=x;
        }
    }

    printf("O numero da linha que contem a maior soma de seus elementos eh: %d",maiorLinha);
}

int main() {
    int m[N][N];

    leMatriz(m);
    escreveMatriz(m);
    calculaMaiorLinha(m);

    return 0;
}