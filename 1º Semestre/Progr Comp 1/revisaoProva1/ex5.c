#include <stdio.h>

int main () {
   int numero,d1,d2,d3,d4,d5,d6,d7,d8,d9,resto,dv;

   printf("Digute um numero de 9 digitos: ");
   scanf("%d",&numero);

   d1=numero/100000000;
   resto=numero%100000000;
   d2=resto/10000000;
   resto=resto%10000000;
   d3=resto/1000000;
   resto=resto%1000000;
   d4=resto/100000;
   resto=resto%100000;
   d5=resto/10000;
   resto=resto%10000;
   d6=resto/1000;
   resto=resto%1000;
   d7=resto/100;
   resto=resto%100;
   d8=resto/10;
   d9=resto%10;

   dv=(d1*9+d2*8+d3*7+d4*6+d5*5+d6*4+d7*3+d8*2)%11;
   if (dv==10) {
      dv=0;
   }

   if (dv==d9) {
      printf("1");
   } else {
      printf("0");
   }
   
   return 0;
}