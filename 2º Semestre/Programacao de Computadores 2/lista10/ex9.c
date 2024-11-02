// Considere o cadastro de clientes de uma empresa, onde cada cliente é representado pelo seguinte tipo:
// struct cliente {
//     int codigo;
//     char nome[50];
//     DATA nasc;
// };
// typedef struct cliente CLIENTE;
// O campo nascimento, que representa o dia, mês e ano de nascimento do cliente, é um campo do tipo DATA, descrito a seguir:
// struct data {
//     int dia;
//     int mes;
//     int ano;
// };
// typedef struct data DATA;
// Faça uma função que receba como parâmetros um vetor com um conjunto de dados do tipo CLIENTE (e o seu tamanho) e data atual. A função deverá:
// Calcular o número de clientes maiores de idade e retorne este valor através de um argumento;
// Retornar um novo vetor de estruturas CLIENTE (alocado dinamicamente e com o tamanho exato) que contém todos os clientes maiores de idade;
// A função deve retornar NULL se não há houverem clientes maiores de idade. O protótipo da função é dado por:
// CLIENTE* maior_de_idade(CLIENTE *vet,  int num_clientes,  DATA atual,  int *num_maiores_idade)

#include <stdio.h>
#include <stdlib.h>

struct data {
    int dia;
    int mes;
    int ano;
};
typedef struct data DATA;

struct cliente {
    int codigo;
    char nome[50];
    DATA nasc;
};
typedef struct cliente CLIENTE;

int ehMaiorIdade(DATA nascimento, DATA atual) {
    int idade = atual.ano-nascimento.ano;
    
    if(atual.mes<nascimento.mes || (atual.mes==nascimento.mes && atual.dia<nascimento.dia)) {
        idade--;
    }

    return idade >= 18;
}

CLIENTE* maiorDeIdade(CLIENTE *vet,  int numClientes, DATA atual, int *numMaioresIdade) {
    int x,k=0;

    *numMaioresIdade=0;

    for(x=0; x<numClientes; x++) {
        if(ehMaiorIdade(vet[x].nasc,atual)) {
            (*numMaioresIdade)++;
        }
    }

    CLIENTE * maioresDeIdade = (CLIENTE *)malloc(*numMaioresIdade * sizeof(CLIENTE));

    for(x=0; x<numClientes; x++) {
        if(ehMaiorIdade(vet[x].nasc,atual)) {
            maioresDeIdade[k++]=vet[x];
        }
    }

    return maioresDeIdade;
}

int main() {
    CLIENTE clientes[26] = {
        {1, "Alice", {15, 6, 2000}},    // 24 years old - adult
        {2, "Bob", {20, 8, 2010}},      // 14 years old - minor
        {3, "Charlie", {5, 12, 1995}},  // 28 years old - adult
        {4, "Diana", {25, 7, 2008}},    // 16 years old - minor
        {5, "Eve", {10, 11, 2003}},     // 20 years old - adult
        {6, "Frank", {1, 1, 2007}},     // 17 years old - minor
        {7, "Grace", {30, 10, 2005}},     // 22 years old - adult
        {8, "Hank", {30, 12, 2005}},    // 18 years old - adult
        {9, "Ivy", {15, 3, 1980}},      // 44 years old - adult
        {10, "John", {28, 4, 1990}},    // 34 years old - adult
        {11, "Karen", {14, 2, 1975}},   // 49 years old - adult
        {12, "Leo", {3, 11, 2006}},     // 18 years old - minor
        {13, "Mona", {22, 12, 1999}},   // 24 years old - adult
        {14, "Nina", {17, 7, 1985}},    // 39 years old - adult
        {15, "Oscar", {8, 5, 2012}},    // 12 years old - minor
        {16, "Paul", {5, 8, 2006}},     // 18 years old - adult
        {17, "Quinn", {11, 1, 2005}},   // 19 years old - adult
        {18, "Rose", {6, 6, 1998}},     // 26 years old - adult
        {19, "Steve", {30, 9, 1996}},   // 28 years old - adult
        {20, "Tina", {12, 12, 2004}},   // 19 years old - adult
        {21, "Uma", {7, 8, 2015}},      // 9 years old - minor
        {22, "Victor", {2, 11, 2005}},  // 19 years old - adult
        {23, "Wendy", {19, 11, 2007}},  // 16 years old - minor
        {24, "Xander", {25, 5, 2001}},  // 23 years old - adult
        {25, "Yara", {1, 1, 1993}},     // 31 years old - adult
        {26, "Zane", {13, 4, 2014}}     // 10 years old - minor
    };

    DATA atual = {02, 11,2024};

    int numMaioresIdade,x;

    CLIENTE * maioresIdade = maiorDeIdade(clientes, 26, atual, &numMaioresIdade);

    for(x=0; x<numMaioresIdade; x++) {
        printf("%02d %7s %02d/%02d/%02d\n",maioresIdade[x].codigo,maioresIdade[x].nome,maioresIdade[x].nasc.dia,maioresIdade[x].nasc.mes,maioresIdade[x].nasc.ano);
    }
}