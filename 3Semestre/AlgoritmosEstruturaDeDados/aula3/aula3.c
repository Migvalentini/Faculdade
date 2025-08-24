#include <stdio.h>
#include <stdlib.h>

struct elemento {
    int info;
    struct elemento *prox;
}; typedef struct elemento Elemento;

Elemento *inicio;

void inserePrimeiro(int numero) {
    Elemento *novo;
    novo = (Elemento*)malloc(sizeof(Elemento));
    novo->info = numero;
    novo->prox = NULL;
    inicio = novo;  
}

void insere(int numero) {
    Elemento *novo;
    novo = (Elemento*)malloc(sizeof(Elemento));
    novo->info = numero;
    if(inicio == NULL) { //primeiro e único
        novo->prox = NULL;
    } else { // insere
        novo->prox = inicio;
    }
    inicio = novo;
}

void insereFim(int numero) {
    Elemento *novo, *aux=inicio;
    novo = (Elemento*) malloc(sizeof(Elemento));
    novo->info = numero;
    novo->prox = NULL;
    while (aux->prox != NULL) {
        aux = aux->prox;
    }
    aux->prox = novo;
}

void insereMeio(int numero) {
    Elemento *novo, *aux=inicio, *ant=inicio;
    novo = (Elemento*) malloc(sizeof(Elemento));
    novo->info = numero;
    novo->prox = NULL;
    while (aux != NULL && aux->info < novo->info ){
        ant = aux;
        aux = aux->prox;
    }
    ant->prox = novo;
    novo->prox = aux;
}

void insereOrdenado(int numero) {
    Elemento *novo, *aux = inicio, *ant = inicio;
    novo = (Elemento*)malloc(sizeof(Elemento));
    novo->info = numero;
    novo->prox = NULL;
    if(inicio == NULL) { //primeiro e único
        inicio = novo;
    } else if(novo->info <= inicio->info) { //insere na frente do primeiro
        novo->prox = inicio;
        inicio = novo;
    } else {
        while (aux != NULL && aux->info < novo->info ){
            ant = aux;
            aux = aux->prox;
        }
        ant->prox = novo;
        novo->prox = aux;
    }
}

void removeMeio(int numero) {
    Elemento *aux=inicio, *ant=inicio;
    while (aux != NULL && aux->info != numero ) {
        ant = aux;
        aux = aux->prox;
    }
    if (aux!=NULL) {
        ant->prox = aux->prox;
        free(aux);
    }
}

void removeUltimo() {
    Elemento *aux=inicio, *ant=inicio;
    while (aux->prox != NULL){
        ant = aux;
        aux = aux->prox;
    }
    ant->prox = NULL;
    free(aux);
}

void removePrimeiro() {
    Elemento *aux=inicio;
    inicio = inicio->prox;
    free(aux);
}

void removePrimeiroEUnico() {
    free(inicio);
    inicio = NULL;
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

    inserePrimeiro(2);
    inserePrimeiro(1);
    inserePrimeiro(4);
    inserePrimeiro(3);
    escreve();

    //removeMeio(3);
    //escreve();
//
    //removeUltimo();
    //escreve();
//
    //removePrimeiro();
    //escreve();
//
    //removePrimeiroEUnico();
    //escreve();

    return 0;
}
