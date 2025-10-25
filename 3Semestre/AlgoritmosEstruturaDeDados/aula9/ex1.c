//Os métodos de ordenação simples, como bubblesort, inserção direta e seleção direta, são adequados para quantidade não muito grande de elementos. 
//São métodos cujo funcionamento é fácil de lembrar, e sua implementação pode ser desenvolvida rapidamente.

//As implementações desses métodos são geralmente realizadas considerando dados armazenados em vetores (arrays), pela sua rapidez de execução. 
//Mas, como são métodos que trabalham com base na comparação/troca de elementos adjacentes (um ao lado do outro), é possível implementá-los utilizando listas encadeadas.

//1) Implemente um dos métodos de ordenação simples (a sua escolha) utilizando listas encadeadas (simples ou dupla, o que for mais adequado ou necessário).

#include <stdio.h>
#include <stdlib.h>

struct elemento {
    int info;
    struct elemento *prox;
}; typedef struct elemento Elemento;

Elemento *inicio;

void bubblesort() {
    Elemento *aux = inicio, *au2 = inicio, *troca;
    int flag = 0;
    
    while (aux->prox != NULL) {
        while (aux2->prox != NULL) {
            
        }   
    }
}

void insere(int numero) {
    Elemento *novo;
    novo = (Elemento*)malloc(sizeof(Elemento));
    novo->info = numero;
    if(inicio == NULL) { //primeiro e único
        novo->prox = NULL;
    } else { // insere
        novo->prox = inicio;
    }
    inicio = novo;
}

void escreve() {
    Elemento *aux = inicio;
    
    printf("\nLista:\n");
    while(aux != NULL) {
        printf("%d\n",aux->info);
        aux = aux->prox;
    }
}

int main() {
    inicio = NULL;

    insere(0);
    insere(1);
    insere(2);
    insere(3);
    insere(4);
    insere(5);
    insere(6);
    insere(7);
    insere(8);
    insere(9);
    insere(10);
    insere(11);
    insere(12);
    insere(13);
    insere(14);
    insere(15);
    insere(16);
    insere(17);
    insere(18);
    insere(19);
    insere(20);
    escreve();

    return 0;
}
