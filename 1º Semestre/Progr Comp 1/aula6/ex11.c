#include <stdio.h>

main () {
    int x,n,soma=0;

    for (x=1;x<=15;x++) {
        printf("Digite o numero %d: ",x);
        scanf("%d",&n);

        soma+=n;
    }

    printf("Soma: %d",soma);
}