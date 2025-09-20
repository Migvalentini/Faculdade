#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pilha {
    int valor;
    struct pilha *prox;
}; typedef struct pilha Pilha;

struct lista {
    int np;
    Pilha *topo;
    struct lista *prox;
}; typedef struct lista Lista;

Lista *inicio;

void insereLista(int numero) {
    Lista *novo, *aux=inicio;

    novo = (Lista*) malloc(sizeof(Lista));
    novo->topo = NULL;
    novo->np = numero;
    novo->prox = NULL;

    if (inicio == NULL) {
        inicio = novo;
    } else {
        while (aux->prox != NULL) {
            aux = aux->prox;
        }
        aux->prox = novo;
    }
}

void empilha(int numerolista, int numero) {
    Lista *aux = inicio;

    while(aux != NULL) {
        if(numerolista==aux->np) {
            Pilha *novo;
            novo = (Pilha*)malloc(sizeof(Pilha));
            novo->valor = numero;
            if(aux->topo == NULL) {
                novo->prox = NULL;
            } else { 
                novo->prox = aux->topo;
            }
            aux->topo = novo;
        }
        
        aux = aux->prox;
    }
}

void escreveListaPilhas() {
    Lista *auxL = inicio;
    Pilha *auxP;

    while(auxL != NULL) {
        printf("\n%d: ", auxL->np);
        auxP = auxL->topo;
        while(auxP != NULL) {
            printf("%d ", auxP->valor);
            auxP = auxP->prox;
        }

        auxL = auxL->prox;
    }
}

int main() {
    inicio = NULL;

    insereLista(1);
    insereLista(2);
    insereLista(3);

    empilha(1, 10);
    empilha(1, 20);
    empilha(1, 30);
    empilha(1, 40);
    empilha(2, 10);
    empilha(3, 10);
    empilha(3, 20);
    empilha(3, 30);

    escreveListaPilhas();

    return 0;
}
