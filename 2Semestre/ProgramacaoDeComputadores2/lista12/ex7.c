// Considere um programa que armazena os dados referentes aos funcionários de uma empresa em um arquivo binário com dados do tipo FUNCIONARIO, definido conforme o tipo estruturado a seguir:
// struct funcionario {
//      int codigo;
//      char nome[50];
//      DATA nascimento;
//      float valor_hora;
// };
// typedef struct funcionario FUNCIONARIO;
// O campo nascimento, que representa o dia, mês e ano de nascimento do funcionário, é um campo do tipo DATA, descrito a seguir:
// struct data {
//      int dia;
//      int mes;
//      int ano;
// };
// typedef struct data DATA;
// Escreva uma função em C que recebe como parâmetros o nome de um arquivo, um código e um novo valor hora. 
// A função deverá atualizar no arquivo o valor hora do funcionário com o respectivo código.

#include <stdio.h>
#include <stdlib.h>

struct data {
    int dia, mes, ano;
};
typedef struct data DATA;

struct funcionario {
    int codigo;
    char nome[50];
    DATA nascimento;
    float valor_hora;
};
typedef struct funcionario FUNCIONARIO;

void escreveArquivo(char entrada[]) {
    FILE *f = fopen(entrada, "rb");
    FUNCIONARIO aux;

    while(fread(&aux, sizeof(FUNCIONARIO), 1, f)) {
        printf("%d %s %d/%d/%d %f\n", aux.codigo, aux.nome, aux.nascimento.dia, aux.nascimento.mes, aux.nascimento.ano, aux.valor_hora);
    }

    printf("\n");

    fclose(f);
}

void atualizaArquivo(char entrada[], int codigo, float novoValor) {
    FILE *f = fopen(entrada, "rb+");
    FUNCIONARIO aux;

    while(fread(&aux, sizeof(FUNCIONARIO), 1, f)) {
        if(aux.codigo == codigo) {
            aux.valor_hora = novoValor;
            fseek(f, -1 * sizeof(FUNCIONARIO), SEEK_CUR);
            fwrite(&aux, sizeof(FUNCIONARIO), 1, f);
            break;
        }
    }

    fclose(f);
}

int main() {
    char entrada[] = "../arquivos/entrada7.bin";

    escreveArquivo(entrada);
    atualizaArquivo(entrada, 23, 15.6);
    escreveArquivo(entrada);
}