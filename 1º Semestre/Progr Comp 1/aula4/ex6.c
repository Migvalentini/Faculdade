#include <stdio.h> 

int main () {
   int n1,n2,n3,n4,aux;

   printf("Digite o primeiro numero: ");
   scanf("%d",&n1);

   printf("Digite o segundo numero: ");
   scanf("%d",&n2);

   printf("Digite o terceiro numero: ");
   scanf("%d",&n3);

   printf("Digite o quarto numero: ");
   scanf("%d",&n4);

   if (n1>n2){
      aux=n1;
      n1=n2;
      n2=aux;
   }
   if (n1>n3){
      aux=n1;
      n1=n3;
      n3=aux;
   }
   if (n1>n4){
      aux=n1;
      n1=n4;
      n4=aux;
   }
   if (n2>n3){
      aux=n2;
      n2=n3;
      n3=aux;
   }
   if (n2>n4){
      aux=n2;
      n2=n4;
      n4=aux;
   }
   if (n3>n4){
      aux=n3;
      n3=n4;
      n4=aux;
   }

   printf("%d %d %d",n1,n2,n3);

   return 0;
}