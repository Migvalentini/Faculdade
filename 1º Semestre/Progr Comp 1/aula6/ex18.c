// Desenvolva um programa em C que solicite ao usuário informar 10 valores inteiros. 
// O programa em C deverá mostrar na tela o menor e o maior número digitado pelo usuário.
// Exemplo: se o usuário informasse os valores 2, 88, 33, 13, 15, 44, 56, 21, -10 e -11, o programa em C deverá mostrar na tela as mensagens:
// Menor valor informado: -11
// Maior valor informado: 88

#include <stdio.h>

int main() {
    int n,x,maior,menor;

    for (x=1;x<=10;x++) {
        printf("Digite o numero %d: ",x);
        scanf("%d",&n);

        if (x==1) {
            maior=n;
            menor=n;
        } else {
            if (n>maior) {
                maior=n;
            }
            if (n<menor) {
                menor=n;
            }
        }
    }

    printf("Maior: %d\nMenor: %d",maior,menor);

    return 0;
}