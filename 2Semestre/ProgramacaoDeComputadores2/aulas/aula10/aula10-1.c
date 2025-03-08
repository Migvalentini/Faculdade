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

#define N 2

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

void leClientes(CLIENTE *vet, int n) {
    int x;

    for(x=0; x<n; x++)  {
        printf("Digite o codigo do cliente %d: ",x+1);
        scanf("%d",&vet[x].codigo);
        fflush(stdin);
        printf("Digite o nome do cliente %d: ",x+1);
        gets(vet[x].nome);
        fflush(stdin);
        printf("Digite a data de nascimento do cliente %d: ",x+1);
        scanf("%d %d %d",&vet[x].nasc.dia,&vet[x].nasc.mes,&vet[x].nasc.ano);
    }
}

void escreveClientes(CLIENTE *vet, int n) {
    int x;

    for(x=0; x<n; x++)  {
        printf("Codigo: %d ",vet[x].codigo);
        printf("Nome: %s ",vet[x].nome);
        printf("Data de nascimento: %d/%d/%d\n",vet[x].nasc.dia,vet[x].nasc.mes,vet[x].nasc.ano);
    }
}

int calculaIdade(DATA nasc, DATA atual) {
    int idade = atual.ano - nasc.ano;

    if(atual.mes < nasc.mes || atual.mes == nasc.mes && atual.dia < nasc.dia) {
        idade--;
    }

    return idade;
}

CLIENTE * maioresCliente(CLIENTE *vet, int num_clientes, DATA atual, int *num_maiores_idade) {
    *num_maiores_idade=0;
    int i, k, idade;

    for(i=0; i<num_clientes; i++) {
        idade = calculaIdade(vet[i].nasc, atual);
        if(idade >= 18) {
            (*num_maiores_idade)++;
        }
    }

    CLIENTE * maiores = (CLIENTE *)malloc(*num_maiores_idade*sizeof(CLIENTE));

    if(maiores==NULL) {
        printf("Erro na alocacao");
        return NULL;
    }

    k=0;
    for(i=0; i<num_clientes; i++) {
        idade = calculaIdade(vet[i].nasc, atual);
        if(idade >= 18) {
            maiores[k++]=vet[i];
        }
    }

    return maiores;
}

int main() {
    CLIENTE vet[N];
    DATA atual={15,10,2024};
    int m;

    leClientes(vet,N);
    printf("Vetor completo:\n");
    escreveClientes(vet,N);

    CLIENTE * maiores = maioresCliente(vet, N, atual, &m);

    printf("\nMaiores:\n");
    escreveClientes(maiores,m);

    free(maiores);
}
