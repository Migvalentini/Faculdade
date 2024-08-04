// Supondo que a população de um país A seja da ordem de 90.000.000 de habitantes com uma taxa anual de crescimento de 3.1% 
// e que a população de um país B seja de 200.000.000 de habitantes com uma taxa anual de crescimento de 1.5%. 
// Desenvolva um programa em C que calcule e mostre na tela a quantidade de anos necessários para que a população do pais A ultrapasse a população do país B, mantidas as taxas atuais de crescimento.

#include <stdio.h>

int main() {
   float populacaoA=90000000, populacaoB=200000000;
   int anos=0;

   while(populacaoA<populacaoB) {
      populacaoA=populacaoA+populacaoA*0.031;
      populacaoB=populacaoB+populacaoB*0.015;
      anos++;
   }

   printf("A quantisdade de anos necessario eh %d anos",anos);

   return 0;
}