// Fazer uma função que calcule a partir de um horário inicial (hora e minuto) mais uma quantidade de minutos, o horário correspondente ao horario inicial adicionado a essa quantidade de minutos.
// Protótipo: void calc_horario(int h1, int m1, int qtdmin, int *h2, int *m2)

#include <stdio.h>

void calc_horario(int h1, int m1, int qtdmin, int *h2, int *m2) {
    int total = h1*60 + m1 + qtdmin;

    *h2 = (total/60) % 24;
    *m2 = total%60;
}

int main() {
    int h1,m1,h2,m2,qtdmin;

    printf("Digite a hora inicial: ");
    scanf("%d %d",&h1,&m1);

    printf("Digite a quantidade de minutos: ");
    scanf("%d",&qtdmin);

    calc_horario(h1,m1,qtdmin,&h2,&m2);

    printf("Hora final: %d:%d\n",h2,m2);
}