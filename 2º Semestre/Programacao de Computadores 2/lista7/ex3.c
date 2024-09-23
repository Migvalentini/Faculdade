// Faça um programa que leia os dados relativos a N alunos (o valor N é definido pela diretiva #define), cada aluno contendo as seguintes informações:
// nome: até 50 caracteres
// nota1: float
// nota2: float
// nota3: float
// Após a entrada dos dados o programa deve escrever o nome e a média aritmética dos alunos. 
// Os alunos devem estar organizados em ordem decrescente em relação a média final e se dois alunos tiverem a mesma média eles deverão ser organizados em ordem alfabética. 
// Por exemplo, considerando um valor de N=6 e para as entradas
// Fábio Cunha Lima 3.4 5.6 6.6
// Rafaela Azevedo Gomes 5.6 6.5 7.2
// Marina Goncalves Martins 6.5 7.5 8.5
// Murilo Pereira Correia 8.0 7.0 7.5
// Otávio Santos Souza 7.2 8.0 8.2
// Júlia Oliveira Correia 5.1 7.5 6.0
// o programa deve produzir a seguinte saída:
// Otávio Santos Souza 7.8
// Marina Goncalves Martins 7.5
// Murilo Pereira Correia 7.5
// Rafaela Azevedo Gomes 6.4
// Júlia Oliveira Correia 6.2
// Fábio Cunha Lima 5.2

#include <stdio.h>
#include <string.h>

#define N 3

struct aluno {
    char nome[50];
    int nota1;
    int nota2;
    int nota3;
    float media;
};
typedef struct aluno ALUNO;

void leAlunos(ALUNO alunos[N]) {
    int x;

    for(x=0; x<N; x++) {
        printf("Digite o nome do aluno: ");
        gets(alunos[x].nome);
        fflush(stdin);
        printf("Digite a nota 1: ");
        scanf("%d",&alunos[x].nota1);
        printf("Digite a nota 2: ");
        scanf("%d",&alunos[x].nota2);
        printf("Digite a nota 3: ");
        scanf("%d",&alunos[x].nota3);
        fflush(stdin);
        alunos[x].media=(float)(alunos[x].nota1+alunos[x].nota2+alunos[x].nota3)/3;
    }

}

void ordenaAlunos(ALUNO alunos[N]) {
    ALUNO aux;
    int x,y;

    for(x=0; x<N; x++) {
        for(y=0; y<N-x-1; y++) {
            if(alunos[y].media<alunos[y+1].media) {
                aux=alunos[y];
                alunos[y]=alunos[y+1];
                alunos[y+1]=aux;
            } else if(alunos[y].media==alunos[y+1].media && strcasecmp(alunos[y].nome,alunos[y+1].nome)>0) {
                aux=alunos[y];
                alunos[y]=alunos[y+1];
                alunos[y+1]=aux;
            }
        }
    }
}

void escreveAlunos(ALUNO alunos[N]) {
    int x;

    for(x=0; x<N; x++) {
        printf("\nAluno %d\n",x);
        printf("Nome: %s\n",alunos[x].nome);
        printf("Notas: %d %d %d\n",alunos[x].nota1,alunos[x].nota2,alunos[x].nota3);
        printf("Media: %f\n",alunos[x].media);
    }
}

int main() {
    ALUNO alunos[N];

    leAlunos(alunos);
    ordenaAlunos(alunos);
    escreveAlunos(alunos);

    return 0;
}