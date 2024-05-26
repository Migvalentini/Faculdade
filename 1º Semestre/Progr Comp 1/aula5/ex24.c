// Desenvolva um programa que leia três valores inteiros que correspondam ao dia, mês e ano e mostre na tela data correspondente ao dia seguinte. 
// Lembrem-se que abril, junho, setembro e novembro tem 30 dias, fevereiro tem 28 (29 em ano bissexto) e todos os outros meses tem 31 dias. 
// Para saber se um ano é bissexto: 
// Se o ano for divisível por 4, vá para a etapa 2. Caso contrário, vá para a etapa 5.
// Se o ano for divisível por 100, vá para a etapa 3. Caso contrário, vá para a etapa 4.
// Se o ano for divisível por 400, vá para a etapa 4. Caso contrário, vá para a etapa 5.
// O ano é bissexto (ela tem 366 dias).
// O ano não é um ano bissexto (ela tem 365 dias).
// Exemplo: Se o usuário digitar dia=28, mês=2  e ano=2016, o programa deverá mostrar na tela a data do próximo dia: 29/02/2016.   

#include <stdio.h> 

int main() {
    int dia,mes,ano;

    printf("Digite o dia: ");
    scanf("%d",&dia);
    printf("Digite o mes: ");
    scanf("%d",&mes);
    printf("Digite o ano: ");
    scanf("%d",&ano);

    dia++;

    if (dia == 32 && (mes==1||mes==3||mes==5||mes==7||mes==8||mes==10)) {
        dia=1;
        mes++;
    } else if (dia == 31 && (mes==4||mes==6||mes==9||mes==11)) {
        dia=1;
        mes++;
    } else if (dia == 30 && mes==2) {
        dia=1;
        mes++;
    } else if (dia == 29 && mes==2 && ano%4==0) {
        dia=1;
        mes++;
    } else if (dia == 29 && mes==2 && ano%4!=0) {
        dia=1;
        mes++;
    } else if (dia == 32 && mes==12) {
        dia=1;
        mes=1;
        ano++;
    }
    
    printf("Dia seguinte: %d/%d/%d",dia,mes,ano);

    return 0;
}
