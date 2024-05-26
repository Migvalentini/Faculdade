// Desenvolva um programa em C que solicite ao usuário informar 10 valores inteiros e armazene estes valores em um vetor.  
// O programa em C deverá mostrar na tela a posição de cada elemento primo desse vetor.
// Exemplo: se o usuário informar os valores:
// V[0]= 2
// V[1]= 76
// V[2]= 87
// V[3]= 10
// V[4]= 43
// V[5]= 54
// V[6]= 23
// V[7]= 88
// V[8]= 121
// V[9]= 231
// O programa em C deverá mostrar na tela:
// Posições do vetor que possuem números primos:
// 0 4 6

#include <stdio.h>

int main() {
    int x,y,div,vet[10];

    for (x=0;x<10;x++) {
        printf("Digite o valor %d: ",x);
        scanf("%d",&vet[x]);
    }

    printf("Posicoes do vetor que possuem numeros primos:\n");
    for (x=0;x<10;x++) {
        div=0;
        for (y=1;y<vet[x]+1;y++) {
            if(vet[x]%y==0) {
                div++;
            }
        }
        if(div==2) {
            printf("%d ",x);
        }
    }

    return 0;
}