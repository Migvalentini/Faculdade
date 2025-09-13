#include <stdio.h>
#include <stdlib.h>

struct elemento {
    int info;
    struct elemento *prox;
}; typedef struct elemento Elemento;

Elemento *pilha;
Elemento *fila;

void escrevePilha() {
    Elemento *aux = pilha;
    
    printf("\nPilha:\n");
    while(aux != NULL) {
        printf("%d ",aux->info);
        aux = aux->prox;
    }
}

void escreveFila() {
    Elemento *aux = fila;
    
    printf("\nFila:\n");
    while(aux != NULL) {
        printf("%d ",aux->info);
        aux = aux->prox;
    }
}

void empilhar(int numero) {
    Elemento *novo;
    novo = (Elemento*)malloc(sizeof(Elemento));
    novo->info = numero;
    if(pilha == NULL) { //primeiro e único
        novo->prox = NULL;
    } else { // insere
        novo->prox = pilha;
    }
    pilha = novo;
}

void desempilhar() {
    Elemento *aux=pilha;
    pilha = pilha->prox;
    free(aux);
}

void enfileirar(int numero) {
    Elemento *novo;
    novo = (Elemento*)malloc(sizeof(Elemento));
    novo->info = numero;
    if(fila == NULL) { //primeiro e único
        novo->prox = NULL;
    } else { // insere
        novo->prox = fila;
    }
    fila = novo;
}

void desenfileirar() {
    Elemento *aux=fila, *ant=fila;
    while (aux->prox != NULL){
        ant = aux;
        aux = aux->prox;
    }
    ant->prox = NULL;
    free(aux);
}

int main() {
    pilha = NULL;
    fila = NULL;

    empilhar(1);
    empilhar(2);
    empilhar(3);
    empilhar(4);
    escrevePilha();

    desempilhar();
    escrevePilha();

    desempilhar();
    desempilhar();
    escrevePilha();

    printf("\n------------\n");

    enfileirar(1);
    enfileirar(2);
    enfileirar(3);
    enfileirar(4);
    escreveFila();

    desenfileirar();
    escreveFila();

    desenfileirar();
    desenfileirar();
    escreveFila();

    return 0;
}
