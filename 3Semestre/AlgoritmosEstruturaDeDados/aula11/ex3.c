//Implementar uma árvore binária  que armazena números inteiros. Fazer a operação de inserção e também:
//3) Implementar uma operação que escreva os nodos que tem dois filhos, em uma árvore binária.

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

void escrevePais(TNoA* a) {
    if (a != NULL) {
        if (a->esq != NULL && a->dir != NULL) {
            printf("%d ",a->info);
        }
        escrevePais(a->esq);
        escrevePais(a->dir);
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

    printf("\nNodos que tem dois filhos: \n");
    escrevePais(raiz);
};