#include <stdio.h>

main(){
    int x,y,n,vet[10];

    for (x=0;x<10;x++) {
        printf("Digite o valor %d: ",x);
        scanf("%d",&vet[x]);
    }

    for (x=0;x<10;x++) {
        printf("Digite o novo valor %d: ",x);
        scanf("%d",&n);

        for(y=0;y<10;y++) {
            if(vet[y]==n) {
                printf("O valor %d foi encontrado na posicao %d\n",n,y);
            } else {
                printf("O valor %d nao foi encontrado\n",n);
            }
        }
    }
}