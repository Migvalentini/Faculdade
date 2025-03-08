// Crie uma struct para armazenar as informações de veículos com as seguintes informações:
// Nome do fabricante (50 caracteres)
// Modelo  (50 caracteres)
// Preço (float)
// Faça um programa que leia os dados de N veículos (o valor de N é definido pela diretiva #define). 
// Após, o programa deverá imprimir as informações dos veículos em ordem alfabética de marca. 
// Veículos da mesma marca devem ser ordenados em ordem crescente de preço. 
// No caso de veículos da mesma marca com mesmo preço, esses devem ser ordenados de em ordem alfabética pelo modelo.
// Por exemplo, considerando um N=6
// Honda      Civic     87.900
// Honda      Fit       63.200
// Ford       Focus     73.990
// Ford       EcoSport  73.990
// Toyota     Corolla   91.990
// Chevrolet  Cruze     92.990
// o programa deve produzir a seguinte saída
// Chevrolet Cruze 92.99
// Ford EcoSport 73.99
// Ford Focus 73.99
// Honda Fit 63.2
// Honda Civic 87.9
// Toyota Corolla 91.99

#include <stdio.h>
#include <string.h>

#define N 6

struct veiculo {
    char fabricante[50];
    char modelo[50];
    float preco;
};
typedef struct veiculo VEICULO;

void ordenaVeiculos(VEICULO veiculos[N]) {
    int x,y;
    VEICULO aux;

    for(x=0; x<N; x++) {
        for(y=0; y<N-x-1; y++) {
            if(strcasecmp(veiculos[y].fabricante,veiculos[y+1].fabricante)>0) {
                aux=veiculos[y];
                veiculos[y]=veiculos[y+1];
                veiculos[y+1]=aux;
            } else if(strcasecmp(veiculos[y].fabricante,veiculos[y+1].fabricante)==0 && veiculos[y].preco>veiculos[y+1].preco) {
                aux=veiculos[y];
                veiculos[y]=veiculos[y+1];
                veiculos[y+1]=aux;
            } else if(strcasecmp(veiculos[y].fabricante,veiculos[y+1].fabricante)==0 && veiculos[y].preco==veiculos[y+1].preco && strcasecmp(veiculos[y].modelo,veiculos[y+1].modelo)>0) {
                aux=veiculos[y];
                veiculos[y]=veiculos[y+1];
                veiculos[y+1]=aux;
            }
        }
    }
}

void escreveVeiculos(VEICULO veiculos[N]) {
    int x;

    for(x=0; x<N; x++) {
        printf("Veiculo %d: %9s %8s %.2f\n",x,veiculos[x].fabricante,veiculos[x].modelo,veiculos[x].preco);
    }
}

int main() {
    VEICULO veiculos[N]={
        {"Honda","Civic",87.900},
        {"Honda","Fit",63.200},
        {"Ford","Focus",73.990},
        {"Ford","EcoSport",73.990},
        {"Toyota","Corolla",91.990},
        {"Chevrolet","Cruze",92.990}
    };

    ordenaVeiculos(veiculos);
    escreveVeiculos(veiculos);
}