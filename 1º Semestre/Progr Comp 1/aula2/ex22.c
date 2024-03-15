#include <stdio.h>;
#include <math.h>;

main () {
    int n1,n2;

    printf("Figite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Figite o segundo numero: ");
    scanf("%d", &n2);

    printf("%d", (n1+n2 + abs(n1-n2)) / 2);
}   