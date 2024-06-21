// Desenvolva um programa em C que solicite ao usuário informar 20 valores inteiros e armazene estes valores em um vetor. 
// O programa em C deverá trocar cada elemento que estiver em posição ímpar pelo elemento da posição par imediatamente a seguir.  
// O programa em C deverá mostrar os elementos do vetor na tela, antes e depois da troca dos elementos.  
// Exemplo para um vetor de 10 elementos: se o usuário informar os valores:
// V[0] = 2  V[1] = 76  V[2] = 87  V[3] = 10  V[4] = 43  V[5] = 54  V[6] = 23  V[7] = 88  V[8] = 121  V[9] = 231
// O programa em C deverá:
// mostrar na tela os elementos do vetor: 2   76  87  10  43  54  23  88  121  231
// trocar os elementos de posição:
// V[0] = 76  V[1] = 2  V[2] = 10  V[3] = 87  V[4] = 54  V[5] = 43  V[6] = 88  V[7] = 23  V[8] = 231  V[9] = 121
// mostrar na tela os elementos do vetor depois da troca: 76  2  10  87  54  43   88  23  231  121 

#include <stdio.h>

int main() {
    int x, vet[20], aux;

    for(x=0; x<20; x++) {
        printf("Digite vet[%d]: ",x); scanf("%d",&vet[x]);
    }

    for(x=0; x<20; x++) {
        printf("%d ",vet[x]);
    }

    printf("\n");

    for(x=0; x<20; x++) {
        if(x%2==1) {
            aux = vet[x];
            vet[x] = vet[x-1];
            vet[x-1] = aux;
        }
    }

    for(x=0; x<20; x++) {
        printf("%d ",vet[x]);
    }

    return 0;
}
