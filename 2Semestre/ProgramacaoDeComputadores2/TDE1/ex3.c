// O Jogo Campo Minado é um jogo de computador muito popular.  
// Esse foi inventado por Robert Donner em 1989 e tem como objetivo revelar um campo de minas sem que nenhuma delas seja detonada. 
// Este jogo tem sido reescrito para as mais diversas plataformas, sendo a sua versão mais popular a que vem nativamente com o Windows.  
// Faça um programa em linguagem C que leia uma matriz Campo[9][9] de inteiros contendo 1 para representar posições com minas e 0 para representar posições que não estão minadas. 
// Após o programa deverá gerar uma matriz Minas[9][9] de inteiros contendo, para cada posição que não contém minas, o número de minas existentes nas posições adjacentes 
// considerar as oito posições adjacentes).  
// As posições que contém minas deverão receber o valor -1.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 11
#define B -1

void preencheMatriz(int campo[N][N]) {
    int x,a,b;

    srand(time(NULL));

    for(x=0; x<10; x++) {
        a=rand() % 9;
        b=rand() % 9;
        printf("(%d,%d) ",a,b);
        campo[a+1][b+1]=B;
    }
}

void verificaMatriz(int campo[N][N]) {
    int x,y,bombas;

    for(x=1; x<10; x++) {
        for(y=1; y<10; y++) {
            if(campo[x][y]==0) {
                bombas=0;

                if(campo[x-1][y-1]==B) {bombas++;}
                if(campo[x-1][y]==B) {bombas++;}
                if(campo[x-1][y+1]==B) {bombas++;}
                if(campo[x][y-1]==B) {bombas++;}
                if(campo[x][y+1]==B) {bombas++;}
                if(campo[x+1][y-1]==B) {bombas++;}
                if(campo[x+1][y]==B) {bombas++;}
                if(campo[x+1][y+1]==B) {bombas++;}

                campo[x][y]=bombas;
            }
        }
    }
}

void escreveMatriz(int campo[N][N]) {
    int x,y;

    for(x=1; x<10; x++) {
        for(y=1; y<10; y++) {
            printf("%2d ",campo[x][y]);
        }
        printf("\n");
    }
}

int main() {
    int campo[N][N]={0};

    printf("Posicoes das Bombas:\n");
    preencheMatriz(campo);
    printf("\n\nMatriz Inicial:\n");
    escreveMatriz(campo);
    printf("\nMatriz Final:\n");
    verificaMatriz(campo);
    escreveMatriz(campo);

    return 0;
}
