// Desenvolva um programa em C que para 10 cartas de baralho leia o seu valor (entre 1 e 13) e naipe (1 - ouros, 2 - copas, 3 - paus, 4 - espadas), 
// e ordene-as em ordem crescente de naipe e, para cada naipe, em ordem crescente de valor. 
// Escreva a lista de cartas ordenada.

#include <stdio.h>

int main() {
    int x, valor[10], naipe[10], flag=0, cont, aux;

    for(x=0; x<10; x++) {
        printf("Digite o valor da carta %d: ",x);
        scanf("%d",&valor[x]);
        printf("Digite o naipe da carta %d: ",x);
        scanf("%d",&naipe[x]);
    }

    while(flag==0) {
        cont=0;
        for(x=0; x<9; x++) {
            if(naipe[x] > naipe[x+1]) {
                aux = naipe[x];
                naipe[x] = naipe[x+1];
                naipe[x+1] = aux;
                aux = valor[x];
                valor[x] = valor[x+1];
                valor[x+1] = aux;
                cont++;
            }
        }
        if(cont==0) {
            flag=1;
        }
    }

    flag=0;
    while(flag==0) {
        cont=0;
        for(x=0; x<9; x++) {
            if(valor[x] > valor[x+1] && naipe[x] == naipe[x+1]) {
                aux = valor[x];
                valor[x] = valor[x+1];
                valor[x+1] = aux;
                cont++;
            }
        }
        if(cont==0) {
            flag=1;
        }
    }

    for(x=0; x<10; x++) {
        printf("Valor: %d ", valor[x]); printf("Naipe: %d\n", naipe[x]);
    }

    return 0;
}
