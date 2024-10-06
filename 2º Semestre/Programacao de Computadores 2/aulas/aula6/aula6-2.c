#include <stdio.h>

struct horario {
    int h,m,s;
};
typedef struct horario HORARIO;

HORARIO proximoSegundo(HORARIO a) {
    int total = (a.h*3600)+(a.m*60)+(a.s)+1;
    HORARIO p;

    p.h=(total/3600) % 24;
    total%=3600;
    p.m=total/60;
    p.s=total%=60;

    return p;
}

int main() {
    HORARIO a,p;

    printf("Digite o horario: ");
    scanf("%d:%d:%d",&a.h,&a.m,&a.s);

    p=proximoSegundo(a);

    printf("%d/%d/%d",p.h,p.m,p.s); 
}