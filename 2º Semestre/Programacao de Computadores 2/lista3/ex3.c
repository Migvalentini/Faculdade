// Fazer um programa que leia uma matriz de 5 linhas x 5 colunas e escreva 1 se a mesma é um quadrado mágico ou 0 caso contrário. 
// Uma matriz é um quadrado mágico se a soma dos elementos de cada linha, a soma dos elementos de cada coluna e a soma dos elementos das diagonais principal e secundária são todas iguais.  

#include <stdio.h>

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

int verificaLinhas(int matriz[N][N]) {
    int x,y,linhas[N]={0};

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            linhas[x]+=matriz[x][y];
        }
    }

    for(x=0; x<N-1; x++) {
        if(linhas[x]!=linhas[x+1]) {
            return 0;
        }
    }

    return linhas[0];
}

int verificaColunas(int matriz[N][N]) {
    int x,y,colunas[N]={0};

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            colunas[x]+=matriz[y][x];
        }
    }

    for(x=0; x<N-1; x++) {
        if(colunas[x]!=colunas[x+1]) {
            return 0;
        }
    }

    return colunas[0];
}

int verificaPrincipal(int matriz[N][N]) {
    int x,principal=0;

    for(x=0; x<N; x++) {
        principal+=matriz[x][x];
    }

    return principal;
}

int verificaSecundaria(int matriz[N][N]) {
    int x,secundaria=0;

    for(x=0; x<N; x++) {
        secundaria+=matriz[x][N-x-1];
    }

    return secundaria;
}

int main() {
    int matriz[N][N]={
        {11,24,7,20,3},
        {4,12,25,8,16},
        {17,5,13,21,9},
        {10,18,1,14,22},
        {23,6,19,2,15}
    };

    //leMatriz(matriz);

    if(verificaLinhas(matriz)==verificaColunas(matriz)&&verificaPrincipal(matriz)==verificaSecundaria(matriz)&&verificaLinhas(matriz)==verificaPrincipal(matriz)) {
        printf("Eh um quadrado magico!");
    } else {
        printf("Nao eh um quadrado magico!");
    }

    return 0;
}