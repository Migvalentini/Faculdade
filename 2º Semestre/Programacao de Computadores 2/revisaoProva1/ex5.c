// Faça uma função em linguagem C que receba uma matriz de inteiro e ordene cada uma de suas linhas em ordem crescente. A quantidade de linhas e colunas da matriz estão definidas através da diretiva #define.
// Protótipo: ordenaLinhas(int mat[N][M])
// Por exemplo, para a matriz:
// 3253
// 1462
// 7821
// A matriz resultante seria:
// 2335
// 1246
// 1278

#include <stdio.h>

#define N 10
#define M 10

void escreveMatriz(int matriz[N][M]) {
    int x,y;

    for(x=0; x<N; x++) {
        for(y=0; y<M; y++) {
            printf("%d ",matriz[x][y]);
        }
        printf("\n");
    }
}

void ordenaMatriz(int matriz[N][M]) {
    int x,y,z,aux;

    for(z=0; z<N; z++) {
        for(x=0; x<N; x++) {
            for(y=0; y<M-x-1; y++) {
                if(matriz[z][y]>matriz[z][y+1]) {
                    aux=matriz[z][y];
                    matriz[z][y]=matriz[z][y+1];
                    matriz[z][y+1]=aux;
                }
            }
        }
    }
}

int main() {
    int matriz[N][M] = {
        {1,2,3,4,5,6,7,8,9,0},
        {1,2,3,4,5,6,7,8,9,0},
        {9,8,7,6,5,4,3,2,1,0},
        {0,1,2,3,4,5,6,7,8,9},
        {1,3,5,7,9,1,3,5,7,9},
        {0,2,4,6,8,0,2,4,6,8},
        {2,4,6,8,0,2,4,6,8,0},
        {9,7,5,3,1,9,7,5,3,1},
        {0,1,2,3,4,5,6,7,8,9},
        {5,5,5,5,5,5,5,5,5,5}
    };

    escreveMatriz(matriz);
    ordenaMatriz(matriz);
    printf("\n");
    escreveMatriz(matriz);
}