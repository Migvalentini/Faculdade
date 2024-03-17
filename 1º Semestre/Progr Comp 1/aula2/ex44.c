#include <stdio.h>;

main () {
   int numero,dig1,resto;

   printf("Digite o numero de 9 digitos: ");
   scanf("%d", &numero);

   dig1=numero/100000000;
   resto=numero%100000000;

   printf("Numero rotacionado: %d", resto * 10 + dig1);
}