// Faça um programa que leia de um arquivo binário os dados relativos a um número indefinido de alunos, cada aluno contendo as seguintes informações:
// nome: até 50 caracteres
// nota1: float
// nota2: float
// nota3: float
// Após a entrada dos dados o programa deverá gerar um arquivo texto de saída com o nome e a média aritmética dos alunos. 
// Os alunos devem estar organizados em ordem decrescente em relação a média final e se dois alunos tiverem a mesma média eles deverão ser organizados em ordem alfabética. 
// Por exemplo, considerando que o arquivo binário contenha 
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
// o programa deverá gerar um arquivo texto com o seguinte conteúdo:
// Otávio Santos Souza 7.8
// Marina Goncalves Martins 7.5
// Murilo Pereira Correia 7.5
// Rafaela Azevedo Gomes 6.4
// Júlia Oliveira Correia 6.2
// Fábio Cunha Lima 5.2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno {
    char nome[50];
    float n1, n2, n3;
};
typedef struct aluno ALUNO;

ALUNO *retornaAlunos(char nomeArquivo[], int *t) {
    FILE *f = fopen(nomeArquivo, "rb");
    ALUNO aux;
    int k=0;

    (*t) = 0;

    if(!f) {
        printf("Erro na abertura do arquivo");
        exit(1);
    }

    while(fread(&aux, sizeof(ALUNO), 1, f)) {
        (*t)++;
    }

    ALUNO *alunos = (ALUNO *)malloc(*t * sizeof(ALUNO));

    rewind(f);

    while(fread(&aux, sizeof(ALUNO), 1, f)) {
        alunos[k++]=aux;
    }

    fclose(f);
    return alunos;
}

void ordenaAlunos(ALUNO alunos[], int t) {
    int x, y;
    float media1, media2;
    ALUNO aux;

    for(x=0; x<t; x++) {
        for(y=0; y<t-x-1; y++) {
            media1 = (alunos[y].n1 + alunos[y].n2 + alunos[y].n3) / 3;
            media2 = (alunos[y+1].n1 + alunos[y+1].n2 + alunos[y+1].n3) / 3;
            if(media1<media2) {
                aux=alunos[y];
                alunos[y]=alunos[y+1];
                alunos[y+1]=aux;
            } else if(media1==media2 && strcmp(alunos[y].nome, alunos[y+1].nome)>0) {
                aux=alunos[y];
                alunos[y]=alunos[y+1];
                alunos[y+1]=aux;
            }
        }
    }
}

void escreveArquivo(char saida[], ALUNO alunos[], int t) {
    FILE *p = fopen(saida, "w");
    int x;

    if(!p) {
        printf("Erro na abertura do arquivo");
        exit(1);
    }

    for(x=0; x<t; x++) {
        fprintf(p, "%24s %.1f\n", alunos[x].nome, (alunos[x].n1 + alunos[x].n2 + alunos[x].n3)/3);
    }

    fclose(p);
}

int main() {
    char entrada[] = "../arquivos/entrada5.bin";
    char saida[] = "../arquivos/saida5.txt";
    int x, t;

    ALUNO *a = retornaAlunos(entrada, &t);

    ordenaAlunos(a, t);

    for(x=0; x<t; x++) {
        printf("%d - %24s %.1f %.1f %.1f %.1f\n", x, a[x].nome, a[x].n1, a[x].n2, a[x].n3, (a[x].n1 + a[x].n2 + a[x].n3)/3);
    }

    escreveArquivo(saida, a, t);
}