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
    float n1,n2,n3;
};
typedef struct aluno ALUNO;

ALUNO * leArquivo(char *nome, int *t) {
    FILE *f = fopen(nome, "rb");
    *t = 0;

    if(f==NULL) {
        printf("Erro na abertura");
        return NULL;
    }

    fseek(f, 0, SEEK_END);
    *t = ftell(f) / sizeof(ALUNO); //ftell - pega a posição do byte corrente

    // ALUNO aux;

    // while(fread(&aux, sizeof(ALUNO), 1, f)) {
    //     (*t)++;
    // }

    ALUNO *a = (ALUNO *)malloc(*t * sizeof(ALUNO));

    if(a==NULL) {
        printf("Erro na alocacao");
        return NULL;
    }

    rewind(f); // Volta para o início
    fread(a, sizeof(ALUNO), *t, f);

    fclose(f);
    return a;
}

void escreveArquivo(char *nome, ALUNO *a, int t) {
    FILE *f = fopen(nome, "w");
    int i;

    if(f==NULL) {
        printf("Erro na abertura do arquivo");
        return;
    }

    for(i=0; i<t; i++) {
        fprintf(f, "%s %.1f\n", a[i].nome, (a[i].n1 + a[i].n2 + a[i].n3)/3);
    }
    fclose(f);
}

void ordenaArquivo(ALUNO *a, int t) {
    int i, j;
    float m1,m2;
    ALUNO aux;

    for(i=0; i<t; i++) {
        for(j=0; j<t-1-i; j++) {
            m1= (a[j].n1 + a[j].n2 + a[j].n3)/3;
            m2= (a[j+1].n1 + a[j+1].n2 + a[j+1].n3)/3;

            if(m1 < m2 || m1==m2 && strcmp(a[j].nome, a[j+1].nome) > 0) {
                aux=a[j];
                a[j]=a[j+1];
                a[j+1]=aux;
            }
        }
    }
}

int main() {
    char entrada[50] = "../questao5.bin", saida[50] = "saida.txt";
    int t;

    ALUNO *v = leArquivo(entrada, &t);

    if(v != NULL) {
        ordenaArquivo(v, t);
        escreveArquivo(saida, v, t);
        free(v);
    }
}
