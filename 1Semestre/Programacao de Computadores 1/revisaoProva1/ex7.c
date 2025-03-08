// Um dos problemas comuns que ocorrem com crianças é febre. 
// Em casos simples, pode-se administrar paracetamol (Tylenol Criança) para baixar a febre (não considerar isso na aplicação real do medicamento, consulte um médico). 
// Paracetamol para crianças deve ser administrado em quantidades proporcionais ao peso da criança, de 3 até 5 vezes por dia.
// Peso (kg)     Dosagem (mL)
// Abaixo de 11  Avaliar Uso de Paracetamol Bebê - escrever -1
// 11 até 15     5
// 16 até 21     7,5
// 22 até 26     10
// 27 até 31     12,5
// 32 até 43     15
// Acima de 43   Avaliar Uso de Paracetamol Adulto - escrever -2
// Fazer um programa em C que solicite o peso da criança em kg (variável inteira) e informe a quantidade de medicamento a ser administrada (dosagem), 
// de acordo com a tabela acima, ou ainda -1 ou -2 também conforme tabela acima.
// Dica: Utilizar um conjunto de testes considerando os intervalos especificados.

#include <stdio.h>

int main() {
   int peso;

   printf("Digite o peso: ");
   scanf("%d",&peso);

   if (peso < 11) {
      printf("-1");
   } else if (peso>=11&&peso<=15) {
      printf("5mL");
   } else if (peso>=16&&peso<=21) {
      printf("7,5mL");
   } else if (peso>=22&&peso<=26) {
      printf("10mL");
   } else if (peso>=27&&peso<=31) {
      printf("12,5mL");
   } else if (peso>=32&&peso<=43) {
      printf("15mL");
   } else {
      printf("-2");
   }

   return 0;
}