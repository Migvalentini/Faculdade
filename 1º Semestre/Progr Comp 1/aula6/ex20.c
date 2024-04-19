#include <stdio.h>

main () {
    int x;
    float peso,altura,imc,pesoMaior,alturaMaior,imcMaior;

    for (x=1;x<=10;x++) {
        printf("Digite o peso da pessoa %f",peso);
        scanf("%f",&peso);
        printf("Digite a altura pessoa %f",altura);
        scanf("%f",&altura);

        imc=peso/(altura*altura);

        printf("Peso: %.2f - Altura: %.2f - IMC: %d",peso,altura,imc);

        if (x==1) {
            pesoMaior=peso;
            alturaMaior=altura;
            imcMaior=imc;
        } else if (imc>imcMaior) {
            pesoMaior=peso;
            alturaMaior=altura;
            imcMaior=imc;
        }
    }

    printf("Maior Peso: %.2f - Maior Altura: %.2f - vIMC: %d",pesoMaior,alturaMaior,imcMaior);
}