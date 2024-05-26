// Uma empresa concederá um aumento de salário aos seus colaboradores, variáveis de acordo com o cargo, conforme a tabela abaixo:
// Código	Cargo	    Índice de aumento
// 101  	Gerente	    10%
// 102	    Engenheiro	20%
// 103 	Técnico	    30%
// Outros	Outros	    40%
// Desenvolva um programa que solicite ao usuário informar o código do cargo do colaborador e o seu salário atual e calcule seu novo salário de acordo com a tabela. 
// O programa deverá mostrar na tela o nome do cargo, o salário antigo, o novo salário e o valor do aumento salarial.
// Exemplo: se usuário informar como código do cargo 102 e o salário atual R$ 5000, o programa deverá mostrar na tela:
// Cargo: Engenheiro
// Salário antigo: R$ 5000
// Novo Salário: R$  6000
// Valor do aumento: R$ 1000

#include <stdio.h>

int main() {
   int codigo;
   float atualSalario,novoSalario;

   printf("Digite o codigo do cargo: ");
   scanf("%d", &codigo);
   printf("Digite o salario atual: ");
   scanf("%f", &atualSalario);

   if (codigo==101) {
      novoSalario=atualSalario*1.1;
      printf("Cargo: Gerente\n");
   } else if (codigo==102) {
      novoSalario=atualSalario*1.2;
      printf("Cargo: Engenheiro\n");
   } else if (codigo==103) {
      novoSalario=atualSalario*1.3;
      printf("Cargo: Técnico\n");
   } else {
      novoSalario=atualSalario*1.4;
      printf("Cargo: Outros\n");
   }

   printf("Salario Antigo: %.1f\n",atualSalario);
   printf("Salario Novo: %.1f\n",novoSalario);
   printf("Aumento: %.1f",novoSalario-atualSalario);
   
   return 0;
}