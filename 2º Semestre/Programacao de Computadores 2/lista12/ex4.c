// Considere um tipo que representa as coordenadas, X e Y, de pontos no plano, definido pela estrutura:
// struct ponto {
//   float x;
//   float y;
// };
// typedef struct ponto PONTO;
// Faça uma função que receba como parâmetros o nome de um arquivo com um número indefinido de dados do tipo PONTO e 
// retorna (em uma estrutura do tipo PONTO) as informações do ponto mais distante do CENTRO MÉDIO. 
// Matematicamente, o centro médio é obtido a partir da média aritmética simples das coordenadas X e Y, separadamente.  
// O protótipo da função é dado por:
// PONTO mais_distante_ponto_medio (char nomearquivo[])
// Observação: a distância entre dois pontos A e B  é dada por:
// d=sqrt((pow(Xa-Xb),2)+(pow(Ya-Yb),2))
// Faça também o programa principal que deverá ler o nome do arquivo binário e após escrever o ponto mais distante do CENTRO MÉDIO.
// Por exemplo, considerando que o programa contenha os seguintes pontos
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
#include <stdlib.h>
#include <math.h>

struct ponto {
    float x;
    float y;
};
typedef struct ponto PONTO;

float distancia(PONTO p1, PONTO p2) {
    return sqrt((pow(p1.x-p2.x, 2))+(pow(p1.y-p2.y, 2)));
}

PONTO maisDistantePontoMedio (char nomearquivo[]) {
    FILE *f = fopen(nomearquivo, "rb");
    PONTO aux, centroMedio, maisDistante;
    float somaX=0, somaY=0, k=0, dist=0, n;

    if(!f) {
        printf("Erro na abertura");
        exit(1);
    }

    while(fread(&aux, sizeof(PONTO), 1, f)) {
        somaX+=aux.x;
        somaY+=aux.y;
        k++;
    }

    centroMedio.x=somaX/k;
    centroMedio.y=somaY/k;
    
    rewind(f);

    while(fread(&aux, sizeof(PONTO), 1, f)) {
        n=distancia(aux, centroMedio);
        if(n > dist) {
            dist=n;
            maisDistante=aux;
        }
    }

    fclose(f);
    return maisDistante;
}

int main() {
    char entrada[] = "../arquivos/entrada4.bin";

    PONTO maisDistante = maisDistantePontoMedio(entrada);

    printf("(%.1f, %.1f)",maisDistante.x, maisDistante.y);
}