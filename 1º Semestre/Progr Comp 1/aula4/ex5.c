#include <stdio.h>

int main () {
   int i;
   float a,b,c,aux;

   printf("Digite o valor para i: ");
   scanf("%d",&i);

   printf("Digite a: ");
   scanf("%f",&a);

   printf("Digite b: ");
   scanf("%f",&b);

   printf("Digite c: ");
   scanf("%f",&c);

   if (a>b){
      aux=a;
      a=b;
      b=aux;
   }
   if (a>c){
      aux=a;
      a=c;
      c=aux;
   }
   if (b>c){
      aux=b;
      b=c;
      c=aux;
   }
   if (i==1) {
      printf("Ordem Crescente: %.0f %.0f %.0f",a,b,c);
   } else if (i==2) {
      printf("Ordem Decrescente: %.0f %.0f %.0f",c,b,a);
   } else if (i==3) {
      printf("Maior valor no meio: %.0f %.0f %.0f",a,c,b);
   }

   return 0;
}
