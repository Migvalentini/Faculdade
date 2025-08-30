//2) Implementar as operações de inserção e remoção de elementos (números inteiros) em uma lista circular, implementada por encadeamento simples.

#include <stdio.h>
#include <stdlib.h>

struct elemento {
    int info;
    struct elemento *prox;
}; typedef struct elemento Elemento;

Elemento *inicio;

void insereCircular(int numero) {
    Elemento *novo;
    novo = (Elemento*)malloc(sizeof(Elemento));
    novo->info = numero;

    if(inicio==NULL) {
        novo->prox = novo;
        inicio = novo;
    }
    else if (inicio->prox == inicio) {
        inicio->prox = novo;
        novo->prox = inicio;
    }
    else {
        novo->prox = inicio->prox;
        inicio->prox = novo;
    }
}

void removeCircular(int numero) {
    Elemento *aux = inicio, *ant=inicio;

    if(inicio == NULL) {
        return;
    } 
    else if(inicio->prox == inicio && inicio->info == numero) {
        free(inicio);
    }
    else if (inicio->prox != inicio) {
        do{
            if(aux->info == numero) {
                ant = aux;
                aux = aux->prox;
                ant->prox = aux->prox;
                free(aux);
                break;
            }
            aux = aux->prox;
        } while(aux != inicio);
    }
}

void escreve() {
    Elemento *aux = inicio;
    
    printf("\nLista:\n");
    if(aux!=NULL) {
        do{
            printf("N: %d\n",aux->info);
            aux = aux->prox;
        } while(aux != inicio);
    }
}

int main() {
    inicio = NULL;

    insereCircular(2);
    insereCircular(3);
    insereCircular(3);
    //insereCircular(4);
    //insereCircular(5);
    escreve();
    printf("\n\n");
    removeCircular(2);
    escreve();

    return 0;
}
