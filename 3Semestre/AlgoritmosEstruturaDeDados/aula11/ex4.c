//Implementar uma árvore binária  que armazena números inteiros. Fazer a operação de inserção e também:
//4) Implementar uma operação que escreva quantos níveis tem a árvore binária.

#include <stdio.h>
#include <stdlib.h>

typedef struct noA {
    int info;
    struct noA *esq;
    struct noA *dir;
} TNoA;

void preordem(TNoA* a) {
    if (a != NULL) {
        printf("%d ",a->info);
        preordem(a->esq);
        preordem(a->dir);
    }
}

void somaNiveis(TNoA* a, int *soma) {
    if (a != NULL) {
        somaNiveis(a->esq, soma);
        somaNiveis(a->dir, soma);
        (*soma)++;
    }
}

TNoA *criaNo(int ch) {
    TNoA *novo;

    novo = (TNoA *) malloc(sizeof(TNoA));
    novo->info = ch;
    novo->esq = NULL;
    novo->dir = NULL;

    return novo;
}

int main(void) {
    TNoA *raiz;
    raiz = criaNo(1);
    raiz->esq = criaNo(2);
    raiz->esq->esq = criaNo(3);
    raiz->esq->dir = criaNo(4);

    raiz->dir = criaNo(5);
    raiz->dir->esq = criaNo(6);
    raiz->dir->dir = criaNo(7);

    printf("Pre Ordem: \n");
    preordem(raiz);

    int soma = 0;
    somaNiveis(raiz, &soma);

    printf("\nA arvore tem %d niveis", soma);
};