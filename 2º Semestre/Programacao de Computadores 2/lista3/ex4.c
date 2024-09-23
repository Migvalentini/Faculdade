// Fazer um programa que leia uma matriz de 5 linhas por 5 colunas e a seguir 
// troque todas as linhas da mesma até que os elementos da primeira coluna em módulo fiquem em ordem decrescente, escrevendo a matriz obtida.

#include <stdio.h>
#include <stdlib.h>

#define N 5

void leMatriz(int matriz[N][N]) {
    int x,y;

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            printf("Digite a posicao %d%d: ",x,y);
            scanf("%d",&matriz[x][y]);
        }
    }
}

void escreveMatriz(int matriz[N][N]) {
    int x,y;

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            printf("%2d ",matriz[x][y]);
        }
        printf("\n");
    }
}

void trocaMatriz(int matriz[N][N]) {
    int x,y,z,aux[N];

    for(x=0; x<N-1; x++) {
        for(y=0; y<N-x-1; y++) {
            if(abs(matriz[y][0])<abs(matriz[y+1][0])) {
                for(z=0; z<N; z++) {
                    aux[z]=matriz[y][z];
                    matriz[y][z]=matriz[y+1][z];
                    matriz[y+1][z]=aux[z];
                }
            }
        }
    }
}

int main() {
    int matriz[N][N]={
        {1,2,3,4,5},
        {-3,-4,10,11,5},
        {4,5,6,5,6},
        {-5,6,7,8,9},
        {2,6,8,9,9}
    };

    //leMatriz(matriz);
    printf("Escreve matriz original:\n");
    escreveMatriz(matriz);
    trocaMatriz(matriz);
    printf("\nEscreve nova matriz:\n");
    escreveMatriz(matriz);

    return 0;
}