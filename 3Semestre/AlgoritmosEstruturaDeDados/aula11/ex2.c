//Implementar uma árvore binária  que armazena números inteiros. Fazer a operação de inserção e também:
//2) Implementar uma operação que escreva a soma dos números que estão nos nodos-folha da árvore binária.

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

void somaFolhas(TNoA* a, int *soma) {
  if (a != NULL) {
        somaFolhas(a->esq, soma);
        somaFolhas(a->dir, soma);
        if (a->esq == NULL && a->dir == NULL) {
            (*soma) = *soma + a->info; 
        }
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
    somaFolhas(raiz, &soma);

    printf("\nA soma das folhas eh: %d", soma);
};