#include <stdio.h>

main () {
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
}