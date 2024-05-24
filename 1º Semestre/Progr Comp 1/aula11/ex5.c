#include <stdio.h>

main(){
    int x,y,div,vet[10];

    for (x=0;x<10;x++) {
        printf("Digite o valor %d: ",x);
        scanf("%d",&vet[x]);
    }

    printf("\nOs valores primos digitados foram:\n");
    for (x=0;x<10;x++) {
        div=0;
        for (y=1;y<vet[x]+1;y++) {
            if(vet[x]%y==0) {
                div++;
            }
        }
        if(div==2) {
            printf("%d ",x);
        }
    }
}