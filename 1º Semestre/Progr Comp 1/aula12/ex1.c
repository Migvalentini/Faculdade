// Desenvolva um programa em C que solicite ao usuário informar 20 valores inteiros e armazene estes valores em um vetor. 
// Após ler e armazenar os dados no vetor, o programa em C deverá verificar quantos elementos do vetor estão repetidos e quantas vezes cada um se repete. 
// Após o programa em C deverá mostrar na tela um relatório com estes dados. 
// É importante ressaltar que os números só podem aparecer uma vez, não podendo aparecer números duplicados.
// Exemplo para um vetor de 10 posições:
// V[0]= 5  V[1]= 4  V[2]= 3  V[3]= 18  V[4]= 5  V[5]= 3  V[6]= 4  V[7]= 18  V[8]= 4  V[9]= 18
// Caso sejam digitados os valores acima, o programa em C deverá mostrar no final as seguintes informações:
//     • O número 5 aparece 2 vezes
//     • O número 4 aparece 3 vezes
//     • O número 3 aparece 2 vezes
//     • O número 18 aparece 3 vezes

#include <stdio.h>

int main() {
    int vet[20],aux[20],vezes=1,pos=0,x,y,flag;

    for(x=0; x<20; x++) {
        printf("Digite o valor %d: ",x);
        scanf("%d",&vet[x]);
    }

    for(x=0; x<20; x++) {
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
            for(y=x+1; y<20; y++) {
                if (vet[x]==vet[y]) {
                    vezes++;
                }
            }
            printf("O numero %d aparece %d vezes no vetor.\n",vet[x],vezes);
        }
    }

    return 0;
}