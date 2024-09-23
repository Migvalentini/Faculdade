// Normalmente alguns poucos clientes representam a maior parte do faturamento de uma empresa. 
// Assim, um administrador deseja determinar quantos clientes representam 50% do faturamento da sua empresa.
// Faça um programa que leia os dados de N clientes com as seguintes informações (o valor N é definido pela diretiva #define):
// nome do cliente: até 50 caracteres
// faturamento: float
// Após, o programa deverá gerar como saída o total faturado e a quantidade mínima de clientes que representam 50% do faturamento. 
// Além disso, o programa deverá escrever o nome dos clientes que representam a metade do total faturado.
// Por exemplo, considerando um N=8 e a entrada 
// ACME Corporation          2000,00
// Wayne Enterprises         5000,00
// Spacely Space Sprockets   15000,00
// Sirius Cybernetics Corp   3500,00
// Wonka Industries          6500,00
// Very Big Corp. of America 3000,00
// Globex                    25000,00
// Gringotts                 10000,00
// O programa deverá escrever:
// Total faturado: 70000,00
// Número de clientes: 2
// Globex 25000.00
// Spacely Space Sprockets 15000.00

#include <stdio.h>

#define N 8

struct cliente {
    char nome[50];
    float faturamento;
};
typedef struct cliente CLIENTE;

void leClientes(CLIENTE clientes[N]) {
    int x;

    for(x=0; x<N; x++) {
        printf("Digite o nome do cliente: ");
        gets(clientes[x].nome);
        fflush(stdin);
        printf("Digite o faturamento: ");
        scanf("%f",&clientes[x].faturamento);
        fflush(stdin);
    }
}

void ordenaCLientes(CLIENTE clientes[N]) {
    int x,y;
    CLIENTE aux;

    for(x=0; x<N; x++) {
        for(y=0; y<N-x-1; y++) {
            if(clientes[y].faturamento<clientes[y+1].faturamento) {
                aux=clientes[y];
                clientes[y]=clientes[y+1];
                clientes[y+1]=aux;
            }
        }
    }
}

void escreveClientes(CLIENTE clientes[N],int max) {
    int x;

    for(x=0; x<max; x++) {
        printf("\nNome: %s\n",clientes[x].nome);
        printf("Faturamento: %.2f\n",clientes[x].faturamento);
    }
}

void verificaClientes(CLIENTE clientes[N]) {
    int x,ind=0;
    float total,soma=0;

    for(x=0; x<N; x++) {
        total+=clientes[x].faturamento;
    }

    while(soma<total/2) {
        soma+=clientes[ind++].faturamento;
    }

    printf("Total faturado: R$%.2f\n",total);
    printf("Numero de clientes: %d\n",ind);
    escreveClientes(clientes,ind);
}

int main() {
    //CLIENTE clientes[N];
    CLIENTE clientes[N] = {
        {"ACME Corporation", 2000.00},
        {"Wayne Enterprises", 5000.00},
        {"Spacely Space Sprockets", 15000.00},
        {"Sirius Cybernetics Corp", 3500.00},
        {"Wonka Industries", 6500.00},
        {"Very Big Corp. of America", 3000.00},
        {"Globex", 25000.00},
        {"Gringotts", 10000.00},
    };

    //leClientes(clientes);
    ordenaCLientes(clientes);
    //escreveClientes(clientes);
    verificaClientes(clientes);

    return 0;
}