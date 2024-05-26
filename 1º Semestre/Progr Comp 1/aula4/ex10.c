// Desenvolva um programa que solicite o usuário informar um número de 8 dígitos. 
// O programa deve verificar se este número é palíndromo, ou seja,  se a leitura da direita para a esquerda é igual a leitura da esquerda para a direita. 
// Após a verificação, o programa deverá mostrar na tela uma mensagem se o número é ou não palíndromo. 
// Exemplo: se o usuário informar o 25344351, o programa deverá verificar que o primeiro número é igual ao oitavo, o segundo igual ao sétimo e o terceiro igual ao sexto número. 
// Dica para desenvolver este programa: divida o número por múltiplos de 10 e vá pegando o quociente e resto da divisão para separar os 8 dígitos do número. 

#include <stdio.h>

int main() {
   int num,n1,n2,n3,n4,n5,n6,n7,n8,resto;

   printf("Digite um numero: ");
   scanf("%d",&num);

   n1=num/10000000;
   resto=num%10000000;
   n2=resto/1000000;
   resto=num%1000000;
   n3=resto/100000;
   resto=num%100000;
   n4=resto/10000;
   resto=num%10000;
   n5=resto/1000;
   resto=num%1000;
   n6=resto/100;
   resto=num%100;
   n7=resto/10;
   resto=num%10;
   n8=resto;

   if (n1==n8 && n2==n7 && n3==n6 && n4==n5) {
      printf("Eh palindromo");
   } else {
      printf("Nao eh palindromo");
   }

   return 0;
}