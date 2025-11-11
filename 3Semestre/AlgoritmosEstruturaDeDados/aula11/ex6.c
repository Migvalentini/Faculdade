//Implementar uma árvore binária  que armazena números inteiros. Fazer a operação de inserção e também:
//6) Considere uma ABP (árvore binária de pesquisa) que armazena números inteiros. Implementar uma operação que escreva os números ímpares em ordem decrescente.

#include <stdio.h>
#include <stdlib.h>

typedef struct noA {
    int info;
    struct noA *esq;
    struct noA *dir;
} TNoA;

void central(TNoA* a) {
  if (a != NULL) {
    central(a->dir);
    if (a->info % 2 == 1) {
      printf("%d ", a->info);
    }
    central(a->esq);
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
  raiz = criaNo(37);
  raiz->esq = criaNo(24);
  raiz->esq->esq = criaNo(7);
  raiz->esq->dir = criaNo(32);

  raiz->dir = criaNo(42);
  raiz->dir->esq = criaNo(40);
  raiz->dir->dir = criaNo(47);
  raiz->dir->dir->dir = criaNo(120);

  printf("\nCentral: \n");
  central(raiz);
};