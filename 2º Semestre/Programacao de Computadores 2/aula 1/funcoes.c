/*
FUNÇÕES

Exemplos de funções matemáticas:

double srtr(double n) - retorna um valor double - função raiz quadrada
double pow(double x, double y) - retorna um valor double - função exponenciação

void - sem retorno/sem tipo

Toda função tem nome, parametro de entrada e de saída
*/

/*
MATRIZES

arrays multidimensionais
declaração: tipo valor[dimensao1][dimensao2]
*/

#include <stdio.h>

#define N 3

void leMatriz(int matriz[N][N]) {
    int i,j;

    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            scanf("%d",&matriz[i][j]);
        }
    }
}

void escreveMatriz(int matriz[N][N]) {
    int i,j;

    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char **argv) { //A main pode receber parametros
    int m[N][N];

    leMatriz(m);
    escreveMatriz(m);

    return 0;
}