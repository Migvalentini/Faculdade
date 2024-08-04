// Desenvolva um programa em C que solicite ao usuário informar um número inteiro qualquer que possua  no máximo 5 casas e que não seja maior que 99999. 
// O programa em C deverá verificar quantas vezes cada dígito, de 0 a 9, aparece no número e mostrar esta informação na tela.
// Exemplo: se o valor informado foi 32412, o programa em C deve mostrar na tela o dígito  2 aparece 2 vezes no número e que os dígitos 3, 4 e 1 aparecem apenas uma vez.

#include <stdio.h>

int main() {
   int num,n,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a0=0;

   printf("Digite um numero inteiro: ");
   scanf("%d",&num);

   while(num>0) {
      n=num%10;
      switch (n)
      {
      case 1:
         a1++; break;
      case 2:
         a2++; break;
      case 3:
         a3++; break;
      case 4:
         a4++; break;
      case 5:
         a5++; break;
      case 6:
         a6++; break;
      case 7:
         a7++; break;
      case 8:
         a8++; break;
      case 9:
         a9++; break;
      case 0:
         a0++; break;
      }

      num=num/10;
   }

   printf("0: %d\n1: %d\n2: %d\n3: %d\n4: %d\n5: %d\n6: %d\n7: %d\n8: %d\n9: %d\n",a0,a1,a2,a3,a4,a5,a6,a7,a8,a9);

   return 0;
}