#include <stdio.h>

main () {
    int n,x;

    printf("Digite um numero inteiro: ");
    scanf("%d",&n);

    for (x=1;x<=n;x++) {
        printf("%d",x);
    }
}