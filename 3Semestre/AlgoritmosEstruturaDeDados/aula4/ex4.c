//4) Considere uma lista encadeada simples ordenada que pode conter valores repetidos. 
//Implementar uma operação que elimine as repetições, mantendo apenas uma cópia de cada valor repetido.

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

void escreve() {
    Elemento *aux = inicio;
    
    printf("\nLista:\n");
    while(aux != NULL) {
        printf("%d\n",aux->info);
        aux = aux->prox;
    }
}

void eliminarRepeticoes() {
    Elemento *ant = inicio, *aux = inicio;
    
    if(inicio == NULL) {
        return;
    }

    while (aux != NULL && aux->prox != NULL) {
        
    }
}

int main() {
    inicio = NULL;

    insereOrdenado(1);
    insereOrdenado(1);
    insereOrdenado(2);
    insereOrdenado(2);
    insereOrdenado(3);
    insereOrdenado(5);

    escreve();

    eliminarRepeticoes();
    escreve();

    return 0;
}
