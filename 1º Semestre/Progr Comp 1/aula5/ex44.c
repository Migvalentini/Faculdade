#include <stdio.h>

main () {
    int codigo,horasTrabalhadas,valorHora,filhos,idade,tempoServico,valorSalario,salarioBruto,salarioLiquido,salarioFamilia,descontoINSS,impostoRenda,adicional=0;

    printf("Digite o codigo do colaborador: ");
    scanf("%d",&codigo);
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%d",&horasTrabalhadas);
    printf("Digite o valor que recebe por hora: ");
    scanf("%d",&valorHora);
    printf("Digite o numero de filhos com idade inferior a 14 anos: ");
    scanf("%d",&filhos);
    printf("Digite a idade: ");
    scanf("%d",&idade);
    printf("Digite o tempo de serviço do colaborador: ");
    scanf("%d",&tempoServico);
    printf("Digite o valor do salário família por filho: ");
    scanf("%d",&valorSalario);

    salarioBruto = horasTrabalhadas * valorHora;
    salarioFamilia = filhos * valorSalario;

    if (salarioBruto < 1556.94) {
        descontoINSS = salarioBruto * 0.08;
    } else if (salarioBruto > 1556.95 && salarioBruto < 2594.92) {
        descontoINSS = salarioBruto * 0.09;
    } else if (salarioBruto > 2594.93) {
        descontoINSS = salarioBruto * 0.11;
    }

    if (salarioBruto >= 1903.98 && salarioBruto < 2826.65) {
        impostoRenda = salarioBruto * 0.075;
    } else if (salarioBruto >= 2826.66 && salarioBruto < 3751.05) {
        impostoRenda = salarioBruto * 0.15;
    } else if (salarioBruto >= 3751.06 && salarioBruto < 4664.68) {
        impostoRenda = salarioBruto * 0.225;
    } else if (salarioBruto >= 4664.68) {
        impostoRenda = salarioBruto * 0.275;
    }

    if (idade > 40) {
        adicional = adicional + salarioBruto * 0.02;
    }
    if (tempoServico > 15) {
        adicional = adicional + salarioBruto * 0.035;
    }
    if (tempoServico < 15 && tempoServico > 5 && idade > 30) {
        adicional = adicional + salarioBruto * 0.15;
    }

    salarioLiquido = salarioBruto - descontoINSS - impostoRenda + adicional;

    printf("\nNumero do colaborador: %d\nSalario Bruto: %d\nTotal de Descontos: %d\nAdicional: %d\nSalario Liquido: %d",codigo,salarioBruto,descontoINSS+impostoRenda,adicional,salarioLiquido);
}
