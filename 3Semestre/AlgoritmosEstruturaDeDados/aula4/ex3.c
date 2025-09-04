//3)  Considere uma lista encadeada simples de números inteiros. 
//Implementar uma operação que caso o valor de um nodo seja menor que o valor do seu próximo, deve somar os dois valores e colocar em um nodo só.

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

void escreve() {
    Elemento *aux = inicio;
    
    printf("\nLista:\n");
    while(aux != NULL) {
        printf("%d\n",aux->info);
        aux = aux->prox;
    }
}

void organizarLista() {
    Elemento *ant = inicio, *aux = inicio;
    
    if(inicio == NULL) {
        return;
    }

    while (aux != NULL && aux->prox != NULL) {
        if (aux->info < aux->prox->info) {
            aux->prox->info += aux->info;
            
            if (aux == inicio) { 
                inicio = aux->prox;
                free(aux);
                aux = inicio;
            } else {
                ant->prox = aux->prox;
                free(aux);
                aux = ant->prox;
            }
        } else {
            ant = aux;
            aux = aux->prox;
        }
    }
}

int main() {
    inicio = NULL;

    insereFim(1);
    insereFim(2);
    insereFim(5);
    insereFim(20);
    insereFim(50);

    escreve();

    organizarLista();
    escreve();

    return 0;
}
