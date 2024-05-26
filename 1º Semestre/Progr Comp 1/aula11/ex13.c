#include <stdio.h>

int main() {
   int somaPar=0,vet[20],qntdImp=0;

   for(int x=0; x<20; x++) {
      printf("Digite o numero %d: ",x);
      scanf("%d",&vet[x]);
   }

   for(int x=0; x<20; x++) {
      if(vet[x]%2==0) {
         somaPar+=vet[x];
      } else {
         qntdImp++;
      }
   }

   if(somaPar>0) {
      printf("Os numeros pares sao:\n");
      for(int x=0; x<20; x++) {
         if(vet[x]%2==0) {
            printf("Numero %d - Posicao %d\n",vet[x],x);
         }
      }
   } else {
      printf("Nao existe nenhum numero par\n");
   }

   if(qntdImp>0) {
      printf("Os numeros impares sao:\n");
      for(int x=0; x<20; x++) {
         if(vet[x]%2==1) {
            printf("Numero %d - Posicao %d\n",vet[x],x);
         }
      }
   } else {
      printf("Nao existe nenhum numero impar");
   }

   return 0;
}