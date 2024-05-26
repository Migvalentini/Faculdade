// Uma Progressão Aritmética (P.A) é uma sequência numérica em que cada termo, a partir do segundo, é igual a soma do termo anterior com uma constante. 
// Esta constante é denominada razão (r), sendo a mesma obtida por meio da diferença de um termo da sequência pelo seu anterior. 
// Por exemplo, a sequência 1, 6, 11, 16, 21, 26, 31 é uma P.A de 7 termos (n=7), onde o primeiro termo é 1 (a1=1) e a razão é 5 (r=5). 
// Desenvolva um programa em C que solicite ao usuário informar 2 valores inteiros que correspondam ao primeiro termo e a razão da PA. 
// Gere os primeiros 20 termos desta sequência, armazenando os valores em um vetor de 20 posições. Após, mostre na tela os valores armazenados no vetor.
    
#include <stdio.h>

int main() {
   int n1,razao,vet[20];

   printf("Digite o primeiro termo: ");
   scanf("%d",&n1);

   printf("Digite a razao: ");
   scanf("%d",&razao);


   vet[0]=n1;
   for(int x=1; x<20; x++) {
      vet[x]=vet[x-1]+razao;
   }

   for(int x=0;x<20;x++) {
      printf("%d ",vet[x]);
   }

   return 0;
}