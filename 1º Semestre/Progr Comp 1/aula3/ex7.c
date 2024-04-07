#include <stdio.h>

int main () {
    int n1, n2;

    printf("Digite 2 numeros inteiros: ");
    scanf("%d %d",&n1,&n2);

    if (n1%n2==0 || n2%n1==0) {
        printf("Sao multiplos");
    } else {
        printf("Nao sao multiplos");
    }

    return 0;
}
