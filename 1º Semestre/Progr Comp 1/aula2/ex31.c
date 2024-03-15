#include <stdio.h>;

main () {
    int horas, minutos, segundos;

    printf("Digite as horas: ");
    scanf("%d", &horas);

    printf("Digite os minutos: ");
    scanf("%d", &minutos);

    printf("Digite os segundos: ");
    scanf("%d", &segundos);

    printf("Total de Segundos: %d", horas * 3600 + minutos * 60 + segundos);
}