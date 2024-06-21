// Escreva um programa em C que lê um vetor V(20) e o escreve. Compacte, a seguir, o vetor V, retirando dele todos os valores nulos ou negativos e escreva o vetor compactado. 
// Desenvolva um programa em C solicite ao usuário informar 20 números inteiros e os armazene em um vetor. Após, escreva os elementos incluídos no vetor. A seguir, compacte o vetor V, retirando dele todos os valores nulos ou negativos. Para compactar o vetor,  utilize a rotação circular para a esquerda (rotate left) nos elementos do vetor. No final do programa em C, o  vetor alterado deve ser mostrado na tela. 
// Exemplo: se o usuário informar os seguintes valores para o vetor
// V[0]= 2 V[1]= 76 V[2]= -5 V[3]= 10 V[4]= 43 V[5]= -6 V[6]= 23 V[7]= 88 V[8]= 0 V[9]= 231 V[10]=9 V[11]=88 V[12]= 49 V[13]= 0 V[14]=22 V[15]=8 V[16]=1 V[17]=-9 V[18]=78 V[19]=12
// O programa em C deverá mostrar na tela os valores digitados:
// 2  76  -5  10  43  -6  23  88  0  231 9  88  49  0  22  8  1  -9  78  12
// Compactar o vetor eliminando todos os valores nulos ou negativos:  
// V[0]= 2  V[1]= 76  V[2]= 10  V[3]= 43  V[4]= 23  V[5]= 88  V[6]= 231  V[7]= 9  V[8]= 88  V[9]= 49  V[10]=22  V[11]=8  V[12]= 1  V[13]= 78  V[14]= 12
// O programa em C deverá mostrar o vetor alterado: 
// 2  76  10  43  54  23  88  231  9  88  49   22  8  1  78  12

#include <stdio.h>

int main() {
    int x, y, aux, vet[5], ultimo=5;

    for(x=0; x<5; x++) {
        printf("Digite vet[%d]: ",x); scanf("%d",&vet[x]);
    }

    printf("Vetor completo: ");

    for(x=0; x<5; x++) {
        printf("%d ",vet[x]);
    }

    printf("\n");

    x=0;
    while(x<4) {
        if(vet[x]<=0) {
            for(y=x; y<ultimo; y++) {
                vet[y] = vet[y+1];
            } 
            ultimo--;
            x--;
        }
        x++;
    }

    printf("Vetor compactado: ");

    for(x=0; x<ultimo; x++) {
        printf("%d ",vet[x]);
    }

    return 0;
}