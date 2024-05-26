// Desenvolva um programa que solicite ao usuário informar dois valores inteiros.  
// Após a digitação, o computador deve calcular o quadrado da diferença do primeiro valor pelo segundo. 
// O resultado desta operação deve ser mostrado na tela.
// Exemplo: se o usuário informar os valores 23 e 17, o programa deve realizar o cálculo (23-17)2 e mostrar na tela o resultado (36).

#include <stdio.h>
#include <math.h>

int main () {
  float n1,n2;

  printf("Digite o primeiro numero: ");
  scanf("%f", &n1);
  printf("Digite o segundo numero: ");
  scanf("%f", &n2);

  printf("%f", pow((n1-n2), 2));

  return 0;
}
