#include <stdio.h>

int main () {
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