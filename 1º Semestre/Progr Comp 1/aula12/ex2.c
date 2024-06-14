// Desenvolva um programa em C que solicite ao usuário informar 30 valores inteiros e armazene estes valores em um vetor.
// Após ler e armazenar os dados no vetor, o programa em C deverá encontrar o elemento que aparece mais vezes no vetor, mostrando na tela este elemento e a quantidade de vezes que ele se repete.
// Exemplo para um vetor de 10 posições:
// Caso sejam digitados os valores acima, o programa em C deverá mostrar que o elemento 18 se repetiu 5 vezes no vetor. 
// V[0]= 18  V[1]= 4  V[2]= 3  V[3]= 18  V[4]= 5  V[5]= 3  V[6]= 4  V[7]= 18  V[8]= 4  V[9]= 18

#include <stdio.h>

int main() {
    int vet[30],aux[30],vezes=1,pos=0,x,y,flag,maior=0,maiorVezes=0;

    for(x=0; x<30; x++) {
        printf("Digite o valor %d: ",x);
        scanf("%d",&vet[x]);
    }

    for(x=0; x<30; x++) {
        flag=0;
        for(y=0; y<pos; y++) {
            if(vet[x]==aux[y]) {
                flag=1;
            }
        }
        if(flag==0) {
            aux[pos]=vet[x];
            pos++;
            vezes=1;
            for(y=x+1; y<30; y++) {
                if (vet[x]==vet[y]) {
                    vezes++;
                }
            }
            if(vezes>maior) {
                maior=vezes;
                maiorVezes=vet[x];
            }
        }
    }
    printf("O numero %d apareceu %d vezes no vetor.\n",maiorVezes,maior);

    return 0;
}