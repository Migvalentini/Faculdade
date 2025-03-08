// Considere o cadastro de associados de um clube, onde cada associado é representado pelo seguinte tipo:
// struct associado {
// 	int codigo;
// 	char nome[50];
// 	DATA nascimento;
// }; typedef struct associado ASSOCIADO;
// O campo nascimento, que representa o dia, mês e ano de aniversario do associado, é um campo do tipo DATA, descrito a seguir:
// struct data {
//     int dia,mes,ano;
// };
// typedef struct data DATA;
// Faça uma função que receba um vetor de tamanho N (definido por #define) e uma estrutura do tipo DATA com a data atual. 
// A função deverá retornar um número inteiro com o número de associados menores de idade. A função implementada deverá seguir o protótipo que é definido a seguir:
// int menoresIdades(ASSOCIADOS associados[N], DATA atual)

#include <stdio.h>

#define N 5

struct data {
    int dia,mes,ano;
}; typedef struct data DATA;

struct associado {
	int codigo;
	char nome[50];
	DATA nascimento;
}; typedef struct associado ASSOCIADO;

int menoresIdades(ASSOCIADO associados[N], DATA atual) {
    int menores=0,x,dia,limite18=(atual.ano-18)*10000 + atual.mes*100 + atual.dia;

    for(x=0; x<N; x++) {
        dia=associados[x].nascimento.ano*10000 + associados[x].nascimento.mes*100 + associados[x].nascimento.dia;
        if(dia>limite18) {
            menores++;
        }
    }

    return menores;
}

int main() {
    ASSOCIADO associados[N] = {
        {1, "Joao Silva", {15, 7, 2005}},
        {2, "Maria Oliveira", {22, 3, 2010}},
        {3, "Pedro Souza", {8, 12, 2003}},
        {4, "Ana Costa", {5, 5, 2008}},
        {5, "Lucas Pereira", {30, 1, 2004}}
    };

    DATA atual = {22, 9, 2024};

    int menores = menoresIdades(associados, atual);
    printf("Numero de associados menores de idade: %d\n", menores);
}