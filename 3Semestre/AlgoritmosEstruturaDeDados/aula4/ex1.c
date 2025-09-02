//1) Implementar a operação de inversão de uma lista encadeada simples (inverter sem criar uma segunda lista).

#include <stdio.h>
#include <stdlib.h>

struct elemento {
    int info;
    struct elemento *prox;
}; typedef struct elemento Elemento;

Elemento *inicio;

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

void inverteLista() {
    Elemento *ini2, *aux;

    ini2 = inicio;
    inicio = inicio->prox;
    ini2->prox = NULL;
    aux = inicio;
    while(aux != NULL) {
        inicio = inicio->prox;
        aux->prox = ini2;
        ini2 = aux;
        aux = inicio;
    }
    inicio = ini2;
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

    insereOrdenado(1);
    insereOrdenado(2);
    insereOrdenado(3);
    insereOrdenado(4);
    insereOrdenado(5);
    escreve();

    inverteLista();
    escreve();

    return 0;
}
