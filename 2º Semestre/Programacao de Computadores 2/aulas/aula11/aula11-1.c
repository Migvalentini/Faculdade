#include <stdio.h>
#include <stdlib.h>

#define N 5

void geraMatriz(int m[N][N]) {
    int i,j;

    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            m[i][j]=rand()%10000;
        }
    }
}

void escreveMatriz(int m[N][N]) {
    int i,j;

    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            printf("%5d ",m[i][j]);
        }
        printf("\n");
    }
}

int soma(int n) {
    int s=0,dig;

    while(n>0) {
        dig=n%10;
        s+=dig;
        n/=10;
    }

    return s;
}

void doisMaioresSoma(int m[N][N], int *p, int *s) {
    int i,j,sd;
    int sp=0,ss=0;

    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            sd=soma(m[i][j]);
            if(sd>sp) {
                ss=sp;
                *s=*p;
                sp=sd;
                *p=m[i][j];
            } else if(sd>ss) {
                ss=sd;
                *s=m[i][j];
            }
        }
    }
}

int main() {
    int m[N][N];
    int p,s;

    geraMatriz(m);
    escreveMatriz(m);
    doisMaioresSoma(m,&p,&s);
    printf("Primeiro: %d Segundo: %d",p,s);
}