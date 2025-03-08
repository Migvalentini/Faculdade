// Na Teoria de Sistemas, define-se como elemento minimax de uma matriz o menor elemento da linha em que se encontra o maior elemento da matriz. 
// Faça uma função que receba como parâmetro uma matriz A[5][5] e retorne o valor do elemento minimax, bem como a linha e coluna onde ocorreu.

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

void retornaMinimax(int matriz[N][N],int *minimax,int *lin,int *col) {
    int x,y,linMaior=0;
    *minimax=matriz[0][0];

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            if(matriz[x][y] > *minimax) {
                *minimax=matriz[x][y];
                linMaior=x;
            }
        }
    }

    for(x=0; x<N; x++) {
        if(matriz[linMaior][x]<*minimax) {
            *minimax=matriz[linMaior][x];
            *col=x;
        }
    }
    *lin=linMaior;
}

int main() {
    int matriz[N][N],minimax,lin,col;

    preencheMatriz(matriz);
    escreveMatriz(matriz);
    retornaMinimax(matriz,&minimax,&lin,&col);
    printf("Minimax: %d\nLin: %d\nCol: %d",minimax,lin,col);
}