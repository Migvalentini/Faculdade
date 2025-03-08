// O cadastro dos motoristas de uma empresa de transportes utiliza um vetor de estruturas com o nome (char nome[51]), número de matrícula (inteiro) e 
// o número de multas (inteiro) de seus motoristas. 
// Faça uma função, com o protótipo 
// MOTORISTAS *piores_motoristas(MOTORISTAS m[], int num_motoristas, int N);
// que receba o vetor de motoristas, o número total de motoristas da empresa e um número N (onde N < num_motoristas) e retorne 
// um vetor alocado dinamicamente com os N piores motoristas da empresa (com maior número de multas). 
// Os motoristas devem estar organizados em ordem decrescente em relação ao número de multas e se dois motoristas tiverem o mesmo número de multas eles deverão ser organizados em ordem alfabética. 
// Faça também o programa principal que deverá ler um valor M e alocar um vetor de M motoristas, faça a leitura dos dados dos M MOTORISTAS. 
// Após o programa deverá ler o valor de N e efetuar a chamada da função, e deverá escrever o vetor com os piores motoristas. 
// Por exemplo, para os seguintes dados dos motoristas (M=6)
// Marcos Gomes Silva 2331 8
// Rodrigo Correia Ribeiro 145  4 
// Alice Oliveira Santos 1465  6 
// Nicolas Silva Cavalcanti 2934  7 
// Daniel Silva Melo 2127  9 
// Diogo Sousa Almeida 1814  11
// e um N com valor igual a 4, o programa deve produzir a seguinte saída
// 1814 Diogo Sousa Almeida 11 
// 2127 Daniel Silva Melo 9 
// 2331 Marcos Gomes Silva 8
// 2934 Nicolas Silva Cavalcanti 7

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M 6
#define N 4

struct motorista {
    char nome[51];
    int matricula;
    int multas;
};
typedef struct motorista MOTORISTA;

void leMotoristas (MOTORISTA motoristas[M]) {
    int x;

    for(x=0; x<M; x++) {
        printf("Digite o nome do motorista %d: ",x+1);
        fflush(stdin);
        gets(motoristas[x].nome);
        printf("Digite a matricula do motorista %d: ",x+1);
        scanf("%d",&motoristas[x].matricula);
        printf("Digite a quantidade de multas do motorista %d: ",x+1);
        scanf("%d",&motoristas[x].multas);
    }
}

void escreveMotoristas (MOTORISTA motoristas[], int n) {
    int x;

    for(x=0; x<n; x++) {
        printf("%4d %s %d\n",motoristas[x].matricula,motoristas[x].nome,motoristas[x].multas);
    }
}

MOTORISTA * retornaPioresMotoristas(MOTORISTA motoristas[], int numMotoristas, int n) {
    int x,y;
    MOTORISTA * aux = (MOTORISTA *)malloc(numMotoristas*sizeof(MOTORISTA));
    MOTORISTA a;

    for(x=0; x<numMotoristas; x++) {
        aux[x]=motoristas[x];
    }

    for(x=0; x<numMotoristas; x++) {
        for(y=0; y<numMotoristas-x-1; y++) {
            if(aux[y].multas<aux[y+1].multas) {
                a=aux[y];
                aux[y]=aux[y+1];
                aux[y+1]=a;
            } else if(aux[y].multas==aux[y+1].multas && strcmp(aux[y].nome, aux[y+1].nome) >= 0) {
                a=aux[y];
                aux[y]=aux[y+1];
                aux[y+1]=a;
            }
        }
    }
    
    MOTORISTA * pioresMotoristas = (MOTORISTA *)malloc(n*sizeof(MOTORISTA));

    for(x=0; x<n; x++) {
        pioresMotoristas[x]=aux[x];
    }

    free(aux);
    return pioresMotoristas;
}

int main() {
    MOTORISTA motoristas[M] = {
        {"Marcos Gomes Silva", 2331, 8},
        {"Rodrigo Correia Ribeiro", 145, 4}, 
        {"Alice Oliveira Santos", 1465, 6}, 
        {"Nicolas Silva Cavalcanti", 2934, 7}, 
        {"Daniel Silva Melo", 2127, 9}, 
        {"Diogo Sousa Almeida", 1814, 11},
    };

    //leMotoristas(motoristas);

    MOTORISTA * pioresMotoristas = retornaPioresMotoristas(motoristas, M, N);
    
    escreveMotoristas(pioresMotoristas,N);

    free(pioresMotoristas);
}