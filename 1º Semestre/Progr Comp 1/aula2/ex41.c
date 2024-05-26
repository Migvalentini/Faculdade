// Desenvolva um programa que solicite ao usuário informar um valor inteiro em reais. 
// O programa deve calcular e mostrar na tela qual o menor número possível de notas e moedas de 100,50,20,10,5,2 e 1 real em que o valor pode ser decomposto. 
// Exemplo: Se o usuário informar o valor de 279, o programa deverá mostrar que o menor número de notas possíveis são 7 notas. 
// Para desenvolver este programa, utilizar os operadores de divisão e o resto da divisão
// 2 notas de R$100 + 1 nota de R$50 + 1 nota de 20 + 1 nota de 5 + 2 notas de 2 = 7 notas

#include <stdio.h>

int main () {
   int valor,notas100,notas50,notas20,notas10,notas5,notas2,notas1;
   int resto100,resto50,resto20,resto10,resto5,resto2;

   printf("Digite o valor total: ");
   scanf("%d", &valor);

   notas100=valor/100;
   resto100=valor%100;
   notas50=resto100/50;
   resto50=resto100%50;
   notas20=resto50/20;
   resto20=resto50%20;
   notas10=resto20/10;
   resto10=resto20%10;
   notas5=resto10/5;
   resto5=resto10%5;
   notas2=resto5/2;
   resto2=resto5%2;
   notas1=resto2/1;

   printf("Notas 100: %d\nNotas 50: %d\nNotas 20: %d\nNotas 10: %d\nNotas 5: %d\nNotas 2: %d\nNotas 1: %d",notas100,notas50,notas20,notas10,notas5,notas2,notas1);
   printf("\nTotal de notas: %d",notas100+notas50+notas20+notas10+notas5+notas2+notas1);

   return 0;
}
