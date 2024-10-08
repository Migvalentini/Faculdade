// Exercício 3 lista 7

// Faça um programa que leia os dados relativos a N alunos (o valor N é definido pela diretiva #define), cada aluno contendo as seguintes informações:
// nome: até 50 caracteres
// nota1: float
// nota2: float
// nota3: float
// Após a entrada dos dados o programa deve escrever o nome e a média aritmética dos alunos. 
// Os alunos devem estar organizados em ordem decrescente em relação a média final e se dois alunos tiverem a mesma média eles deverão ser organizados em ordem alfabética. 
// Por exemplo, considerando um valor de N=6 e para as entradas
// Fábio Cunha Lima 
// 3.4 5.6 6.6
// Rafaela Azevedo Gomes 
// 5.6 6.5 7.2
// Marina Goncalves Martins 
// 6.5 7.5 8.5
// Murilo Pereira Correia 
// 8.0 7.0 7.5
// Otávio Santos Souza 
// 7.2 8.0 8.2
// Júlia Oliveira Correia 
// 5.1 7.5 6.0
// o programa deve produzir a seguinte saída:
// Otávio Santos Souza 7.8
// Marina Goncalves Martins 7.5
// Murilo Pereira Correia 7.5
// Rafaela Azevedo Gomes 6.4
// Júlia Oliveira Correia 6.2
// Fábio Cunha Lima 5.2

#include <stdio.h>

#define N 1

struct aluno {
    char nome[50];
    float nota[3];
};
typedef struct aluno ALUNO;

void leAlunos(ALUNO v[N]) {
    int x,y;

    for(x=0; x<N; x++) {
        printf("Digite o nome: ");
        gets(v[x].nome);
        for(y=0; y<3; y++) {
            printf("Digite a nota: ");
            scanf("%f",&v[x].nota[y]);
            fflush(stdin);
        }
    }
}

void escreveAlunos(ALUNO v[N]) {
    int x,y,soma=0;

    for(x=0; x<N; x++) {
        printf("Nome: %s\n",v[x].nome);   
        for(y=0; y<3; y++) {
            soma+=v[x].nota[y];
        }
        printf("Media das notas: %f",soma);
        soma=0;
    }
}

int main() {
    ALUNO v[N];

    leAlunos(v);
    escreveAlunos(v);

    return 0;
}