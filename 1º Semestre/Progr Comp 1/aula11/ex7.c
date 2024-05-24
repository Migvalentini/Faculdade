#include <stdio.h>

main(){
    int x,soma=0,vet[10];

    for (x=0;x<10;x++) {
        printf("Digite o valor %d: ",x);
        scanf("%d",&vet[x]);
    }

    printf("\nOs valores digitados foram:\n");
    for (x=0;x<10;x++) {
        printf("%d ",vet[x]);
        if(vet[x]<0) {
            soma+=vet[x];
        }
    }

    printf("\nA soma dos numeros negativos eh %d",soma);
}