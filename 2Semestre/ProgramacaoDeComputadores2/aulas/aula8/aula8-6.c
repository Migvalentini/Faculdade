#include <stdio.h>
#include <math.h>

#define N 3

struct ponto {
    float x,y;
};
typedef struct ponto PONTO;

void lePontos(PONTO p[N]) {
    int x;

    for(x=0; x<N; x++) {
        printf("Digite x: ");
        scanf("%f",&p[x].x);
        printf("Digite y: ");
        scanf("%f",&p[x].y);
    }
}

void escrevePontos(PONTO p[N]) {
    int x;

    for(x=0; x<N; x++) {
        printf("X = %f\n",p[x].x);
        printf("Y = %f\n",p[x].y);
    }
}

float distancia(PONTO p1, PONTO p2) {
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

void maisDistante(PONTO p[N], PONTO *p1, PONTO *p2) {
    int i,j;
    float maior=0,d;

    for(i=0; i<N-1; i++) {
        for(j=i+1; j<N; j++) {
            d=distancia(p[i],p[j]);
            if(d > maior) {
                maior=d;
                *p1 = p[i];
                *p2 = p[j];
            }
        }
    }
}

int main() {
    PONTO p[N];
    PONTO p1, p2;
    lePontos(p);
    escrevePontos(p);
    maisDistante(p,&p1,&p2);
    printf("%.1f %.1f\n",p1.x,p1.y);
    printf("%.1f %.1f\n",p2.x,p2.y);
}