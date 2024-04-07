#include <stdio.h>

int main () {
   float t1,t2,t3,t4,aux;

   printf("Digite a temperatura 1: ");
   scanf("%f",&t1);
   printf("Digite a temperatura 2: ");
   scanf("%f",&t2);
   printf("Digite a temperatura 3: ");
   scanf("%f",&t3);
   printf("Digite a temperatura 4: ");
   scanf("%f",&t4);

   if (t1>t2) {
      aux=t1;
      t1=t2;
      t2=aux;
   }
   if (t1>t3) {
      aux=t1;
      t1=t3;
      t3=aux;
   }
   if (t1>t4) {
      aux=t1;
      t1=t4;
      t4=aux;
   }
   if (t2>t3) {
      aux=t2;
      t2=t3;
      t3=aux;
   }
   if (t2>t4) {
      aux=t2;
      t2=t4;
      t4=aux;
   }
   if (t3>t4) {
      aux=t3;
      t3=t4;
      t4=aux;
   }

   printf("A media das temperaturas %.1f e %.1f eh %.1f",t2,t3,(t2+t3)/2);

   return 0;
}