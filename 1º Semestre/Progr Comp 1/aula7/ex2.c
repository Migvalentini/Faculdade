#include <stdio.h>

main () {
    int candidato,votacao,cod1=0,cod2=0,vot1=0,vot2=0;

    printf("Digite o codigo do candidato: ");
    scanf("%d",&candidato);
    cod1=candidato;

    while (candidato!=0) {
        printf("Digite a votacao: ");
        scanf("%d",&votacao);

        if (votacao > vot1) {
            cod2=cod1;
            vot2=vot1;
            vot1 = votacao;
            cod1 = candidato;
        } else if (votacao > vot2) {
            vot2 = votacao;
            cod2 = candidato;
        }

        printf("Digite o codigo do candidato: ");
        scanf("%d",&candidato);
    }

    printf("\nCodigo do Primeiro Candidato: %d\nVotacao do Primeiro Candidato: %d\nCodigo do Segundo Candidato: %d\nVotacao do Segundo Candidato: %d\n",cod1,vot1,cod2,vot2);
}
