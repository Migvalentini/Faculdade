#include <stdio.h>
#include <stdlib.h>

struct elemento {
    int info;
    struct elemento *prox, *ant;
}; typedef struct elemento Elemento;

Elemento *inicio;

void escreve() {
    Elemento *aux = inicio;
    
    printf("\nLista:\n");
    while(aux != NULL) {
        printf("%d\n",aux->info);
        aux = aux->prox;
    }
}

void inserePrimeiroUnico(int numero) {
    Elemento *inicio, *novo;
    
    novo = (Elemento*) malloc(sizeof(Elemento));
    novo->info = numero;
    novo->prox = NULL;
    novo->ant = NULL;
    inicio = novo;
}

void inserePrimeiro(int numero) {
    Elemento *novo;

    novo = (Elemento*) malloc(sizeof(Elemento));
    novo->info = numero;
    novo->ant = NULL;
    novo->prox = NULL;
    inicio = novo;
}

void insereUltimo(int numero) {
    Elemento *novo, *aux=inicio;

    novo = (Elemento*) malloc(sizeof(Elemento));
    novo->info = numero;
    novo->prox = NULL;
    while (aux->prox != NULL) {
        aux = aux->prox;
    }
    aux->prox = novo;
    novo->ant = aux;
}

void insereMeio(int numero) {
    Elemento *novo, *aux=inicio;

    novo = (Elemento*) malloc(sizeof(Elemento));
    novo->info = numero;
    novo->prox = NULL;
    novo->ant = NULL;

    while (aux != NULL && aux->info < novo->info ){
        aux = aux->prox;
    }

    novo->prox = aux;
    novo->ant = aux->ant;   
    (aux->ant)->prox = novo;
    aux->ant = novo;
}

void removeMeio(int numero) {
    Elemento *aux=inicio;

    while(aux != NULL && aux->info != numero) {
        aux = aux->prox;
    }
    (aux->ant)->prox = aux->prox;
    aux->prox->ant = aux->ant;
    free(aux);
}

void removePrimeiro() {
    Elemento *aux=inicio;

    aux = inicio;
    inicio = inicio->prox;
    inicio->ant = NULL;
    free(aux);
}

void removeUltimo() {
    Elemento *aux=inicio;

    while(aux->prox != NULL) {
        aux = aux->prox;
    }
    (aux->ant)->prox = NULL;
    free(aux);
}

int main() {
    inicio = NULL;

    inserePrimeiroUnico(10);
    inserePrimeiro(4);
    insereUltimo(6);
    insereUltimo(7);
    insereMeio(5);
    escreve(5);

    removeMeio(5);
    escreve();
    
    removePrimeiro();
    escreve();
    
    removeUltimo();
    escreve();

    return 0;
}
