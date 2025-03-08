//Fazer um programa que leia uma matriz de 5 linhas x 5 colunas e escreva 1 se a mesma é um quadrado mágico ou 0 caso contrário. 
//Uma matriz é um quadrado mágico se a soma dos elementos de cada linha, a soma dos elementos de cada coluna e a soma dos elementos das diagonais principal e secundária são todas iguais.  
//No exemplo da matriz de 5 linhas por 5 colunas a seguir, todas as somas totalizam 65. Por isso, ela pode ser definida como um quadrado mágico. 

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

int somaLinhas(int matriz[N][N]) {
    int x,y,linhas[N]={0};

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            linhas[x]+=matriz[x][y];
        }
    }

    if(linhas[0]==linhas[1]&&linhas[1]==linhas[2]&&linhas[2]==linhas[3]&&linhas[3]==linhas[4]) {
        return 1;
    }
    return 0;
}

int somaColunas(int matriz[N][N]) {
    int x,y,colunas[N]={0};

    for(y=0; y<N; y++) {
        for(x=0; x<N; x++) {
            colunas[x]+=matriz[x][y];
        }
    }
    
    if(colunas[0]==colunas[1]&&colunas[1]==colunas[2]&&colunas[2]==colunas[3]&&colunas[3]==colunas[4]) {
        return 1;
    }
    return 0;
}

int somaDiagonalPrincipal(int matriz[N][N]) {
    int x,diagonal=0;

    for(x=0; x<N; x++) {
        diagonal+=matriz[x][x];
    }

    return diagonal;
}

int somaDiagonalSecundaria(int matriz[N][N]) {
    int x,diagonal=0;

    for(x=0; x<N; x++) {
        diagonal+=matriz[N-1-x][x];
    }

    return diagonal;
}

int main() {
    int matriz[N][N]={
        {11,24,7,20,3},
        {4,12,25,8,16},
        {17,5,13,21,9},
        {10,18,1,14,22},
        {23,6,19,2,15}
    };

    //int matriz[N][N];

    //leMatriz(matriz);

    if(somaLinhas(matriz) && somaColunas(matriz) && somaDiagonalPrincipal(matriz)==somaDiagonalSecundaria(matriz)) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}