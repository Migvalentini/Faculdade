#include <stdio.h>

main(){
    int x,vet[10];

    for (x=0;x<10;x++) {
        printf("Digite o valor %d: ",x);
        scanf("%d",&vet[x]);
    }

    printf("\nOs valores digitados foram:\n");
    for (x=9;x>-1;x--) {
        printf("%d ",vet[x]);
    }
}