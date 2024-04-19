#include <stdio.h>

main () {
    int n,x,maior,menor;

    for (x=1;x<=10;x++) {
        printf("Digite o numero %d: ",x);
        scanf("%d",&n);

        if (x==1) {
            maior=n;
            menor=n;
        } else {
            if (n>maior) {
                maior=n;
            }
            if (n<menor) {
                menor=n;
            }
        }
    }

    printf("Maior: %d\nMenor: %d",maior,menor);
}