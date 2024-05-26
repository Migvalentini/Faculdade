// Desenvolva um programa em C que solicite ao usuário informar um número inteiro qualquer. 
// O programa em C deve verificar se o número possui algum dígito repetido, mostrando na tela uma mensagem informando se o número contém ou não dígitos repetidos. 

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

      num/=10;
   }
   if(a1>0 && a2>0 && a3>0 && a4>0 && a5>0 && a6>0 && a7>0 && a8>0 && a9>0 && a0>0) {
      printf("O numero nao possui digitos repetidos");
   } else {
      printf("O numero possui digitos repetidos");
   }

   return 0;
}