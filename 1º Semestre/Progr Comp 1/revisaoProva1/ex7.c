#include <stdio.h>

int main () {
   int peso;

   printf("Digite o peso: ");
   scanf("%d",&peso);

   if (peso < 11) {
      printf("-1");
   } else if (peso>=11&&peso<=15) {
      printf("5mL");
   } else if (peso>=16&&peso<=21) {
      printf("7,5mL");
   } else if (peso>=22&&peso<=26) {
      printf("10mL");
   } else if (peso>=27&&peso<=31) {
      printf("12,5mL");
   } else if (peso>=32&&peso<=43) {
      printf("15mL");
   } else {
      printf("-2");
   }

   return 0;
}