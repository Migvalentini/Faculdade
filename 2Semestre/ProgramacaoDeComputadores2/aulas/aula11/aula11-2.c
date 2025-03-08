// Implemente um programa que lê o nome e a pontuação de N candidatos (o valor de N é definido via diretiva #define) de um concurso e 
// ao final exiba a listagem (nome e pontuação) dos candidatos com as duas maiores pontuações. 
// Deve ser criada uma estrutura com os campos nome (string) e score (float positivo) para armazenar os dados de um candidato. 
// Também deve ser definida uma função que recebe um vetor de candidatos, que foram capturados na função main e retorna os dois candidatos com maiores pontuações.
// Protótipo da função:
// void maiores_pontuadores(CANDIDATO vet[N], CANDIDATO *c1, CANDIDATO *c2);

#include <stdio.h>
#include <stdlib.h>

#define N 5

struct candidato {
    char nome[50];
    float score;
};
typedef struct candidato CANDIDATO;

void leCandidatos(CANDIDATO *candidatos, int n) {
    int x;

    for(x=0; x<n; x++) {
        printf("Digite o nome: ");
        gets(candidatos[x].nome);
        printf("Digite o score: ");
        scanf("%f",&candidatos[x].score);
        fflush(stdin);
    }
}

void escreveCandidatos(CANDIDATO *candidatos, int n) {
    int x;

    for(x=0; x<n; x++) {
        printf("Nome: %s",candidatos[x].nome);
        printf(" Score: %f\n",candidatos[x].score);
    }
}

void maioresPontuadores(CANDIDATO vet[N], int n, CANDIDATO *c1, CANDIDATO *c2) {
    int x;
    (*c1).score=0;
    (*c2).score=0;

    for(x=0; x<n; x++) {
        if(vet[x].score>(*c1).score) {
            *c2=*c1;
            *c1=vet[x];
        } else if(vet[x].score>(*c2).score) {
            *c2=vet[x];
        }
    }
}

int main() {
    CANDIDATO c1,c2;
    //leCandidatos(candidatos,N);
    CANDIDATO candidatos[N] = {
        {"Miguel",1},
        {"Joao",22},
        {"Maria",50},
        {"Pedro",43},
        {"Julia",76},
    };
    escreveCandidatos(candidatos,N);

    maioresPontuadores(candidatos,N,&c1,&c2);

    printf("\n\nPrimeiro:\nNome: %s Score: %.2f\n",c1.nome,c1.score);
    printf("Segundo:\nNome: %s Score: %.2f\n",c2.nome,c2.score);
}
