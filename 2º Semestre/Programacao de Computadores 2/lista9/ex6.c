// Faça uma função que receba como parâmetro uma matriz M[15][15] e retorne: o menor número primo da matriz e a sua respectiva posição (linha e coluna). 
// O protótipo da função é dado por: void menor_primo(int M[15][15], int *primo, int *lin, int *col)
// A função deverá retornar: primo=-1, col=-1 e lin=-1 se não existir nenhum número primo na matriz. 
// Faça também o programa principal que deverá ler a matriz e após escrever: o menor número primo da matriz e a sua respectiva posição. 
// Esses valores deverão ser retornados pela função implementada.

#include <stdio.h>

#define N 5

void menorPrimo(int m[N][N], int *primo, int *lin, int *col) {
    int x,y,z,div,flag=0;
    int maior=m[0][0];
    *lin=0;
    *col=0;

    for(x=0; x<N; x++) {
        for(y=0; y<N; y++) {
            div=2;
            for(z=2;z<m[x][y]/2+1;z++) {
                if(m[x][y]%z==0) {
                    div++;
                }
            }
            if(div==2 && m[x][y]>1) {
                flag=1;
                if(m[x][y]>maior){
                    maior=m[x][y];
                }
            }
        }
    }

    if(flag==0) {
        *primo=-1;
        *lin=-1;
        *col=-1;
    } else{
        *primo=maior;

        for(x=0; x<N; x++) {
            for(y=0; y<N; y++) {
                div=2;
                for(z=2;z<m[x][y]/2+1;z++) {
                    if(m[x][y]%z==0) {
                        div++;
                    }
                }
                if(div==2 && m[x][y]>1) {
                    if(m[x][y]<=*primo){
                        *primo=m[x][y];
                        *lin=x;
                        *col=y;
                    }
                }
            }
        }
    }

}

int main() {
    int m[5][5] = {
        {5,22,35,44,4},
        {55,1,40,9,4},
        {81,91,22,36,8},
        {28,30,65,6,12},
        {9,26,50,9,3}
    };
    int primo,lin,col;

    menorPrimo(m,&primo,&lin,&col);

    printf("Menor Primo = %d\nLin = %d\nCol = %d",primo,lin,col);
}