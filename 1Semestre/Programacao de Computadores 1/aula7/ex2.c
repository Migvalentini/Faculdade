// Desenvolva um programa em C que solicite ao usuário informar dois valores inteiros correspondentes ao código do candidato ao Senado e sua respectiva votação. 
// O programa em C deverá solicitar estes valores até que o código digitado seja 0. 
// Quando o código digitado for 0, a votação do candidato não deverá ser solicitada. 
// O programa em C deverá mostrar na tela os códigos e as votações dos dois senadores eleitos, ou seja, os dois candidatos com o maior número de votos.

#include <stdio.h>

int main() {
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

    return 0;
}
