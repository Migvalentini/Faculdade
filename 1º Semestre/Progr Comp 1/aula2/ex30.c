#include <stdio.h>;

main () {
    int segundos;

    printf("Digite os segundos: ");
    scanf("%d", &segundos);

    printf("%d horas e %d minutos", segundos / 3600, (segundos % 3600) / 60);
}