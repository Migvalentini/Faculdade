#include <stdio.h>

int main () {
    int candidato,votacao,primeiroCandidato=0,segundoCandidato=0,primeiroVotacao=0,segundoVotacao=0;

    while (1) {
        printf("Digite o codigo do candidato: ");
        scanf("%d",&candidato);

        if (candidato == 0) {
            break;
        }

        printf("Digite a votacao: ");
        scanf("%d",&votacao);

        printf("\nCodigo do Primeiro Candidato: %dVotacao do Primeiro Candidato: %dCodigo do Segundo Candidato: %dVotacao do Segundo Candidato: %d\n",primeiroCandidato,segundoCandidato,primeiroVotacao,segundoVotacao);

        if (votacao > primeiroVotacao) {
            segundoCandidato=primeiroCandidato;
            segundoVotacao=primeiroVotacao;
            primeiroVotacao = votacao;
            primeiroCandidato = candidato;
        }
        if (votacao > segundoVotacao) {
            segundoVotacao = votacao;
            primeiroCandidato = candidato;
        }

        printf("\nCodigo do Primeiro Candidato: %d\nVotacao do Primeiro Candidato: %d\nCodigo do Segundo Candidato: %d\nVotacao do Segundo Candidato: %d\n",primeiroCandidato,segundoCandidato,primeiroVotacao,segundoVotacao);
    }

    printf("\nCodigo do Primeiro Candidato: %d\nVotacao do Primeiro Candidato: %d\nCodigo do Segundo Candidato: %d\nVotacao do Segundo Candidato: %d\n",primeiroCandidato,segundoCandidato,primeiroVotacao,segundoVotacao);

    return 0;
}
