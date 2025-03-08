// Uma empresa com filiais em diversas cidades possui as informações de seus funcionários organizadas em um vetor de estruturas de N posições, onde cada funcionário possui: 
// o código do funcionário (inteiro), 
// o nome (no máximo 50 caracteres) e 
// o código da cidade de residência desse funcionário.
// Em outro vetor de estruturas tem-se as informações de M cidades, onde cada cidade possui:  
// o código da cidade (inteiro), 
// o nome da mesma (no máximo 50 caracteres) e 
// o estado. 
// Faça um programa que leia as informações dos N funcionários e das M cidades. (o Os valores de N e M são definidos pela diretiva #define): 
// Após, o programa deverá gerar um relatório (em tela) que escreva o nome de cada cidade e os dados (código e nome) dos funcionário que nela residem. 
// As cidades devem ser escritas em ordem alfabética, bem como os funcionários de cada cidade também devem ser escritos em ordem alfabética.
// Considerando um N=6 e dada as seguintes informações a respeito dos funcionários
// 23 Marcos Gomes Silva 1
// 45 Rodrigo Correia Ribeiro 2 
// 65 Alice Oliveira Santos 3
// 34 Nicolas Silva Cavalcanti 2
// 27 Daniel Silva Melo 1 
// 14 Diogo Sousa Almeida 2
// e considerando um M=3 com as seguintes informações das cidades
// 1 Caxias do Sul RS
// 2 Farroupilha RS
// 3 Bento Gonçalves RS
// o programa deve produzir a seguinte saída
// Caxias do Sul   RS -> 27 Daniel Silva Melo     - 23 Marcos Gomes Silva
// Bento Gonçalves RS -> 65 Alice Oliveira Santos 
// Farroupilha     RS -> 14 Diogo Sousa Almeida   - 34 Nicolas Silva Cavalcanti - 45 Rodrigo Correia Ribeiro

#include <stdio.h>
#include <string.h>

#define N 6
#define M 3

struct funcionario {
    int codigo;
    char nome[50];
    int cidade;
};
typedef struct funcionario FUNCIONARIO;

struct cidade {
    int codigo;
    char nome[50];
    char estado[3];
};
typedef struct cidade CIDADE;

void leFuncionarios(FUNCIONARIO funcionarios[N]) {
    int x;

    for(x=0; x<N; x++) {
        printf("Digite o codigo do funcionario: ");
        scanf("%d",&funcionarios[x].codigo);
        printf("Digite o nome do funcionario: ");
        fflush(stdin);
        gets(funcionarios[x].nome);
        printf("Digite o codigo da cidade do funcionario: ");
        scanf("%d",&funcionarios[x].cidade);
    }
}

void leCidades(CIDADE cidades[M]) {
    int x;

    for(x=0; x<M; x++) {
        printf("Digite o codigo da cidade: ");
        scanf("%d",&cidades[x].codigo);
        printf("Digite o nome da cidade: ");
        fflush(stdin);
        gets(cidades[x].nome);
        printf("Digite o estado da cidade: ");
        fflush(stdin);
        gets(cidades[x].estado);
    }
}

void ordenaFuncionarios(FUNCIONARIO funcionarios[N]) {
    int x,y;
    FUNCIONARIO aux;

    for(x=0; x<N; x++) {
        for(y=0; y<N-x-1; y++) {
            if(strcasecmp(funcionarios[y].nome,funcionarios[y+1].nome) > 0) {
                aux=funcionarios[y];
                funcionarios[y]=funcionarios[y+1];
                funcionarios[y+1]=aux;
            }
        }
    }
}

void ordenaCidades(CIDADE cidades[M]) {
    int x,y;
    CIDADE aux;

    for(x=0; x<M; x++) {
        for(y=0; y<M-x-1; y++) {
            if(strcasecmp(cidades[y].nome,cidades[y+1].nome) > 0) {
                aux=cidades[y];
                cidades[y]=cidades[y+1];
                cidades[y+1]=aux;
            }
        }
    }
}

void escreveFuncionarios(FUNCIONARIO funcionarios[N]) {
    int x;

    printf("Funcionarios:\n");

    for(x=0; x<N; x++) {
        printf("%d - %s - %d\n",funcionarios[x].codigo,funcionarios[x].nome,funcionarios[x].cidade);
    }
}

void escreveCidades(CIDADE cidades[M]) {
    int x;

    printf("\nCidades:\n");

    for(x=0; x<M; x++) {
        printf("%d - %s - %s\n",cidades[x].codigo,cidades[x].nome,cidades[x].estado);
    }
}

void geraRelatorio(FUNCIONARIO funcionarios[], CIDADE cidades[]) {
    int x,y;

    for(x=0; x<M; x++) {
        printf("\n%s %s\n",cidades[x].nome,cidades[x].estado);
        for(y=0; y<N; y++) {
            if(funcionarios[y].cidade == cidades[x].codigo) {
                printf("%d %s\n", funcionarios[y].codigo, funcionarios[y].nome);
            }
        }
    }
}

int main() {
    FUNCIONARIO funcionarios[N]={
        {23, "Marcos Gomes Silva", 1},
        {45, "Rodrigo Correia Ribeiro", 2}, 
        {65, "Alice Oliveira Santos", 3},
        {34, "Nicolas Silva Cavalcanti", 2},
        {27, "Daniel Silva Melo", 1}, 
        {14, "Diogo Sousa Almeida", 2},
    };

    CIDADE cidades[M]={
        {1, "Caxias do Sul", "RS"},
        {2, "Farroupilha", "RS"},
        {3, "Bento Goncalves", "RS"},
    };

    //FUNCIONARIO funcionarios[N];
    //CIDADE cidades[M];

    //leFuncionarios(funcionarios);
    //leCidades(cidades);

    //escreveFuncionarios(funcionarios);
    //escreveCidades(cidades);

    ordenaFuncionarios(funcionarios);
    ordenaCidades(cidades);

    geraRelatorio(funcionarios,cidades);
}