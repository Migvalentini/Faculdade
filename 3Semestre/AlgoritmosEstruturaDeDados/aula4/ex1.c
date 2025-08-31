//2) Implementar as operações de inserção e remoção de elementos (números inteiros) em uma lista circular, implementada por encadeamento simples.
//A lista representa uma rota de entregas, e o conteúdo de cada nodo é o código daquele ponto na rota. 
//Pode-se inserir novos pontos na rota, ou remover pontos existentes. 
//Faça também uma função para escrever os pontos da rota, a partir de um ponto informado.

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
    if(inicio == NULL) {
        return;
    } 
    
    if(inicio->prox == inicio && inicio->info == numero) {
        printf("ENTROU!");
        free(inicio);
        inicio = NULL;
        return;
    }
    Elemento *aux = inicio, *ant=inicio;
    if (inicio->prox->prox == inicio) {
        if(inicio->info == numero) {
            inicio = inicio->prox;
            inicio->prox = inicio;
        }
        else if(inicio->prox->info == numero) {
            inicio->prox = inicio;
        }
    }
    else if (inicio->prox != inicio) {
        if(inicio->info == numero) {
            Elemento *ultimo = inicio;
            while(ultimo->prox != inicio) {
                ultimo = ultimo->prox;
            }
            inicio = inicio->prox;
            ultimo->prox = inicio;
        }
        while (aux->prox != inicio && aux->info != numero ) {
            ant = aux;
            aux = aux->prox;
        }
        if (aux->info == numero) {
            ant->prox = aux->prox;
            free(aux);
        }
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

    insereCircular(1);
    insereCircular(2);
    insereCircular(3);
    //insereCircular(4);
    //insereCircular(5);
    escreve();
    removeCircular(5);
    escreve();

    return 0;
}
