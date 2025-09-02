//3)  Considere uma lista encadeada simples de números inteiros. 
//Implementar uma operação que caso o valor de um nodo seja menor que o valor do seu seu próximo, deve somar os dois valores e colocar em um nodo só.

#include <stdio.h>
#include <stdlib.h>

struct elemento {
    int info;
    struct elemento *prox;
}; typedef struct elemento Elemento;

Elemento *inicio;

void insereFim(int numero) {
    Elemento *novo, *aux = inicio;
    novo = (Elemento*) malloc(sizeof(Elemento));
    novo->info = numero;
    novo->prox = NULL;

    if (inicio == NULL) { // primeiro nó
        inicio = novo;
    } else { // insere no fim
        while (aux->prox != NULL) {
            aux = aux->prox;
        }
        aux->prox = novo;
    }
}

void organizarLista() {
    Elemento *ant, *aux = inicio;
    
    printf("\n\n");

    while(aux != NULL && aux->prox != NULL) {
        printf("%d %d\n",aux->info, aux->prox->info);
        if(aux->info < aux->prox->info) {
            printf("%d - %d\n",inicio->info, aux->prox->info);
            inicio = inicio->prox;
            inicio->info = inicio->info + aux->info;
            ant = aux;
            //free(ant);
        }
        aux = aux->prox;
    }
}

void escreve() {
    Elemento *aux = inicio;
    
    printf("\nLista:\n");
    while(aux != NULL) {
        printf("%d\n",aux->info);
        aux = aux->prox;
    }
}

int main() {
    inicio = NULL;

    insereFim(10);
    insereFim(20);
    insereFim(5);
    insereFim(8);
    insereFim(3);
    escreve();

    organizarLista();
    //escreve();
    printf("\n%d", inicio->info);

    return 0;
}
