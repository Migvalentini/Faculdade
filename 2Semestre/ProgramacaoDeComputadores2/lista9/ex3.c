// Fazer uma função que calcule a partir de um horário inicial (hora e minuto) mais uma quantidade de minutos, o horário correspondente ao horario inicial adicionado a essa quantidade de minutos. 
// Protótipo: void calc_horario(int h1, int m1, int qtdmin, int *h2, int *m2)

#include <stdio.h>

void calcHorario(int h1, int m1, int qtdmin, int *h2, int *m2) {
    int total=h1*60+m1+qtdmin;

    *h2=(total/60) % 24;
    *m2=total%60;
}

int main() {
    int h1,m1,qtdmin,h2,m2;

    h1=23;
    m1=59;
    qtdmin=1;

    calcHorario(h1,m1,qtdmin,&h2,&m2);

    printf("Horario Inicial: %d:%d\nHorario Final: %d:%d",h1,m1,h2,m2);
}