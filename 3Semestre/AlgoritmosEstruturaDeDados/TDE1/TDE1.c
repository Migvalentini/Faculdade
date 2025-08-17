/*
Você vai receber cartas de um baralho, e deve pegar uma a uma e ir colocando lado a lado (ou na sua mão), em ordem de valores numéricos, do menor para o maior (a carta "ás" (A ou 1) é o menor valor. 
Os naipes podem ou não ser considerados.
 
TAD jogo{
Dados: cartas
Operações:
    recebe_carta(E: carta);
    ver_lista_cartas(S: lista de cartas);
    remover_carta(E: carta; S: lista de cartas);
}
Tarefa:

Considere a implementação das cartas recebidas em um jogo como um vetor (máximo de 20 posições). Fazer um menu de operações, para o usuário selecionar:

- implementar a operação de recebe_carta(...), na qual é realizada a inserção de um valor de forma ordenada no vetor 
(não utilize um método de ordenação, cada inserção deve ser feita na sua posição considerando a ordem). 
A ordenação deve ser em ordem crescente de valores, ou seja, a cada inserção de uma nova carta, ela deve ser colocada na sua posição correta na lista. 
Pode haver valores repetidos na lista, cada baralho tem 4 cartas de mesmo valor (cada valor pode ser repetido no máximo 4 vezes. O valor das cartas deve estar entre 1 e 13.

Deve ser controlado o número de cartas inserido, para não ultrapassar 20 (se ultrapassar, mostrar mensagem de erro). 

- implementar a operação ver_lista_cartas(...), que exiba a lista de cartas armazenada.
- implementar a operação remover_carta(...), que remove a carta do valor informado. 
 
Considere usar recursividade na implementação (ao menos em ver_lista_cartas().
*/

#include <stdio.h>

typedef struct carta {
    int num;
    char naipe;
} Carta;

void recebe_carta(Carta jogo[], Carta carta, int *tam) {
    Carta aux;

    if((*tam)<20) {
        if(carta.num <=13 && carta.num >= 1 && (carta.naipe == 'P' || carta.naipe == 'E' || carta.naipe == 'O' || carta.naipe == 'C')) {
            jogo[*tam] = carta;
            int x = (*tam);
            while(x>0 && jogo[x].num<jogo[x-1].num) {
                aux=jogo[x];
                jogo[x]=jogo[x-1];
                jogo[x-1]=aux;
                x--;
            }
            (*tam)++;
    
        }
        else {
            printf("\nErro: Carta Invalida!");
        }
    }
    else {
        printf("\nErro: Limite Atingido!");
    }
}

void ver_lista_cartas(Carta jogo[], int t, int i) {
    if(t==i) {
        return;
    } 

    printf("\nNum: %d Naipe: %c", jogo[i].num, jogo[i].naipe);
    ver_lista_cartas(jogo, t, i+1);
}

void remover_carta(Carta jogo[], Carta carta, int *tam) {
    int i;

    for(i=0; i<(*tam); i++) {
        if(jogo[i].num == carta.num && jogo[i].naipe == carta.naipe) {
            for(i=i; i<(*tam)-1; i++) {
                jogo[i]=jogo[i+1];
            }
            (*tam)--;
            return;
        }
    }
    printf("\n\nCarta nao encontrada");
}

int main() {
    int tam = 0;
    Carta jogo[20];

    Carta c1 = {13, 'E'};
    Carta c2 = {10, 'P'};
    Carta c3 = {9, 'C'};
    Carta c4 = {4, 'O'};
    Carta c5 = {2, 'C'};
    Carta c6 = {1, 'E'};
    recebe_carta(jogo, c1, &tam);
    recebe_carta(jogo, c2, &tam);
    recebe_carta(jogo, c3, &tam);
    recebe_carta(jogo, c4, &tam);
    recebe_carta(jogo, c5, &tam);
    recebe_carta(jogo, c6, &tam);

    printf("Cartas:\n");
    ver_lista_cartas(jogo, tam, 0);

    remover_carta(jogo, c1, &tam);

    printf("\n\nCartas:\n");
    ver_lista_cartas(jogo, tam, 0);

    return 0;
}
