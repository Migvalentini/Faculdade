// As carteiras de identidade expedidas no estado de São Paulo (SSP-SP) possuem 9 dígitos, sendo que o último dígito é o verificador, ou seja, é calculado a partir dos 8 primeiros dígitos.
// Como por exemplo, para a identidade 120300011, os dígitos são: primeiro: 1, segundo: 2, terceiro: 0 quarto: 3, quinto: 0 sexto:0, sétimo: 0, oitavo: 0, nono:1
// Então é feita a multiplicação dos dígitos: primeiro por 9, segundo por 8, terceiro por 7, quarto por 6, quinto por 5, sexto por 4, sétimo por 4, oitavo por 2.
// O nono dígito não é utilizado para o cálculo, apenas para validação conforme mostrado abaixo.
// Após a multiplicação de cada um dos dígitos pelo peso (mostrado acima), efetua-se a soma dessasm multiplicações, para a identidade exemplo teremos:
// 1x9 + 2x8 + 0x7 + 3x6 + 0x5 + 0x4 + 0x3 + 1x2 = 9+16+0+18+0+0+0+2 = 45.
// Finalmente para calcular o dígito verificador (nono dígito), calcula-se o resto da divisão dessa soma por 11, atenção, caso o resto for 10 o dígito verificador será 0.
// Fazer um programa em C que receba (leia) um número de 9 dígitos (em uma única variável inteira), separe cada um desses dígitos, calcule o dígito verificador e 
// verifique se o número está correto, comparando o DV calculado com o último dígito do número lido. 
// Caso o número estiver correto escreva 1, senão escreva 0.
// Dica: Utilizar resto da divisão interia e divisões inteiras para obter cada um dos dígitos.

#include <stdio.h>

int main() {
   int numero,d1,d2,d3,d4,d5,d6,d7,d8,d9,resto,dv;

   printf("Digute um numero de 9 digitos: ");
   scanf("%d",&numero);

   d1=numero/100000000;
   resto=numero%100000000;
   d2=resto/10000000;
   resto=resto%10000000;
   d3=resto/1000000;
   resto=resto%1000000;
   d4=resto/100000;
   resto=resto%100000;
   d5=resto/10000;
   resto=resto%10000;
   d6=resto/1000;
   resto=resto%1000;
   d7=resto/100;
   resto=resto%100;
   d8=resto/10;
   d9=resto%10;

   dv=(d1*9+d2*8+d3*7+d4*6+d5*5+d6*4+d7*3+d8*2)%11;
   if (dv==10) {
      dv=0;
   }

   if (dv==d9) {
      printf("1");
   } else {
      printf("0");
   }
   
   return 0;
}