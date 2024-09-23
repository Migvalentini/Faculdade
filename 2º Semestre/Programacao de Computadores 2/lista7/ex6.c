// Faça um programa que leia, para N candidatos a deputado (o valor de N é definido pela diretiva #define): seu nome (máximo 50 caracteres), partido (inteiro) e número de votos (inteiro). 
// O programa deverá escrever para todos os candidatos o nome, o partido e o número de votos, em ordem crescente de partido e, para o mesmo partido, em ordem decrescente de número de votos. 
// Por exemplo, considerando um N=6 e para a entrada (nome,  partido e números de votos)
// Diogo Sousa Almeida       3  5000
// Rodrigo Correia Ribeiro   1  15000
// Marcos Gomes Silva        2  4500
// Nicolas Silva Cavalcanti  3  4000
// Alice Oliveira Santos     2  5000
// Daniel Silva Melo         1  20000
// o programa deve produzir a seguinte saída
// Daniel Silva Melo 1 20000
// Rodrigo Correia Ribeiro 1 15000
// Alice Oliveira Santos 2 5000
// Marcos Gomes Silva 2 4500
// Diogo Sousa Almeida 3 5000
// Nicolas Silva Cavalcanti 3 4

#include <stdio.h>

#define N 6

struct candidato {
    char nome[50];
    int partido;
    int votos;
};
typedef struct candidato CANDIDATO;

void ordenaCandidatos(CANDIDATO candidatos[N]) {
    int x,y;
    CANDIDATO aux;

    for(x=0; x<N; x++) {
        for(y=0; y<N-x-1; y++) {
            if(candidatos[y].partido>candidatos[y+1].partido) {
                aux=candidatos[y];
                candidatos[y]=candidatos[y+1];
                candidatos[y+1]=aux;
            } else if(candidatos[y].partido==candidatos[y+1].partido && candidatos[y].votos<candidatos[y+1].votos) {
                aux=candidatos[y];
                candidatos[y]=candidatos[y+1];
                candidatos[y+1]=aux;
            }
        }
    }
}

void escreveCandidatos(CANDIDATO candidatos[N]) {
    int x;

    for(x=0; x<N; x++) {
        printf("\n%s %d %d",candidatos[x].nome,candidatos[x].partido,candidatos[x].votos);
    }
}

int main() {
    CANDIDATO candidatos[N]={
        {"Diogo Sousa Almeida", 3, 5000},
        {"Rodrigo Correia Ribeiro", 1, 15000},
        {"Marcos Gomes Silva", 2, 4500},
        {"Nicolas Silva Cavalcanti", 3, 4000},
        {"Alice Oliveira Santos", 2, 5000},
        {"Daniel Silva Melo", 1, 20000}
    };

    ordenaCandidatos(candidatos);
    escreveCandidatos(candidatos);
}