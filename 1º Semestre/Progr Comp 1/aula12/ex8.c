// Desenvolva um programa em C solicite ao usuário informar uma quantidade indeterminada de números inteiros até que sejam informados 20 números ímpares. 
// Os números ímpares devem ser armazenados em um vetor de 20 posições. 
// O usuário poderá também digitar números pares, porém só devem ser considerados os números ímpares no preenchimento do vetor. 
// Após, o programa em C deverá mostrar na tela os números armazenados no vetor.

#include <stdio.h>

int main() {
    int vet[5],aux[5],vezes=1,pos=0,x,y,flag,cont=0;

    while(cont<5) {
        printf("Digite o valor %d: ",cont);
        scanf("%d",&vet[cont]);
        if(vet[cont]%2==1) {
            cont++;
        }
    }

    for(x=0; x<5; x++) {
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
            for(y=x+1; y<5; y++) {
                if (vet[x]==vet[y]) {
                    vezes++;
                }
            }
            printf("O numero %d aparece %d vezes no vetor.\n",vet[x],vezes);
        }
    }

    return 0;
}
