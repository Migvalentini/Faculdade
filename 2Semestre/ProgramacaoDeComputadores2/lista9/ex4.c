// Faça uma função que receba como parâmetro uma matriz M[5][5] e retorne o maior valor existente na matriz, bem como a linha e coluna onde o valor ocorre.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

void preencheMatriz(int matriz[N][N]) {
    int x,y;

    srand(time(NULL));

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            matriz[x][y] = rand() % 100;
        }
    }
}

void escreveMatriz(int matriz[N][N]) {
    int x,y;

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            printf("%d ",matriz[x][y]);
        }
        printf("\n");
    }
}

void retornaMaior(int matriz[N][N],int *maior,int *lin,int *col) {
    int x,y;
    *maior=matriz[0][0];
    *lin=0;
    *col=0;

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            if(matriz[x][y] > *maior) {
                *maior=matriz[x][y];
                *lin=x;
                *col=y;
            }
        }
    }
}

int main() {
    int matriz[N][N],maior,lin,col;

    preencheMatriz(matriz);
    escreveMatriz(matriz);
    retornaMaior(matriz,&maior,&lin,&col);
    printf("Maior: %d\nLin: %d\nCol: %d",maior,lin,col);
}