// Desenvolva um programa que solicite ao usuário dois horários no formato de 24 horas (faixa de 00:00 a 23:59), que representem respectivamente a hora e minuto inicial e final de um evento. 
// O programa deve permitir que o usuário informe o horário através de duas informações independentes: hora e minuto. 
// Após a digitação, o computador deverá calcular a duração do evento em horas e minutos. 
// Exemplo: se o usuário digitar como horário inicial os valores 20 (horas), 30 (minutos) e 22 (horas) e 15 (minutos), o programa deve mostrar na tela 1 hora e 45 minutos. 
// Para efetuar este cálculo, é necessário:
// converter os dois horários em minutos e calcular a quantidade total de minutos: (22*60 + 15) – (20*60 + 30) =  1335 – 1230 = 105 minutos
// transformar a quantidade total de minutos em horas e minutos, utilizando os operadores de divisão que fornecem a parte inteira do quociente e o resto da divisão

#include <stdio.h>
#include <math.h>

int main() {
    int horas1, minutos1, horas2, minutos2;

    printf("Digite as horas iniciais: ");
    scanf("%d", &horas1);

    printf("Digite os minutos iniciais: ");
    scanf("%d", &minutos1);

    printf("Digite as horas finais: ");
    scanf("%d", &horas2);

    printf("Digite os minutos finais: ");
    scanf("%d", &minutos2);

    int diferenca = (horas2*60 + minutos2) - (horas1*60 + minutos1);

    printf("%d horas e %d minutos", (diferenca/60), (diferenca%60));

    return 0;
}
