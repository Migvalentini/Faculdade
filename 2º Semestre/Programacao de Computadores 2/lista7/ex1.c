// Faça uma função que receba uma data como parâmetro e retorne uma nova estrutura com o dia seguinte. 
// O tipo DATA foi criado a partir de uma estrutura que armazena os valores para dia, mês e ano conforme o código a seguir: 
// struct data {
//      int dia;
//      int mes;
//      int ano;
// };
// typedef struct data DATA;
// A função deve ter o seguinte protótipo:
// DATA proximoDia (DATA diaAtual)
// Cuidado com os anos bissextos (múltiplos de 400 ou múltiplos de 4, mas não múltiplo de 100). 
// O programa de teste deve ler 5 datas e retornar o próximo dia para cada dia após a leitura. 
// Dia informado: 11/01/2023
// Dia seguinte:  12/01/2023
// Dia informado: 28/02/2023
// Dia seguinte:  01/03/2023
// Dia informado: 28/02/2024
// Dia seguinte:  29/02/2023
// Dia informado: 31/12/2022
// Dia seguinte:  01/01/2023
// Dia informado: 31/10/2022
// Dia seguinte:  01/11/2022

#include <stdio.h>

struct data {
    int dia;
    int mes;
    int ano;
};
typedef struct data DATA;

DATA proximoDia (DATA diaAtual) {
    DATA proximoDia=diaAtual;

    if(proximoDia.dia==31&&proximoDia.mes==12) {
        proximoDia.dia=1;
        proximoDia.mes=1;
        proximoDia.ano++;
    } else if (proximoDia.dia==31&&(proximoDia.mes==1||proximoDia.mes==3||proximoDia.mes==5||proximoDia.mes==7||proximoDia.mes==8||proximoDia.mes==10||proximoDia.mes==12)) {
        proximoDia.dia=1;
        proximoDia.mes++;
    } else if (proximoDia.dia==30&&(proximoDia.mes==4||proximoDia.mes==6||proximoDia.mes==9||proximoDia.mes==11)) {
        proximoDia.dia=1;
        proximoDia.mes++;
    } else if (proximoDia.mes==2 && proximoDia.ano%4!=0) {
        proximoDia.dia=1;
        proximoDia.mes=3;
    } else {
        proximoDia.dia++;
    }

    return proximoDia;
}

int main() {
    DATA data,proximaData;
    int x;

    for(x=0; x<5; x++) {
        printf("Digite uma data: ");
        scanf("%d %d %d",&data.dia,&data.mes,&data.ano);

        proximaData=proximoDia(data);

        printf("Dia seguinte: %d/%d/%d\n",proximaData.dia,proximaData.mes,proximaData.ano);
    }

    return 0;
}
    