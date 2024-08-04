// Desenvolva um programa que solicite ao usuário um número 9 dígitos. 
// O programa deve rotacionar os dígitos uma posição para a esquerda, de modo que o primeiro dígito passe a ocupar a última posição.
// O novo número deve ser mostrado na tela. 
// Exemplo 1 : se o usuário digitar o número 123456789, o programa deve gerar e mostrar na tela o 234567891 (todos os dígitos foram uma posição para a esquerda e o 1 da primeira posição passou a ocupar a última posição). 
// Dica de resolução: 
// Para desenvolver este programa, utilize os operadores de divisão e o resto da divisão para separar o primeiro dígito do número informado. 
// Se o programa solicitasse um número de 3 dígitos, e o usuário informasse o número 368, as instruções necessárias seriam:
// 1) Dividir o número 368 por 100, separando a parte inteira do quociente e o resto da divisão:
//    368 / 100
//    300   3
//     68	
// Quociente = 3
// Resto = 68
// 2) Multiplicar o resto da divisão obtido no cálculo anterior por 10: 68 * 10 = 680
// 3) Somar o quociente obtido na divisão (passo 1) com o resultado da multiplicação (passo 2): 3 + 680 = 683 

#include <stdio.h>

int main () {
   int numero,dig1,resto;

   printf("Digite o numero de 9 digitos: ");
   scanf("%d", &numero);

   dig1=numero/100000000;
   resto=numero%100000000;

   printf("Numero rotacionado: %d", resto * 10 + dig1);

   return 0;
}
