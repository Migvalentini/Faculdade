#include <stdio.h>

void preencheMatriz(int calendario[12][6][7],int diaSemana, int mes, int ano) {
    int dias[12]={31,28,31,30,31,30,31,31,30,31,30,31},m,s,d,x,y;

    if(ano%4==0) {
        dias[1]=29;
    }

    d=diaSemana;
    for(x=mes; x<=12; x++) {
        m=x-1,s=0;

        for(y=1; y<=dias[x-1]; y++) {
            calendario[m][s][d]=y;
            d++;
            if(d==7) {
                d=0;
                s++;
            }
        }
    }
}

void escreveMes(int matriz[12][6][7]) {
    int x,y,z;

    for(x=0;x<12;x++) {
        printf("Mes %d\n",x+1);
        printf(" D  S  T  Q  Q  S  S\n");
        for(y=0; y<6; y++) {
            for(z=0; z<7; z++) {
                printf(matriz[x][y][z] == 0 ? "   " : "%2d ", matriz[x][y][z]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

int main() {
    int calendario[12][6][7]={0},diaSemana,mes,ano;

    printf("0 - Domingo\n1 - Segunda\n2 - Terca\n3 - Quarta\n4 - Quinta\n5 - Sexta\n6 - Sabado\n");
    printf("Digite o dia da semana inicial: ");
    scanf("%d",&diaSemana);
    printf("Digite o mes: ");
    scanf("%d",&mes);
    printf("Digite o ano: ");
    scanf("%d",&ano);

    preencheMatriz(calendario, diaSemana, mes, ano);
    escreveMes(calendario);

    return 0;
}