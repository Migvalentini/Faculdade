// Uma matriz é dita triangular superior se todos os elementos abaixo da diagonal principal são iguais a zero, e há pelo menos um elemento não nulo acima da diagonal principal. 
// Da mesma forma, uma matriz é dita triangular inferior se todos os elementos acima da diagonal principal são iguais a zero, 
// e há pelo menos um elemento não nulo abaixo da diagonal principal. 
// E uma matriz é dita diagonal se os elementos não nulos ocorrem somente na diagonal principal. 
// Faça um programa que leia uma matriz M[5][5] e escreva: 
// 0 - Se a matriz é uma matriz diagonal; 
// 1 - Se é triangular superior; 
// 2 - Se é triangular inferior; 
// 3 - Se não é nenhuma das anteriores.

#include <stdio.h>

#define N 5

void leMatriz(int matriz[N][N]) {
    int x,y;

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            printf("Digite o elemento da posicao %d%d: ",x,y);
            scanf("%d",&matriz[x][y]);
        }
    }
}

int matrizDiagonal(int matriz[N][N]) {
    int x,y;

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            if(x==y && ) {

            }
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

int main() {
    int matriz[N][N]={
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0}
    };

    //leMatriz(matriz);
    escreveMatriz(matriz);
}