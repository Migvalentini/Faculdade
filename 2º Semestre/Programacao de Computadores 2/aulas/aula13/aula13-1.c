// Considere um programa que armazena os dados referentes aos funcionários de uma empresa em um arquivo binário com dados do tipo FUNCIONARIO, definido conforme o tipo estruturado a seguir:
// struct funcionario {
//      int codigo;
//      char nome[50];
//      DATA nascimento;
//      float valor_hora;
// };
// typedef struct funcionario FUNCIONARIO;
// O campo nascimento, que representa o dia, mês e ano de nascimento do funcionário, é um  campo do tipo DATA, descrito a seguir:
// struct data {
//      int dia;
//      int mes;
//      int ano;
// };
// typedef struct data DATA;
// Escreva uma função em C que recebe como parâmetros o nome de um arquivo, um código e um novo valor hora. 
// A função deverá atualizar no arquivo o valor hora do funcionário com o respectivo código.

#include <stdio.h>

struct data {
    int dia;
    int mes;
    int ano;
};
typedef struct data DATA;

struct funcionario {
    int codigo;
    char nome[50];
    DATA nascimento;
    float valor_hora;
};
typedef struct funcionario FUNCIONARIO;

void escreveArquivo(char *nome) {
    FILE *f = fopen(nome, "rb");

    FUNCIONARIO aux;

    if(f==NULL) {
        printf("Erro na abertura");
        return;
    }

    while(fread(&aux, sizeof(FUNCIONARIO), 1, f)) {
        printf("Cod: %d Nome: %s Salario: %.2f\n",aux.codigo,aux.nome,aux.valor_hora);
    }
    fclose(f);
}

void atualizaArquivo(char *nome, int cod, float novo) {
    FILE *f = fopen(nome, "rb+");

    if(f==NULL) {
        printf("Erro na abertura");
        return;
    }

    FUNCIONARIO aux;

    while(fread(&aux,sizeof(FUNCIONARIO), 1, f)) {
        if(aux.codigo == cod) {
            aux.valor_hora = novo;
            fseek(f, -sizeof(FUNCIONARIO), SEEK_CUR);
            fwrite(&aux, sizeof(FUNCIONARIO),1,f);
            //fflush(f); Garante a limpeza do cache. Semelhante ao fclose
            break;
        }
    }
    fclose(f);
}

int main() {
    char entrada[50] = "../arquivos/questao7.bin";

    escreveArquivo(entrada);
    atualizaArquivo(entrada, 65, 1);
    printf("\n");
    escreveArquivo(entrada);
}