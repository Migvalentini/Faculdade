#include <stdio.h>>

main () {
   int x,num,menor,cont;

   for (x=1;x<=20;x++) {
      printf("Digite o numero %d: ",x);
      scanf("%d",&num);

      if (x==1) {
         menor=num;
         cont=1;
      }

      if (num<menor) {
         menor=num;
         cont=1;
      } else if (num == menor) {
         cont++;
      }
   }

   printf("Menor: %d\nQauntidade Menor: %d",menor,cont);
}