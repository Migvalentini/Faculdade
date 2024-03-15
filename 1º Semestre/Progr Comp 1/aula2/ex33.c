#include <stdio.h>
#include <math.h>;

main () {
    int horas1, minutos1, horas2, minutos2;

    printf("Digite as horas iniciais: ");
    scanf("%d", &horas1);

    printf("Digite os minutos iniciais: ");
    scanf("%d", &minutos1);

    printf("Digite as horas finais: ");
    scanf("%d", &horas2);

    printf("Digite os minutos: ");
    scanf("%d", &minutos2);

    int diferenca = (horas1*60 + minutos1) - (horas2*60 + minutos2);

    printf("%d horas e %d minutos", (diferenca/60), (diferenca%60)); 
}