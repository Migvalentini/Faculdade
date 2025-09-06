//Implemente uma função que insere um nodo (nrs inteiros) em uma lista duplamente encadeada:
//se o número for par, insere no início
//se o número for impar, insere no fim
//se o número for negativo, insere depois dos pares (antes do primeiro impar)

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

void insere(int numero) {
    Elemento *novo, *aux=inicio;

    novo = (Elemento*) malloc(sizeof(Elemento));
    novo->info = numero;
    
    if (inicio == NULL) { //Não tem nenhum elemento
        novo->ant = NULL;
        novo->prox = NULL;
        inicio = novo;
    }
    else if (inicio->ant == NULL) { //Tem só 1 elemento
        novo->ant = NULL;
        novo->prox = inicio;
        inicio->ant = novo;
        inicio = novo;
    } else { //Tem 2 ou mais
        if(numero > 0 && numero % 2 == 0) {
            novo->ant = NULL;
            novo->prox = inicio;
            inicio = novo;
        } else if (numero > 0 && numero % 2 == 1) {
            novo->prox = NULL;
            while (aux->prox != NULL) {
                aux = aux->prox;
            }
            aux->prox = novo;
            novo->ant = aux;
        } else {
            while (aux->prox != NULL && aux->prox->info % 2 == 0) {
                aux = aux->prox;
            }
            aux->prox->ant = novo;
            novo->ant = aux;
            novo->prox = aux->prox;
            aux->prox = novo;
        }
    }
}

int main() {
    inicio = NULL;

    insere(22);
    insere(12);
    insere(3);
    insere(-4);
    insere(-5);
    insere(5);
    insere(8);
    
    escreve();

    return 0;
}
