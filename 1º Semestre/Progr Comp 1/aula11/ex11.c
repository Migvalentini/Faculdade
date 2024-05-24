#include <stdio.h>

int main(){
    int x,vet[10];
    float soma=0, media=0;

    for (x=0;x<10;x++) {
        printf("Digite o valor %d: ",x);
        scanf("%d",&vet[x]);
    }

    for (x=0;x<10;x++) {
        soma+=(float)vet[x];
    }
    media = soma/10;
    printf("\nA media dos numeros negativos eh %f",media);

    printf("\nOs valores digitados maiores que a media foram:\n");
    for (x=0;x<10;x++) {
        if(vet[x]>media) {
            printf("%d ",vet[x]);
        }
    }
    return 0;
}