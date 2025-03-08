// Implemente um programa que lê o nome e a pontuação de N candidatos (o valor de N é definido via diretiva #define) de um concurso e ao final 
// exiba a listagem (nome e pontuação) dos candidatos com as duas maiores pontuações. 
// Deve ser criada uma estrutura com os campos nome (string) e score (float positivo) para armazenar os dados de um candidato. 
// Também deve ser definida uma função que recebe um vetor de candidatos, que foram capturados na função main e retorna os dois candidatos com maiores pontuações.
// Protótipo da função:
// void maiores_pontuadores(CANDIDATO vet[N], CANDIDATO *c1, CANDIDATO *c2);

#include <stdio.h>

#define N 5

struct candidato {
    char nome[50];
    float score;
};
typedef struct candidato CANDIDATO;

void leCandidatos(CANDIDATO candidatos[N]) {
    int x;

    for(x=0; x<N; x++) {
        printf("Digite o nome: ");
        fflush(stdin);
        gets(candidatos[x].nome);
        printf("Digite o score: ");
        scanf("%f",&candidatos[x].score);
    }
}

void maioresPontuadores(CANDIDATO candidatos[N], CANDIDATO *c1, CANDIDATO *c2) {
    int x,y;
    CANDIDATO aux;

    for(x=0; x<N; x++) {
        for(y=0; y<N-x-1; y++) {
            if(candidatos[y].score<candidatos[y+1].score) {
                aux=candidatos[y];
                candidatos[y]=candidatos[y+1];
                candidatos[y+1]=aux;
            }
        }
    }

    for(x=0; x<N; x++) {
        printf("%s %f",candidatos[x].nome,candidatos[x].score);
    }

    *c1=candidatos[0];
    *c2=candidatos[1];
}

int main() {
    CANDIDATO c1,c2;
    CANDIDATO candidatos[N]={
        {"Miguel",1},
        {"Joao",20},
        {"Maria",3},
        {"Pedro",4},
        {"Joaquim",5}
    };

    //leCandidatos(candidatos);
    maioresPontuadores(candidatos,&c1,&c2);
    printf("\nC1:\nNome: %s Score: %f\nC2:\nNome: %s Score: %f",c1.nome,c1.score,c2.nome,c2.score);
}