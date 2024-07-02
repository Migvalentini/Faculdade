// O sistema de numeração decimal (base dez) possui dez possíveis valores (0,1,2,3,4,5,6,7,8, ou 9) para cada casa numérica. 
// Por outro lado, o sistema de numeração binária (base dois) possui apenas dois valores, representados por 0 e 1, para cada casa numérica.
// Para converter um número decimal para binário deve-se: 
// - Realizar sucessivas divisões por 2. O resto da divisão compõe o número binário. 
// - As sucessivas divisões deverão ser repetidas até que o quociente da divisão seja igual a 0 (zero).
// Exemplo: conversão do número decimal 1985 para binário:
// Divisão  Quociente  Resto
// 1985/2   992        1
// 992/2    496        0
// 496/2    248        0
// 248/2    124        0
// 124/2    62         0
// 62/2     31         0
// 31/2     15         1
// 15/2     7          1
// 7/2      3          1
// 3/2      1          1
// 1/2      0          1
// O número binário correspondente é obtido pelo resto da divisão, da última divisão até a primeira divisão (de baixo para cima), ou seja, 11111000001.
// Desenvolva um programa em C que leia um número inteiro e escreva os dígitos binários correspondentes a esse número.
// Para desenvolver este programa em C considere um vetor de 64 posições. O resto das sucessivas divisões devem ser incluídas no vetor.
// Após o programa em C deverá mostrar uma mensagem informando qual o valor binário correspondente ao número decimal informado. 

#include <stdio.h>

int main() {
   int num, x=0, vet[64], resto;

   printf("Digite um numero: ");
   scanf("%d",&num);

   while(num > 0) {
      resto=num%2;

      vet[x]=resto;

      num=num/2;
      x++;
   }

   for(int y=x-1; y>=0; y--) {
      printf("%d",vet[y]);
   }

   return 0;
}