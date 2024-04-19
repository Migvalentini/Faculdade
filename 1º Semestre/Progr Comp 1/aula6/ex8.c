#include <stdio.h>

main () {
    int n,x;

    for (;;) {
        printf("Digite um numero: ");
        scanf("%d",&n);
        if (n<0) {
            break;
        } else if (n%2==0) {
            printf("O numero %d eh par\n",n);
        }
        
    }
}