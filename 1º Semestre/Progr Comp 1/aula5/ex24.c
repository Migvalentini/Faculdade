#include <stdio.h> 

main () {
    int dia,mes,ano;

    printf("Digite o dia: ");
    scanf("%d",&dia);
    printf("Digite o mes: ");
    scanf("%d",&mes);
    printf("Digite o ano: ");
    scanf("%d",&ano);

    dia++;
    
    printf("Dia seguinte: %d/%d/%d\n",dia,mes,ano);
    if (dia == 32 && (mes==1||mes==3||mes==5||mes==7||mes==8||mes==10)) {
        dia=1;
        mes++;
        printf("Dia seguinte: %d/%d/%d",dia,mes,ano);
    }
    if (dia == 32 && (mes==12)) {
        dia=1;
        mes=1;
        ano++;
        printf("Dia seguinte: %d/%d/%d",dia,mes,ano);
    }
}