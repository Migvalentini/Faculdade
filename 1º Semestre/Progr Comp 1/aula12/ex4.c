// Desenvolva um programa em C que solicite ao usuário informar 30 valores inteiros, que pertençam ao intervalo entre 1 a 10 (inclusive), e armazene estes valores em um vetor. 
// Se o usuário informar um número que não pertença a este intervalo, o programa em C deverá ficar solicitando novos valores até que o usuário digite um valor no intervalo solicitado. 
// Após ler e armazenar os 30 números com valores entre 1 e 10 dados no vetor, o programa em C deverá verificar quantos elementos do vetor estão repetidos e quantas vezes cada um se repete. 
// Após o programa em C deverá mostrar na tela um relatório com estes dados. É importante ressaltar que os números só podem aparecer uma vez, não podendo aparecer números duplicados. 

#include <stdio.h>

int main() {
    int vet[30],aux[30],vezes=1,pos=0,x,y,flag,cont=0;

    while(cont<30) {
        printf("Digite o valor %d: ",cont);
        scanf("%d",&vet[cont]);
        if(vet[cont]>=1&&vet[cont]<=10) {
            cont++;
        }
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
            printf("O numero %d aparece %d vezes no vetor.\n",vet[x],vezes);
        }
    }

    return 0;
}
