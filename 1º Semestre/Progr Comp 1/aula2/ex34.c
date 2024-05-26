// Desenvolva um programa que solicite ao usuário um horário (hora, minuto, segundo) no formato de 24 horas (faixa de 00:00:00 a 23:59:59) e mostre na tela o horário correspondente ao segundo seguinte. 
// O programa deve permitir que o usuário informe o horário através de três informações independentes: hora, minuto e segundo. 
// O horário calculado deve ser mostrado na tela no formato de 24 horas.
// Exemplo: se o usuário digitar como horário inicial os valores 15 (horas), 59 (minutos) e 49 (segundos), o programa deve mostrar na tela 15 horas 59 minutos e 50 segundos. 
// Para efetuar este cálculo, é necessário:
// converter a quantidade de horas e minutos do horário informado para segundos:  15*3600 + 59*60 +49 =  57.589 segundos
// somar 1 s quantidade de segundos transcorridos:  57.589 segundos +  1 segundo = 57.590 segundos
// transformar o horário total em segundos para horas e minutos, utilizando os operadores de divisão que fornecem a parte inteira do quociente e o resto da divisão

#include <stdio.h>
#include <math.h>

int main() {
    int horas, minutos, segundos;

    printf("Digite as horas iniciais: ");
    scanf("%d",&horas);

    printf("Digite os minutos iniciais: ");
    scanf("%d",&minutos);

    printf("Digite os segundos iniciais: ");
    scanf("%d",&segundos);

    int proximoSegundo = horas * 3600 + minutos * 60 + segundos + 1;

    printf("%d horas, %d minutos e %d segundos", proximoSegundo / 3600, (proximoSegundo % 3600) / 60 , (proximoSegundo % 3600) % 60);

    return 0;
}