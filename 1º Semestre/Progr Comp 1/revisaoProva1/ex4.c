// Em uma rifa de 10000 números (0000-9999), o número do bilhete ganhador da mesma será formado pelo último dígito de cada um dos 4 primeiros números sorteados pela loteria federal, conforme o exemplo a seguir: 
// Ex. de números sorteados na loteria federal
// 1o lugar: 12356 ? 6 (utilizado como milhar)
// 2o lugar: 56785 ? 5 (utilizado como centena)
// 3o lugar: 18639 ? 9 (utilizado como dezena)
// 4o lugar: 33567 ? 7 (utilizado como unidade)
// 5o lugar: 48813 (não utilizado)
// A partir dos números acima, o número ganhador ganhador da rifa seria: 6597
// Fazer um programa em C que solicite ao usuário 4 números inteiros, representando os primeiros 4 números sorteados da loteria federal, depois mais um número inteiro de 4 dígitos, 
// representando o número de um bilhete dessa rifa, e verifique e escreva 1 se o bilhete for o premiado ou 0 caso não seja.. 
// Para verificar comparar o número do bilhete informado com o número obtido a partir dos resultados da loteria.
// Atenção: Cada número solicitado deve ser lido para uma única variável inteira, e depois os dígitos separados, se necessário.
// Dica: Utilizar o resto da divisão inteira para obter os últimos dígitos de cada número informado.

#include <stdio.h>

int main() {
   int n1,n2,n3,n4,n5,premiado;

   printf("Digite o numero 1: ");
   scanf("%d",&n1);
   printf("Digite o numero 2: ");
   scanf("%d",&n2);
   printf("Digite o numero 3: ");
   scanf("%d",&n3);
   printf("Digite o numero 4: ");
   scanf("%d",&n4);
   printf("Digite o numero 5: ");
   scanf("%d",&n5);

   premiado=((n1%1000%100%10)*1000)+((n2%1000%100%10)*100)+((n3%1000%100%10)*10)+((n4%1000%100%10));

   if (premiado==n5) {
      printf("1");
   } else {
      printf("0");
   }

   return 0;
}