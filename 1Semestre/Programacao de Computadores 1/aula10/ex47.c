// Em um jogo de cartas, um determinado jogador recebeu 10 cartas. 
// Desenvolva um programa em C que solicite ao usuário informar, para cada uma das 10 cartas recebidas pelo jogador, dois números inteiros. 
// O primeiro número indica o valor de uma carta do baralho, que pode variar de 1 a 13. O segundo número indica o naipe da carta (O - ouros, C - copas, P - paus, E – espadas).  
// O programa em C deverá verificar se as cartas que o jogador possui formam ou não uma canastra, mostrando esta informação na tela.  
// Considere como canastra apenas uma sequência crescente de 7 cartas do mesmo naipe de numeração contínua (cuja diferença entre duas cartas seja igual a 1). 
// Considere que podem ocorrer cartas de mesmo número e naipe (uso de mais de um baralho). Nesse caso a carta de mesmo número e naipe não é contada, mas não quebra a sequência.  

#include <stdio.h>

int main() {
   int num,numAnterior,naipe,naipeAnterior,sequencia=0;

   printf("Digite o numero da carta 1: ");
   scanf("%d",&numAnterior);
   printf("Digite o naipe da carta 1: ");
   scanf("%d",&naipeAnterior);

   for(int x=2; x<=10; x++) {
      printf("Digite o numero da carta %d: ",x);
      scanf("%d",&num);
      printf("Digite o naipe da carta %d: ",x);
      scanf("%d",&naipe);

      if(num-numAnterior==1 && naipe==naipeAnterior) {
         printf("Eh sequencia\n");
         sequencia++;
      }

      numAnterior=num;
      naipeAnterior=naipe;
   }

   if(sequencia>=7) {
      printf("As cartas foram uma sequencia");
   }

   return 0;
}