// Desenvolva um programa que solicite ao usuário informar 10 valores inteiros e armazene estes valores em um vetor. 
// Após ler e armazenar os dados no vetor, o programa deverá ler também mais dez (10) valores inteiros e verificar se cada um dos valores informados individualmente estão contidos no vetor. 
// O programa deverá mostrar na tela, para cada um dos 10 valores informados, uma mensagem informando se o valor N é ou não um elemento do vetor.
// Exemplo: Supondo que o usuário informe os seguintes valores para o vetor:
// V[0]= 2  V[1]= 76  V[2]= 87  V[3]= 10  V[4]= 43  V[5]= 54  V[6]= 23  V[7]= 88  V[8]= 121  V[9]= 231
// Após ele terá que Se o usuário digitar o valor 23, o programa deverá mostrar na tela uma mensagem indicando que este valor está contido no vetor. 
// Se o usuário digitar o valor 50, o programa deverá mostrar na tela uma mensagem indicando que este valor não está contido no vetor.

#include <stdio.h>

int main() {
    int x,y,n,vet[10],cont;

    for (x=0;x<10;x++) {
        printf("Digite o valor %d: ",x);
        scanf("%d",&vet[x]);
    }

    for (x=0;x<10;x++) {
        printf("Digite o novo valor %d: ",x);
        scanf("%d",&n);

        cont=0;

        for(y=0;y<10;y++) {
            if(vet[y]==n) {
                cont++;
            } 
        }
        
        if(cont>0) {
            printf("O valor %d foi encontrado\n",n);
        } else{
            printf("O valor %d nao foi encontrado\n",n);
        }
    }

    return 0;
}