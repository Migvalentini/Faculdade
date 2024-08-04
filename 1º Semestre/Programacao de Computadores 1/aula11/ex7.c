// Desenvolva um programa em C que solicite ao usuário informar 10 valores inteiros e armazene estes valores em um vetor. 
// O programa em C deverá contar a quantidade de valores negativos. 
// Após o programa em C deverá mostrar na tela o vetor digitado e a quantidade de valores negativos. 
// Exemplo: se o usuário informar os valores:
// V[0]= 2  V[1]= 5  V[2]= -87  V[3]= 10  V[4]= 43  V[5]= -54  V[6]= 23  V[7]= -88  V[8]= 121  V[9]= 231
// O programa em C deverá mostrar na tela:
// Vetor digitado:
// 2 5 -87 10 43 -54 23 -88 121 231
// Foram informados 3 números negativos. 

#include <stdio.h>

int main() {
    int x,cont=0,vet[10];

    for (x=0;x<10;x++) {
        printf("Digite o valor %d: ",x);
        scanf("%d",&vet[x]);
    }

    printf("\nOs valores digitados foram:\n");
    for (x=0;x<10;x++) {
        printf("%d ",vet[x]);
        if(vet[x]<0) {
            cont++;
        }
    }

    printf("\nForam informados %d numeros negativos",cont);

    return 0;
}