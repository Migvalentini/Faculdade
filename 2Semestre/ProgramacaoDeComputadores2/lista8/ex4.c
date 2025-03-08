// Considere um programa que armazena os dados referentes aos funcionários de uma empresa como um vetor de dados do tipo FUNCIONARIO, definido conforme o tipo estruturado a seguir:
// struct funcionario {
//     int codigo;
//     char nome[50];
//     DATA nascimento;
//     float valor_hora;
// };
// typedef struct funcionario FUNCIONARIO;
// O campo nascimento, que representa o dia, mês e ano de nascimento do funcionário, é um campo do tipo DATA, descrito a seguir:
// struct data {
//      int dia;
//      int mes;
//      int ano;
// };
// typedef struct data DATA;
// Escreva uma função em C que recebe como parâmetros um vetor de dados do tipo FUNCIONARIO e retorne (em uma estrutura do tipo FUNCIONARIO) as informações do funcionário mais velho.
// O protótipo da função é dado por:
// FUNCIONARIO mais_velho (FUNCIONARIO vetor[], int numeroFuncionarios)
// Faça também o programa principal que deverá ler as informações de N funcionários e após escrever as informações do funcionário mais velho. 
// O valor N é definido pela diretiva #define. Por exemplo, para o caso de N=6 e funcionários com os seguintes dados
// 23 Marcos Gomes Silva 31 8 1966 12.45 
// 45 Rodrigo Correia Ribeiro 1 4 2000 10.45
// 65 Alice Oliveira Santos 14 6 1981 11.50
// 34 Nicolas Silva Cavalcanti 29 7 1977 12.00
// 27 Daniel Silva Melo 21 9 1998 10.60
// 14 Diogo Sousa Almeida 18 11 1966 12.30
// o programa deve produzir a seguinte saída:
// Código: 23 
// Nome: Marcos Gomes Silva 
// Nascimento: 31/08/1966
// Valor Hora: R$ 12.45

#include <stdio.h>

#define N 1

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

void leFuncionarios(FUNCIONARIO vetor[N]) {
    int x;

    for(x=0; x<N; x++) {
        printf("Digite o codigo: ");
        scanf("%d",&vetor[x].codigo);
        fflush(stdin);
        printf("Digite o nome: ");
        gets(vetor[x].nome);
        fflush(stdin);
        printf("Digite a data de nascimento: ");
        scanf("%d %d %d",&vetor[x].nascimento.dia,&vetor[x].nascimento.mes,&vetor[x].nascimento.ano);
        printf("Digite o valor hora: ");
        scanf("%f",&vetor[x].valor_hora);
        fflush(stdin);
    }
}

FUNCIONARIO retornaMaisVelho(FUNCIONARIO vetor[N]) {
    FUNCIONARIO maisVelho=vetor[0];
    int x,dia,menor=vetor[0].nascimento.ano*10000 + vetor[0].nascimento.mes*100 + vetor[0].nascimento.dia;


    for(x=1; x<N; x++) {
        dia=vetor[x].nascimento.ano*10000 + vetor[x].nascimento.mes*100 + vetor[x].nascimento.dia;
        if(dia<menor) {
            menor=dia;
            maisVelho=vetor[x];
        }
    }

    return maisVelho;
}

int main() {
    FUNCIONARIO funcionarios[N]={
        {45,"Rodrigo Correia Ribeiro",{1,4,2000},10.45},
        // {65,"Alice Oliveira Santos",{14,6,1981},11.50},
        // {34,"Nicolas Silva Cavalcanti",{29,7,1977},12.00},
        // {27,"Daniel Silva Melo",{21,9,1998},10.60},
        // {23,"Marcos Gomes Silva",{31,8,1966},12.45},
        // {14,"Diogo Sousa Almeida",{18,11,1966},12.30}
    };

    leFuncionarios(funcionarios);

    FUNCIONARIO maisVelho=retornaMaisVelho(funcionarios);

    printf("Codigo: %d\n",maisVelho.codigo);
    printf("Nome: %s\n",maisVelho.nome);
    printf("Nascimento: %d/%d/%d\n",maisVelho.nascimento.dia,maisVelho.nascimento.mes,maisVelho.nascimento.ano);
    printf("Valor hora: %.2f\n",maisVelho.valor_hora);
}