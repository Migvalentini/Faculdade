//Faça um programa que leia uma matriz M[5][5] e calcule e escreva a soma dos elementos em toda a região acima da diagonal principal.

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

void escreveAcimaDiagonal(int matriz[N][N]) {
    int x,y;

    printf("Os elementos acima da diagonal principal da matriz sao:\n");

    for(x=0; x<N-1; x++) { 
        for(y=x+1; y<N; y++) {
            printf("%d ",matriz[x][y]);
        }
        printf("\n");
    }
}

int somaAcimaDiagonal(int matriz[N][N]) {
    int x,y,soma=0;

    for(x=0; x<N-1; x++) { 
        for(y=x+1; y<N; y++) {
            soma+=matriz[x][y];
        }
    }

    return soma;
}

int main() {
    int m[N][N];

    leMatriz(m);
    //preencheMatriz(m);
    escreveMatriz(m);
    escreveAcimaDiagonal(m);

    printf("\nA soma dos elementos acima da diagonal principal da matriz eh %d",somaAcimaDiagonal(m));

    return 0;
}