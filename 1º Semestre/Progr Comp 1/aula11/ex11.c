// Desenvolva um programa em C que solicite ao usuário informar 10 valores inteiros e armazene estes valores em um vetor. 
// O programa em C deverá calcular a média dos valores informados e mostrar na tela todos os valores que estão acima da média calculada.
// Exemplo: se o usuário informar os valores:
// V[0]= 2  V[1]= 76  V[2]= 87  V[3]= 10  V[4]= 43  V[5]= 54  V[6]= 23  V[7]= 88  V[8]= 121  V[9]= 231
// O programa em C deverá calcular a média 73,5 e mostrar os números 76, 87, 88, 121 e 231.
 
#include <stdio.h>

int main() {
    int x,vet[10];
    float soma=0, media=0;

    for (x=0;x<10;x++) {
        printf("Digite o valor %d: ",x);
        scanf("%d",&vet[x]);
    }

    for (x=0;x<10;x++) {
        soma+=(float)vet[x];
    }
    media = soma/10;
    printf("\nA media dos numeros eh %f",media);

    printf("\nOs valores digitados maiores que a media foram:\n");
    for (x=0;x<10;x++) {
        if(vet[x]>media) {
            printf("%d ",vet[x]);
        }
    }
    return 0;
}