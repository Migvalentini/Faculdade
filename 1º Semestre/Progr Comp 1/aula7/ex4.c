#include <stdio.h>

main () {
   int dividendo,divisor,resto,quociente=0;

   printf("Digite o dividendo: ");
   scanf("%d",&dividendo);
   printf("Digite o divisor: ");
   scanf("%d",&divisor);

   resto=dividendo-divisor;
   quociente++;

   while (resto>=divisor) {
      quociente++;
      resto=resto-divisor;
   }

   printf("Quociente: %d",quociente);
}