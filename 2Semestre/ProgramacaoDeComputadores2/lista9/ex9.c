// Considerando uma struct chamada PONTO, possuindo apenas a posição x e y (reais) do ponto. 
// Implemente um programa que lê as posições de N pontos (o valor de N é definido via diretiva #define) e ao final exiba os dois pontos com maior distância entre si. 
// Deve ser criada uma função que receba o vetor de pontos e retorne os dois pontos com maior distância entre si. 
// A distância entre 2 pontos, é calculada a partir da equação:
// d = √((x1-x2)²+(y1-y2)²)
// Protótipo da função:
// void maior_distancia(PONTOS p[N], PONTOS *p1, PONTOS *p2);

#include <stdio.h>
#include <math.h>

#define N 4

struct ponto {
    float x,y;
}; typedef struct ponto PONTO;

void lePontos(PONTO pontos[N]) {
    int x;

    for(x=0; x<N; x++) {
        printf("Digite x do p%d: ",x);
        scanf("%f",&pontos[x].x);
        printf("Digite y do p%d: ",x);
        scanf("%f",&pontos[x].y);
    }
}

float distancia(PONTO p1, PONTO p2) {
    return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
}

void maiorDistancia(PONTO p[N], PONTO *p1, PONTO *p2) {
    int x,y;
    float d,maiorDistancia=0;
    *p1=p[0];
    *p2=p[0];

    for(x=0; x<N-1; x++) {
        for(y=x+1; y<N; y++) {
            d=distancia(p[x],p[y]);
            if(d>maiorDistancia) {
                maiorDistancia=d;
                *p1=p[x];
                *p2=p[y];
            }
        }
    }
}

int main() {
    PONTO p1,p2;
    PONTO pontos[N]={
        {8,8},
        {0,0},
        {9,9},
        {2,2}
    };

    //lePontos(pontos);

    maiorDistancia(pontos,&p1,&p2);

    printf("P1 = (%.1f,%.1f)\nP2 = (%.1f,%.1f)",p1.x,p1.y,p2.x,p2.y);
}