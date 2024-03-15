#include <stdio.h>;

main () {
    int horas1, minutos1, segundos1, horas2, minutos2, segundos2;

    printf("Digite as horas iniciais: ");
    scanf("%d", &horas1);

    printf("Digite os minutos iniciais: ");
    scanf("%d", &minutos1);

    printf("Digite os segundos iniciais: ");
    scanf("%d", &segundos1);

    printf("Digite as horas finais: ");
    scanf("%d", &horas2);

    printf("Digite os minutos: ");
    scanf("%d", &minutos2);

    printf("Digite os segundos: ");
    scanf("%d", &segundos2);

    printf("Diferenca de Segundos: %d", (horas1 * 3600 + minutos1 * 60 + segundos1) - (horas2 * 3600 + minutos2 * 60 + segundos2)); 
}