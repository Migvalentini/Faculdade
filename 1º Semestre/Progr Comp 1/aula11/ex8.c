// Desenvolva um programa em C que solicite ao usuário informar 10 valores inteiros e armazene estes valores em um vetor. 
// O programa em C deverá contar a quantidade de números primos informados. 
// Após o programa em C deverá mostrar na tela os números primos informados e a quantidade de números primos. 
// Exemplo: se o usuário informar os valores:
// V[0]= 2  V[1]= 76  V[2]= 87  V[3]= 10  V[4]= 43  V[5]= 54  V[6]= 23  V[7]= 88  V[8]= 121  V[9]= 231
// O programa em C deverá mostrar na tela:
// Números primos:
// 2 43 23
// Foram informados 3 números primos.

#include <stdio.h>

int main() {
    int x,y,div,vet[10],primos=0;

    for (x=0;x<10;x++) {
        printf("Digite o valor %d: ",x);
        scanf("%d",&vet[x]);
    }

    printf("Os valores primos digitados foram:\n");
    for(x=0;x<10;x++) {
        div=0;
        for(y=1;y<vet[x]+1;y++) {
            if(vet[x]%y==0) {
                div++;
            }
        }
        if(div==2) {
            printf("%d ",vet[x]);
            primos++;
        }
    }

    printf("\nForam informados %d numeros primos",primos);

    return 0;
}   