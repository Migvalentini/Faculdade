// Considere um tipo que representa as coordenadas, X e Y, de pontos no plano, definido pela estrutura:
// struct ponto {
//      float x;
//      float y;
// };
// typedef struct ponto PONTO;
// Faça um programa que leia n elementos do tipo PONTO e determine quais desses pontos se encontram dentro de uma determinada região retangular. 
// O programa deverá ler um valor n e criar um dinamicamente um vetor de n elementos do tipo PONTO. Após o programa deverá ler as coordenadas dos n pontos e de dois pontos (x1, y1) e (x2, y2). 
// Após, faça uma função, conforme o seguinte protótipo
// PONTO *filtra_pontos (PONTO *p, int npontos, float x1, float y1, float x2, float y2);
// que receba o vetor P e as coordenadas dos dois pontos e retorne um vetor alocado dinamicamente com os pontos de P que se encontram dentro da determinada região retangular. 
// O vetor retornado deverá conter apenas os pontos cujas as coordenadas x e y obedeçam a regra: x1 <= x < x2  e y1 <= y < y2.
// Por exemplo, supondo que o vetor de entrada da função tenha o conteúdo:
// 1.2 3.2
// 2.4 1.5
// 3.1 2.3
// 9.1 5.5
// 2.1 4.9
// 7.5 4.8
// e os valores dos parâmetros x1, y1, x2 e y2 sejam respectivamente 3.0, 2.0,  9.5, e 5.0, o vetor de saída deverá conter o seguintes pontos: 
// 3.1 2.3
// 7.5 4.8

#include <stdio.h>
#include <stdlib.h>

#define N 8

struct ponto {
    float x;
    float y;
};
typedef struct ponto PONTO;

PONTO *filtraPontos (PONTO *p, int npontos, float x1, float y1, float x2, float y2, int *pDentro) {
    int i,k=0;
    *pDentro=0;

    for(i=0; i<npontos; i++) {
        if(x1<=p[i].x && p[i].x<=x2 && y1<=p[i].y && p[i].y<=y2) {
            (*pDentro)++;
        }
    }

    PONTO * pontos = (PONTO *)malloc((*pDentro)*sizeof(PONTO));

    for(i=0; i<npontos; i++) {
        if(x1<=p[i].x && p[i].x<=x2 && y1<=p[i].y && p[i].y<=y2) {
            pontos[k++]=p[i];
        }
    }

    return pontos;
}

int main() {
    PONTO pontos[N] = {
        {1.2, 3.2},
        {2.4, 1.5},
        {3.1, 2.3},
        {9.1, 5.5},
        {5.0, 4.5},
        {2.1, 4.9},
        {4.3, 3.1},
        {7.5, 4.8},
    };

    float x1=3.1;
    float x2=2.3;
    float y1=7.5;
    float y2=4.8;
    int pDentro;

    PONTO * pontosDentroRegiao = filtraPontos(pontos, N, x1, x2, y1, y2, &pDentro);

    int i;

    for(i=0; i<pDentro; i++) {
        printf("(%.1f, %.1f)\n",pontosDentroRegiao[i].x,pontosDentroRegiao[i].y);
    }
}