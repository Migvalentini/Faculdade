// Considere um tipo que representa as coordenadas, X e Y, de pontos no plano, definido pela estrutura:
// struct ponto {
//   float x;
//   float y;
// };
// typedef struct ponto PONTO;
// Faça uma função que receba como parâmetros um vetor com um conjunto de dados do tipo PONTO e retorna (em uma estrutura do tipo PONTO) as informações do ponto mais distante do CENTRO MÉDIO. 
// Matematicamente, o centro médio é obtido a partir da média aritmética simples das coordenadas X e Y, separadamente. 
// O protótipo da função é dado por:
// PONTO mais_distante_ponto_medio (PONTO vetor[], int tamVetor)
// Observação: a distância entre dois pontos A e B  é dada por:
// Dab = √((Xa-Xb)²+(Ya-Yb)²)
// Faça também o programa principal que deverá ler N pontos e após escrever o ponto mais distante do CENTRO MÉDIO. 
// O valor N é definido pela diretiva #define. Por exemplo, para N=10 e os seguintes pontos
// 3.4 4.2
// 4.2 -3.6
// 7.6 -2.6
// 5.4 3.8
// 8.2 1.7
// -1.4 3.7
// -4.8 -3.5
// 3.8  1.1
// -2.3 3.4
// 2.0 3.7
// o CENTRO MÉDIO é (2.61,1.19). Assim, o ponto mais distante do CENTRO MÉDIO é
// -4.8   -3.5

#include <stdio.h>
#include <math.h>

#define N 10

struct ponto {
  float x;
  float y;
};
typedef struct ponto PONTO;

PONTO maisDistantePontoMedio (PONTO pontos[N]) {
    int x,maiorDistancia=0;
    float distancia,xCentroMedio=0,yCentroMedio=0;
    PONTO maisDistante;

    for(x=0; x<N; x++) {
        xCentroMedio+=pontos[x].x;
        yCentroMedio+=pontos[x].y;
    }

    xCentroMedio/=10;
    yCentroMedio/=10;

    for(x=0; x<N; x++) {
        distancia=(float)sqrt(pow(pontos[x].x-xCentroMedio,2)+pow(pontos[x].y-yCentroMedio,2));
        if(distancia>maiorDistancia) {
            maiorDistancia=distancia;
            maisDistante=pontos[x];
        }
    }

    return maisDistante;
}

int main() {
    PONTO pontos[N]={
        {3.4,4.2},
        {4.2,-3.6},
        {7.6,-2.6},
        {5.4,3.8},
        {8.2,1.7},
        {-1.4,3.7},
        {-4.8,-3.5},
        {3.8,1.1},
        {-2.3,3.4},
        {2.0,3.7}
    };

    PONTO maisDistante=maisDistantePontoMedio(pontos);

    printf("Ponto mais distante: (%.1f,%.1f)",maisDistante.x,maisDistante.y);
}