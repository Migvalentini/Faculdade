#include <stdio.h>;
#include <math.h>;

main(){
    int horas, minutos, segundos;

    printf("Digite as horas iniciais: ");
    scanf("%d",&horas);

    printf("Digite os minutos iniciais: ");
    scanf("%d",&minutos);

    printf("Digite as horas finais: ");
    scanf("%d",&segundos);

    int proximoSegundo = horas * 3600 + minutos * 60 + segundos + 1;

    printf("%d horas, %d minutos e %d segundos", proximoSegundo/3600, (proximoSegundo/3600 / 60), proximoSegundo % 60); 
}