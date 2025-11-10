//Implementar uma árvore binária  que armazena números inteiros. Fazer a operação de inserção e também:
//6) Considere uma ABP (árvore binária de pesquisa) que armazena números inteiros. Implementar uma operação que escreva os números ímpares em ordem decrescente.

#include <stdio.h>
#include <stdlib.h>

typedef struct noA {
    int info;
    struct noA *esq;
    struct noA *dir;
} TNoA;

void posOrdem(TNoA* a) {
  if (a != NULL){
      posOrdem(a->esq);
      posOrdem(a->dir);
      printf("%d ",a->info);
  }
}

void central(TNoA* a) {
  if (a != NULL) {
      central(a->esq);
      printf("%d ",a->info);
      central(a->dir);
  }
}

void preordem(TNoA* a) {
  if (a != NULL) {
      printf("%d ",a->info);
      preordem(a->esq);
      preordem(a->dir);
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

  printf("\nCentral: \n");
  central(raiz);

  printf("\nPos Ordem: \n");
  posOrdem(raiz);
};