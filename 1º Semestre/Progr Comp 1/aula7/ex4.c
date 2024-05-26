// Uma forma de realizar a divisão entre dois números é através de sucessivas operações de subtração. 
// Nesta forma de cálculo, o quociente da operação de divisão pode ser obtido subtraindo-se o divisor do dividendo. 
// Da diferença, subtraímos novamente o divisor e assim sucessivamente até que a diferença seja menor do que o divisor. 
// A quantidade de subtrações realizadas será o quociente.
// Exemplo: Para efetuar a divisão de 21 (dividendo) por 4 (divisor):
// - 21 /4 = 21 - 4 = 17 (1ª subtração)
// - 17 - 4 = 13 (2ª subtração)
// - 13 - 4 = 9 (3ª subtração)
// - 9 - 4 = 5 (4ª subtração)
// - 5 - 4 = 1 (5ª subtração)
// Neste exemplo, o número de subtrações realizadas foi 5. Logo, o quociente da divisão 21/4 é 5.
// Desenvolva um programa em C que leia dois números inteiros que correspondam ao dividendo e o divisor. 
// O dividendo deve ser um número inteiro, positivo ou negativo ou igual a 0 (zero). 
// O divisor deve ser um número inteiro, positivo ou negativo, mas diferente de 0 (zero). 
// O programa em C deverá calcular e mostrar na tela o quociente, utilizando o método acima explicitado. 
// O programa em C NÃO poderá utilizar o operador de divisão.

#include <stdio.h>

int main() {
   int dividendo,divisor,resto,quociente=0;

   printf("Digite o dividendo: ");
   scanf("%d",&dividendo);
   printf("Digite o divisor: ");
   scanf("%d",&divisor);

   resto=dividendo-divisor;
   quociente++;

   while (resto>=divisor) {
      quociente++;
      resto=resto-divisor;
   }

   printf("Quociente: %d",quociente);

   return 0;
}