// Desenvolva um programa que solicite ao usuário informar diversos dados relativos a um colaborador de uma empresa: 
// o código do colaborador, o número de horas trabalhadas, o valor que recebe por hora, o número de filhos com idade inferior a 14 anos, a idade, o tempo de serviço do colaborador e o valor do salário família por filho. 
// Com base nos dados informados pelo usuário, o programa deve calcular:
// - o salário bruto:  número de horas trabalhadas * o valor que recebe por hora.
// - Salário família: número de filhos com idade inferior a 14 anos * valor do salário família por filho 
// - Desconto do INSS : 
//      até 1556.94 - 8%
//      de 1556.95 até 2594.92 - 9%
//      a partir de 2594.93 - 11%
// - o IR ( Imposto de Renda) como segue:
//      Até 1903.98 – 0%
//      De 1903.99 até 2826.65 – 7,5%
//      De 2826.66 até 3751.05 – 15%
//      De 3751.06 até 4664.68 – 22.5%
//      Acima de 4664.68 – 27.5%
// - o adicional como segue:
//      se idade superior a 40 anos ADIC = 2% do salário bruto;
//      se tempo de serviço superior a 15 anos ADIC = 3.5% do salário bruto;
//      se tempo de serviço < 15 anos mas superior a 5 anos e idade maior do que 30 anos então ADIC = 1.5% do salário bruto.
// - Salário líquido: salário bruto – descontos + adicionais
// No final o programa deve mostrar o número do colaborador, o salário bruto, total de descontos, adicional e salário líquido.

#include <stdio.h>

int main() {
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
    printf("Digite o tempo de servico do colaborador: ");
    scanf("%d",&tempoServico);
    printf("Digite o valor do salario familia por filho: ");
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

    adicional+=salarioFamilia;
    
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

    return 0;
}
