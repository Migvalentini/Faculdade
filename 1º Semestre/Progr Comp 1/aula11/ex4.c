#include <stdio.h>

main(){
    int x,vet[10];

    for (x=0;x<10;x++) {
        printf("Digite o valor %d: ",x);
        scanf("%d",&vet[x]);
    }

    printf("\nPosicoes do vetor que possuem numeros menores que zero:\n");
    for (x=0;x<10;x++) {
        if(vet[x]<0) {
            printf("%d ",x);
        }
    }
}