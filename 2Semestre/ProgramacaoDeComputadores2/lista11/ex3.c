// Dado um arquivo com o seguinte formato:
// 5
// 123.987.098-09
// RODRIGO DA SILVA
// 1500.78
// CONTABILIDADE
// 454.283.731.99
// RODRIGO DE SOUZA 
// 567.00
// PRODUCAO
// 723.987.098-15
// PEDRO PAULO RANGEL
// 500.00
// TESOURARIA
// 123.987.098-09
// MARIA MENDONÇA DE SOUZA
// 400.15
// FATURAMENTO
// 456.987.098-11
// FELIPE DE MATTOS
// 700.76
// CONTABILIDADE
// onde o primeiro número (5 no exemplo) corresponde ao número de funcionários e para cada funcionário tem-se: CPF, nome, salário e departamento. 
// Gerar um novo arquivo texto com as mesmas informações mas com os funcionários ordenados de acordo com o nome (um funcionário por linha).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct funcionario {
    char cpf[30];
    char nome[50];
    float salario;
    char departamento[30];
};
typedef struct funcionario FUNCIONARIO;

FUNCIONARIO * leArquivo(char entrada[50], int *totalFuncionarios) {
    FILE *f = fopen(entrada, "r");
    int x;

    if ( f == NULL ){
		printf("Erro ao abrir o arquivo %s\n", entrada);
		exit(0);
	}

    fscanf(f,"%d\n",totalFuncionarios);

    FUNCIONARIO *funcionarios = (FUNCIONARIO *)malloc(*totalFuncionarios * sizeof(FUNCIONARIO));

    for(x=0; x<(*totalFuncionarios); x++) {
        fgets(funcionarios[x].cpf,30,f);
        funcionarios[x].cpf[strlen(funcionarios[x].cpf)-1]='\0';
        fgets(funcionarios[x].nome,50,f);
        funcionarios[x].nome[strlen(funcionarios[x].nome)-1]='\0';
        fscanf(f, "%f\n",&funcionarios[x].salario);
        fgets(funcionarios[x].departamento,30,f);
        funcionarios[x].departamento[strlen(funcionarios[x].departamento)-1]='\0';
    }

    fclose(f);
    return funcionarios;
}

void ordenaFuncionarios(FUNCIONARIO *funcionarios, int totalFuncionarios) {
    FUNCIONARIO aux;
    int x,y;

    for(x=0; x<totalFuncionarios; x++) {
        for(y=0; y<totalFuncionarios-x-1; y++) {
            if(strcmp(funcionarios[y].nome, funcionarios[y+1].nome) > 0) {
                aux=funcionarios[y];
                funcionarios[y]=funcionarios[y+1];
                funcionarios[y+1]=aux;
            }
        }
    }
}

void escreveArquivo(char saida[50], FUNCIONARIO *funcionarios, int totalFuncionarios) {
    FILE *s = fopen(saida, "w");
    int x;

    for(x=0; x<totalFuncionarios; x++) {
        fprintf(s, "%9s | %23s | %.2f | %13s\n",funcionarios[x].cpf,funcionarios[x].nome,funcionarios[x].salario,funcionarios[x].departamento);
    }

    fclose(s);
}

int main() {
    char entrada[50] = "../arquivos/entrada3.txt";
    char saida[50] = "../arquivos/saida3.txt";
    int totalFuncionarios;

    FUNCIONARIO *funcionarios = leArquivo(entrada, &totalFuncionarios);
    ordenaFuncionarios(funcionarios, totalFuncionarios);
    escreveArquivo(saida, funcionarios, totalFuncionarios);

    printf("Total Funcionarios: %d\n",totalFuncionarios);

    for(int x=0; x<totalFuncionarios; x++) {
        printf("%9s | %23s | %.2f | %13s\n",funcionarios[x].cpf,funcionarios[x].nome,funcionarios[x].salario,funcionarios[x].departamento);
    }   
}