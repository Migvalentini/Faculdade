//Uma matriz identidade é uma matriz que possui 1 em todos os elementos da diagonal principal, e 0 em todas as outras posições. 
//Faça um programa que leia uma matriz M[5][5] e verifique se é uma matriz identidade escrevendo: 
//1 - Se é uma matriz identidade; 
//0 - Se não é uma matriz identidade.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4

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

int verificaIdentidade(int matriz[N][N]) {
    int x,y;

    for(x=0; x<N; x++) { 
        for(y=0; y<N; y++) {
            if(x==y&&matriz[x][y]!=1) {
                return 0;
            }
            else if(x!=y&&matriz[x][y]!=0){
                return 0;
            }
        }
    }

    return 1;
}

int main() {
    int m[N][N] = {
        {1,0,0,0},
        {0,1,0,0},
        {0,0,1,0},
        {0,0,0,1},
    };

    //leMatriz(m);
    escreveMatriz(m);

    printf("Identidade: %d",verificaIdentidade(m));

    return 0;
}
