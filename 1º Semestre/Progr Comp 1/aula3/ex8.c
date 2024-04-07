#include <stdio.h>

int main () {
    int n1, n2;

    printf("Digite 2 numeros inteiros: ");
    scanf("%d %d",&n1,&n2);

    if (n1>n2) {
        printf("O numero %d eh maior", n1);
    }
    else {
        if (n2>n1) {
            printf("O numero %d eh maior", n2);
        }
        else {
            printf("Os numeros sao iguais");
        }
    }

    return 0;
}
