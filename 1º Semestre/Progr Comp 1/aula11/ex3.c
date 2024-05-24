#include <stdio.h>

main(){
    int x,vet[10];

    for (x=0;x<10;x++) {
        printf("Digite o valor %d: ",x);
        scanf("%d",&vet[x]);
    }

    printf("\nOs valores pares digitados foram:\n");
    for (x=0;x<10;x++) {
        if(vet[x]%2==0) {
            printf("%d ",vet[x]);
        }
    }

    printf("\nOs valores impares digitados foram:\n");
    for (x=0;x<10;x++) {
        if(vet[x]%2==1) {
            printf("%d ",vet[x]);
        }
    }
}