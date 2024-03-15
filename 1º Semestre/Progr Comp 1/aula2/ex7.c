#include <stdio.h>;
#include <math.h>;

main () {
  float n1,n2;

  printf("Digite o primeiro numero: ");
  scanf("%f", &n1);
  printf("Digite o segundo numero: ");
  scanf("%f", &n2);

  printf("%f", pow((n1-n2), 2));
}