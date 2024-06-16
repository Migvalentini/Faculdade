// Desenvolva um programa em C que solicite ao usuário informar um conjunto de números inteiros, que obrigatoriamente pertençam ao intervalo de 0 a 10, correspondentes um conjunto de notas de alunos. 
// O programa em C deverá encerrar a leitura dos valores quando um valor negativo for informado. 
// O valor negativo assim como qualquer valor que não pertença ao intervalo de 0 a 10 devem ser descartados. 
// O programa em C deverá contabilizar o número de ocorrências de cada nota. 
// O número de ocorrências de cada nota deve ser armazenado obrigatoriamente em um vetor. 
// No final, o programa em C deverá mostrar na tela um relatório que contenha a nota e o número de ocorrências correspondente. 
// Exemplo: se o usuário informar na tela os seguintes valores: 9, 7, 5, 3, 2, 8, 9, 5, 7, 7, 7, 9, 0, 8, 6, -8, o programa em C deverá mostrar na tela um relatório como:
// Nota 0 : 1 ocorrência(s). 
// Nota 2 : 1 ocorrência(s).
// Nota 3 : 1 ocorrência(s).
// Nota 5 : 2 ocorrência(s).
// Nota 6 : 1 ocorrência(s).   
// Nota 7 : 4 ocorrência(s).
// Nota 8 : 2 ocorrência(s).   
// Nota 9 : 2 ocorrência(s). 

#include <stdio.h>

int main() {
   int num=11,notas[10]={0};

   while(num>=0) {
      if(num>0 && num<10) {
         switch (num)
         {
         case 0:
            notas[0]++; break;
         case 1:
            notas[1]++; break;
         case 2:
            notas[2]++; break;
         case 3:
            notas[3]++; break;
         case 4:
            notas[4]++; break;
         case 5:
            notas[5]++; break;
         case 6:
            notas[6]++; break;
         case 7:
            notas[7]++; break;
         case 8:
            notas[8]++; break;
         case 9:
            notas[9]++; break;
         }
      }

      printf("Digite um numero: ");
      scanf("%d",&num);
   }

   for(int i=0;i<10;i++) {
      if(notas[i]>0) {
         printf("Nota %d: %d ocorrencia(s)\n",i,notas[i]);
      }
   }

   return 0;
}
