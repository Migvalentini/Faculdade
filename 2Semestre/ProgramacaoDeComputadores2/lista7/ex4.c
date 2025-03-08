// Faça um programa que leia os dados relativos a N pessoas (o valor de N é definido pela diretiva #define), cada pessoa contendo as seguintes informações:
// nome: até 50 caracteres;
// peso em quilogramas (int) 
// altura em metros (float)
// Após a entrada dos dados o programa deverá escrever o nome e o IMC das N pessoas, em ordem decrescente de IMC. 
// Para o cálculo do IMC basta dividir o peso pela altura ao quadrado. Por exemplo, considerando um N=6 e para a entrada (nome,  peso e altura)
// Marcos Gomes Silva        82  1.77
// Rodrigo Correia Ribeiro   90  1.85
// Alice Oliveira Santos     60  1.61
// Nicolas Silva Cavalcanti  82  1.81
// Daniel Silva Melo         68  1.74
// Diogo Sousa Almeida       95  1.78
// o programa deve produzir a seguinte saída
// Diogo Sousa Almeida       29.98
// Rodrigo Correia Ribeiro   26.29
// Marcos Gomes Silva        26.17
// Nicolas Silva Cavalcanti  25.02
// Alice Oliveira Santos     23.14
// Daniel Silva Melo         22.46

#include <stdio.h>

#define N 6

struct pessoa {
    char nome[50];
    int peso;
    float altura;
    float imc;
};
typedef struct pessoa PESSOA;

void lePessoas(PESSOA pessoas[N]) {
    int x;

    for(x=0; x<N; x++) {
        printf("Digite o nome da pessoa: ");
        gets(pessoas[x].nome);
        fflush(stdin);
        printf("Digite o peso: ");
        scanf("%d",&pessoas[x].peso);
        printf("Digite a altura: ");
        scanf("%f",&pessoas[x].altura);
        fflush(stdin);
        pessoas[x].imc=pessoas[x].peso/(pessoas[x].altura*pessoas[x].altura);
    }
}

void escrevePessoas(PESSOA pessoas[N]) {
    int x;

    for(x=0; x<N; x++) {
        printf("Pessoa %d\n",x);
        printf("Nome: %s\n",pessoas[x].nome);
        printf("Peso: %d\n",pessoas[x].peso);
        printf("Altura: %.2f\n",pessoas[x].altura);
        printf("IMC: %.2f\n\n",pessoas[x].imc);
    }
}

void ordenaPessoas(PESSOA pessoas[N]) {
    int x,y;
    PESSOA aux;

    for(x=0; x<N; x++) {
        for(y=0; y<N-x-1; y++) {
            if(pessoas[y].imc<pessoas[y+1].imc) {
                aux=pessoas[y];
                pessoas[y]=pessoas[y+1];
                pessoas[y+1]=aux;
            }
        }
    }
}

int main() {
    PESSOA pessoas[N];

    lePessoas(pessoas);
    ordenaPessoas(pessoas);
    escrevePessoas(pessoas);

    return 0;
}