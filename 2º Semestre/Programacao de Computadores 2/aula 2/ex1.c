//Faça um programa que leia uma matriz M[5][5] e gere dois vetores SomaLin[5] e SomaCol[5], com a soma dos elementos de cada linha e a soma dos elementos de cada coluna da matriz M. 
//Escreva ao final os vetores Somalin e Somacol.

#include <stdio.h>

#define N 5

void leMatriz(int matriz[N][N]) {
    int x,y,aux=1;

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            printf("Escreva o elemento da posicao %d%d: ",x,y);
            scanf("%d",&matriz[x][y]);
            //matriz[x][y]=aux;
            //aux++;
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

void somaLin(int matriz[N][N]) {
    int x,y,somaLin[N]={0,0,0,0,0};

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            somaLin[x]+=matriz[x][y];
        }
    }

    for(x=0; x<N; x++) {
        printf("Soma Linha[%d] = %d\n",x,somaLin[x]);
    }
}

void somaCol(int matriz[N][N]) {
    int x,y,somaCol[N];

    for(x=0; x<N; x++) {
        somaCol[x]=0;
    }

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            somaCol[x]+=matriz[y][x];
        }
    }

    for(x=0; x<N; x++) {
        printf("Soma Coluna[%d] = %d\n",x,somaCol[x]);
    }
}

int main() {
    int m[N][N];

    leMatriz(m);
    escreveMatriz(m);
    somaLin(m);
    somaCol(m);

    return 0;
}