//Implementar uma árvore binária  que armazena números inteiros. Fazer a operação de inserção e também:
//5) Implementar uma operação que receba um valor, e se ele estiver na árvore binária escreva o valor do seu pai.

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

void escrevePai(TNoA* a, int valor, int pai) {
  if (a != NULL) {
    if(a->info == valor) {
      printf("%d ", pai);
    }
    escrevePai(a->esq, valor, a->info);
    escrevePai(a->dir, valor, a->info);
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
  
  printf("\nPai: \n");
  escrevePai(raiz, 4, 0);
};