// Desenvolva um programa que solicite ao usuário digitar um tempo em horas, minutos e segundos. 
// Após a digitação, o computador deverá converter este tempo para segundos e mostrar esta informação na tela do computador. 
// O programa deve permitir que o usuário informe os horários através de três informações independentes: hora, minuto e segundo. 
// Exemplo: Se o usuário digitar 30 horas, 20 minutos e 40 segundos, o programa deverá mostrar na tela 109.240 segundos (30 * 3600 + 20 * 60 + 40).

#include <stdio.h>

int main() {
    int horas, minutos, segundos;

    printf("Digite as horas: ");
    scanf("%d", &horas);

    printf("Digite os minutos: ");
    scanf("%d", &minutos);

    printf("Digite os segundos: ");
    scanf("%d", &segundos);

    printf("Total de Segundos: %d", horas * 3600 + minutos * 60 + segundos);

    return 0;
}
