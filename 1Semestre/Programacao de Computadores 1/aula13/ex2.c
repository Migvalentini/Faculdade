// Desenvolva um programa em C que solicite ao usuário informar 10 valores inteiros e armazene estes valores em um vetor. 
// O programa em C deverá trocar o 1° elemento do vetor com o último, o 2° elemento do vetor com o penúltimo, …, até o 5° com o 6°. 
// O programa em C deverá mostrar os elementos do vetor na tela, antes e depois da troca dos elementos.  
// Exemplo: se o usuário informar os valores:
// V[0]= 2  V[1]= 76  V[2]= 87  V[3]= 10  V[4]= 43  V[5]= 54  V[6]= 23  V[7]= 88  V[8]= 121  V[9]= 231
// O programa em C deverá: 
// mostrar na tela os elementos do vetor: 2   76  87  10  43  54  23  88  121  231
// trocar os elementos de posição:
// V[0]= 231  V[1]= 121  V[2]= 88  V[3]= 23  V[4]= 54  V[5]= 43  V[6]= 10  V[7]= 87  V[8]= 76  V[9]= 2
// mostrar na tela os elementos do vetor depois da troca: 231  121  88  23  54  43  10  87  76  2

#include <stdio.h>

int main() {
    int x, vet[10], aux;

    for(x=0; x<10; x++) {
        printf("Digite vet[%d]: ",x); scanf("%d",&vet[x]);
    }

    for(x=0; x<10; x++) {
        printf("%d ",vet[x]);
    }

    printf("\n");

    for(x=0; x<5; x++) {
        aux = vet[x];
        vet[x] = vet[9-x];
        vet[9-x] = aux;
    }

    for(x=0; x<10; x++) {
        printf("%d ",vet[x]);
    }

    return 0;
}
