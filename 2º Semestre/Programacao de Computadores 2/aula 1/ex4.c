//Faça um programa que leia uma matriz M[5][5] e troque cada elemento da linha 3 com elemento correspondente da linha 1. Escreva a matriz resultante

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

void leMatriz(int matriz[N][N]) {
    int x,y;

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            printf("Escreva o elemento da posicao %d%d: ",x,y);
            scanf("%d",&matriz[x][y]);
        }
    }
}

void preencheMatriz(int matriz[N][N]) {
    int x,y,z=1;

    //srand(time(NULL));

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            //matriz[x][y] = rand() % 100;
            matriz[x][y] = z;
            z++;
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

void trocaElementos(int matriz[N][N]) {
    int x,aux;

    for(x=0; x<N; x++) { 
        aux=matriz[0][x];
        matriz[0][x]=matriz[2][x];
        matriz[2][x]=aux;
    }
}

int main() {
    int m[N][N];

    leMatriz(m);
    //preencheMatriz(m);
    escreveMatriz(m);
    trocaElementos(m);
    escreveMatriz(m);

    return 0;
}