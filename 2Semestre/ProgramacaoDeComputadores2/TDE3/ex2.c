// Faça um programa que leia para N países (o valor de N é definido diretiva #define): o nome do país, com o número de medalhas de ouro, prata e bronze. 
// O programa deverá escrever os países ordenados de acordo com o número de medalhas. A ordem dos países é dada pelo número de medalhas de ouro. 
// Se há empate em medalhas de ouro, o país que tiver mais medalhas de prata fica a frente. 
// Havendo empate em medalhas de ouro e prata, fica mais bem colocado o país com mais medalhas de bronze. 
// Se dois ou mais países empatarem nos três tipos de medalhas, seu programa deve mostrá-los em ordem alfabética.
// Considerando um N=8 e dada as seguintes informações dos países.
// Belgica 2 2 2
// Brasil 7 6 6
// Franca 10 18 14
// Italia 8 12 8
// Australia 8 11 10
// Colombia 3 2 3
// Suica 3 2 2
// Tailandia 2 2 2
// o programa deve produzir a seguinte saída
// Franca 10 18 14
// Italia 8 12 8
// Australia 8 11 10
// Brasil 7 6 6
// Colombia 3 2 3
// Suica 3 2 2
// Belgica 2 2 2
// Tailandia 2 2 2

#include <stdio.h>
#include <string.h>

#define N 20

struct pais {
    char nome[50];
    int ouro;
    int prata;
    int bronze;
};
typedef struct pais PAIS;

void lePaises(PAIS paises[N]) {
    int x;

    for(x=0; x<N; x++) {
        printf("Digite o nome do pais: ");
        fflush(stdin);
        gets(paises[x].nome);
        printf("Digite o numero de medalhes de ouro: ");
        scanf("%d",&paises[x].ouro);
        printf("Digite o numero de medalhes de prata: ");
        scanf("%d",&paises[x].prata);
        printf("Digite o numero de medalhes de bronze: ");
        scanf("%d",&paises[x].bronze);
    }
}

void ordenaPaises(PAIS paises[N]) {
    int x,y;
    PAIS aux;

    for(x=0; x<N; x++) {
        for(y=0; y<N-x-1; y++) {
            if(paises[y].ouro<paises[y+1].ouro) {
                aux=paises[y];
                paises[y]=paises[y+1];
                paises[y+1]=aux;
            } else if(paises[y].ouro==paises[y+1].ouro && paises[y].prata<paises[y+1].prata) {
                aux=paises[y];
                paises[y]=paises[y+1];
                paises[y+1]=aux;
            } else if(paises[y].ouro==paises[y+1].ouro && paises[y].prata==paises[y+1].prata && paises[y].bronze==paises[y+1].bronze) {
                aux=paises[y];
                paises[y]=paises[y+1];
                paises[y+1]=aux;
            } else if(paises[y].ouro==paises[y+1].ouro && paises[y].prata==paises[y+1].prata && paises[y].bronze==paises[y+1].bronze && strcmp(paises[y].nome, paises[y+1].nome) > 0) {
                aux=paises[y];
                paises[y]=paises[y+1];
                paises[y+1]=aux;
            }
        }
    }
}

void escrevePaises(PAIS paises[N]) {
    int x;

    for(x=0; x<N; x++) {
        printf("%s %d %d %d\n",paises[x].nome,paises[x].ouro,paises[x].prata,paises[x].bronze);
    }
}

int main() {
    PAIS paises[N] = {
    {"Brasil", 7, 6, 8},
    {"Estados Unidos", 10, 5, 6},
    {"Japao", 10, 5, 5},
    {"China", 9, 8, 7},
    {"Russia", 8, 9, 6},
    {"Alemanha", 8, 8, 7},
    {"Franca", 7, 7, 10},
    {"Italia", 6, 7, 9},
    {"Australia", 5, 10, 8},
    {"Coreia do Sul", 5, 5, 9},
    {"Reino Unido", 6, 6, 6},
    {"Canada", 5, 4, 7},
    {"Cuba", 3, 5, 6},
    {"Argentina", 4, 4, 5},
    {"Espanha", 4, 3, 7},
    {"Portugal", 2, 6, 5},
    {"Mexico", 3, 3, 4},
    {"Nigeria", 2, 4, 6},
    {"Suica", 1, 5, 8},
    {"Grecia", 2, 2, 3}
};

    //lePaises(paises);
    ordenaPaises(paises);
    escrevePaises(paises);
}