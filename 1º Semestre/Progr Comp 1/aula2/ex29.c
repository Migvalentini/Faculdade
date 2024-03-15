#include <stdio.h>;

main () {
    int segundos;

    printf("Digite os segundos: ");
    scanf("%d", &segundos);

    printf("%d horas", segundos / 3600);
}