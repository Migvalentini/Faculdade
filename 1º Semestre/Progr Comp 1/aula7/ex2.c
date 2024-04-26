#include <stdio.h>

main () {
    int candidato,votacao,cod1=0,cod2=0,vot1=0,vot2=0;

    printf("Digite o codigo do candidato: ");
    scanf("%d",&candidato);
    cod1=candidato;

    while (candidato!=0) {
        printf("Digite a votacao: ");
        scanf("%d",&votacao);

        printf("\nCod 1: %d Vota 1: %d Cod 2: %dVot 2: %d\n",cod1,cod2,vot1,vot2);

        if (votacao > vot1) {
            cod2=cod1;
            vot2=vot1;
            vot1 = votacao;
            cod1 = candidato;
        } else if (votacao > vot2) {
            vot2 = votacao;
            cod1 = candidato;
        }

        printf("\nCodigo do Primeiro Candidato: %d\nVotacao do Primeiro Candidato: %d\nCodigo do Segundo Candidato: %d\nVotacao do Segundo Candidato: %d\n",cod1,cod2,vot1,vot2);
    }

    printf("\nCodigo do Primeiro Candidato: %d\nVotacao do Primeiro Candidato: %d\nCodigo do Segundo Candidato: %d\nVotacao do Segundo Candidato: %d\n",cod1,cod2,vot1,vot2);
}
