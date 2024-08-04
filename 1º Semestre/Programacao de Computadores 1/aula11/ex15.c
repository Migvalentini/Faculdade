// Desenvolva um programa que solicite ao usuário informar 10 valores inteiros e armazene estes valores em um vetor. 
// O programa deverá ler também um outro valor inteiro N e verificar  se este valor N é um elemento do vetor. 
// O programa deverá mostrar na tela uma mensagem informando se o valor N é ou não um elemento do vetor.
// Exemplo: se o usuário informar os valores:
// V[0]= 2  V[1]= 76  V[2]= 87  V[3]= 10  V[4]= 43  V[5]= 54  V[6]= 23  V[7]= 88  V[8]= 121  V[9]= 231
// Se o usuário digitar o valor 23, o programa deverá mostrar na tela uma mensagem indicando que este valor está contido no vetor. 
// Se o usuário digitar o valor 50, o programa deverá mostrar na tela uma mensagem indicando que este valor não está contido no vetor.  

#include <stdio.h>

int main() {
   int vet[10],n,cont=0;

   for(int x=0; x<10; x++) {
      printf("Digite o numero %d: ",x);
      scanf("%d",&vet[x]);
   }

   printf("Digite o numero verificador: ");
   scanf("%d",&n);

   for(int x=0; x<10; x++) {
      if(vet[x]==n) {
         cont=1;
         break;
      }
   }

   if(cont==1) {
      printf("O numero %d esta no vetor",n);
   } else if(cont==0) {
      printf("O numero %d NAO esta no vetor",n);
   }

   return 0;
}