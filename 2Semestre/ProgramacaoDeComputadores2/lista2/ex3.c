//Faça um programa que leia uma matriz M[5][5], onde cada posição contem um número entre 0 e 9 e cada linha da matriz representa um número de 5 dígitos. 
//O algoritmo deve calcular a soma dos 5 números contidos na matriz colocando o resultado em um vetor Soma[6]. 
//Escreva ao final o vetor Soma.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 4

void leMatriz(int matriz[N][N]) {
    int x,y,aux=1;

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            //printf("Escreva o elemento da posicao %d%d: ",x,y);
            //scanf("%d",&matriz[x][y]);
            matriz[x][y]=rand() % 10;
            //matriz[x][y]=aux;
            aux++;
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

void calculaResultado(int matriz[N][N]) {
    int x,y,s,vai=0,soma[N+1];

    for(y=N-1; y>=0; y--) {
        s=vai;
        for(x=N-1; x>=0; x--) {
            s+=matriz[x][y];
        }
        soma[y+1] = s % 10;
        vai = s / 10;
    }

    soma[0]=vai;

    for(x=0; x<N; x++) {
        printf("Soma[%d] = %d\n",x,soma[x]);
    }
}

int main() {
    int m[N][N+1];

    leMatriz(m);
    escreveMatriz(m);
    calculaResultado(m);

    return 0;
}
