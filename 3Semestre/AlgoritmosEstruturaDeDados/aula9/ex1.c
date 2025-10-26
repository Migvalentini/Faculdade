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
    Elemento *aux = inicio, *aux2 = inicio;
    int troca = 0;

    while (aux != NULL) {
        while (aux2 != NULL) {
            if(aux->info > aux2->info) {
                troca = aux->info;
                aux->info = aux2->info;
                aux2->info = troca;
            }

            aux2 = aux2->prox;
        }   
        aux = aux->prox;
        aux2 = aux;
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
        printf("%d ",aux->info);
        aux = aux->prox;
    }
}

int main() {
    inicio = NULL;
    int i = 0;

    for(i=0; i<=10000; i++) {
        insere(i);
    }

    escreve();

    bubblesort();

    escreve();

    return 0;
}
