// Considerando um tipo chamado ALUNOS definido conforme o tipo estruturado a seguir:
// struct alunos {
//     char nome[50];
//     float nota1;
//     float nota2;
//     float nota3;
//     float media;
// };
// typedef struct alunos ALUNOS;
// Faça um programa que leia os dados relativos a N alunos (o valor N é definido pela diretiva #define). 
// Os dados referentes aos alunos devem ser armazenados em um vetor de dados do tipo ALUNOS. 
// Ao final o programa deverá exibir o nome e a média aritmética do aluno com a menor e com a maior média. 
// Deve ser criada uma função que receba o vetor de ALUNOS e retorne os dois alunos com a menor e com a maior média.
// Protótipo da função:
// void menor_maior_medias(ALUNOS vet[N], ALUNOS *menor, ALUNOS *maior)

#include <stdio.h>
#include <string.h>

#define N 3

struct alunos {
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
    float media;
};
typedef struct alunos ALUNOS;

void leAlunos(ALUNOS alunos[N]) {
    int x;

    for(x=0; x<N; x++) {
        printf("Digite o nome do aluno %d: ",x);
        fflush(stdin);
        gets(alunos[x].nome);
        printf("Digite a nota 1 do aluno %d: ",x);
        scanf("%f",&alunos[x].nota1);
        printf("Digite a nota 2 do aluno %d: ",x);
        scanf("%f",&alunos[x].nota2);
        printf("Digite a nota 3 do aluno %d: ",x);
        scanf("%f",&alunos[x].nota3);
        alunos[x].media=(alunos[x].nota1+alunos[x].nota2+alunos[x].nota3)/3;
    }
}

void menorMaiorMedias(ALUNOS vet[N], ALUNOS *menor, ALUNOS *maior) {
    int x;
    maior->media=vet[0].media;
    strcpy((*maior).nome,vet[0].nome);
    menor->media=vet[0].media;
    strcpy((*menor).nome,vet[0].nome);

    for(x=0; x<N; x++) {
        if(vet[x].media>maior->media) {
            maior->media=vet[x].media;
            strcpy((*maior).nome,vet[x].nome); 
        }
    }

    menor->media=maior->media;

    for(x=0; x<N; x++) {
        if(vet[x].media<menor->media) {
            menor->media=vet[x].media;
            strcpy((*menor).nome,vet[x].nome); 
        }
    }
}

int main() {
    ALUNOS alunos[N]={
        {"Miguel",1,2,3,2},
        {"Maria",5,6,7,6},
        {"Joao",7,8,9,8}
    };
    ALUNOS menor,maior;

    //leAlunos(alunos);
    menorMaiorMedias(alunos,&menor,&maior);

    printf("Maior media = %.2f Maior nome = %s\nMenor media = %.2f Menor nome = %s",maior.media,maior.nome,menor.media,menor.nome);
}