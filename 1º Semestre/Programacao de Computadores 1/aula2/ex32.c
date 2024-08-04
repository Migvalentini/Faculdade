// Desenvolva um programa que solicite ao usuário digitar dois horários (hora, minuto, segundo) no formato de 24 horas (faixa de 00:00:00 a 23:59:59), 
// considerando que os horários informados estejam no mesmo dia. 
// O programa deve permitir que o usuário informe os horários através de três informações independentes: hora, minuto e segundo. 
// Após a digitação, o computador deverá calcular quantos segundos transcorreram entre estes dois horários e mostrar o resultado na tela do computador. 
// O programa deve considerar que o primeiro horário informado é sempre menor que o segundo horário.
// Exemplo: se o usuário digitar como horário inicial os valores 9 (horas), 36 (minutos) e 45 (segundos) e como horário final os valores 22 (horas), 15 (minutos) e 7 (segundos), 
// o programa deve mostrar na tela 1777 segundos (quantidade de segundos transcorridos). 
// Para efetuar este cálculo, é necessário converter a quantidade de horas e minutos em segundos: (22*3600 + 15*60 +7) – (9*3600 + 36*60 + 45) = 80107 – 34605= 45.502 segundos.

#include <stdio.h>

int main() {
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

    printf("Diferenca de Segundos: %d", (horas2 * 3600 + minutos2 * 60 + segundos2) - (horas1 * 3600 + minutos1 * 60 + segundos1));

    return 0;
}
