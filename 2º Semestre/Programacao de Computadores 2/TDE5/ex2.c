// Implemente uma função em C que receba um vetor de estruturas contendo informações sobre transações bancárias. Cada estrutura possui os seguintes campos:
// typedef struct data { 
//         int dia;
//         int mes; 
//         int ano; 
// }DATA;
// typedef struct transacao { 
//         Data data;
//         float valor; 
//         char descricao[100];
// }TRANSACAO;
// Desenvolva uma função chamada filtrarPorData que receba como parâmetros:
//     • Um vetor de estruturas struct TRANSACAO contendo todas as transações bancárias.
//     • O tamanho do vetor.
//     • Uma data inicial e uma data final, representadas por estruturas do tipo DATA
// A função filtrarPorData deverá retornar:
//     • Um novo vetor contendo as transações que estão dentro do intervalo de datas especificado. 
//     • Modificiar um inteiro com o número de transações encontradas dentro do intervalo.
// A função obrigatoriamente deverá seguir o seguinte protótipo:
// TRANSACAO * filtrarPorData(TRANSACAO *transacoes, int n, DATA inicio, DATA fim, int *nt);
// Implemente o programa principal em C que chame a função filtrarPorData para filtrar as transações entre duas datas específicas e imprime as transações retornadas pela função.

#include <stdio.h>
#include <stdlib.h>

typedef struct data { 
    int dia;
    int mes; 
    int ano; 
}DATA;

typedef struct transacao { 
    DATA data;
    float valor; 
    char descricao[100];
}TRANSACAO;

int verificaData(DATA inicio, DATA meio, DATA fim) {
    int i=inicio.ano*10000+inicio.mes*100+inicio.dia;
    int m=meio.ano*10000+meio.mes*100+meio.dia;
    int f=fim.ano*10000+fim.mes*100+fim.dia;
    
    if(i<m && m<f) {
        return 1;
    }

    return 0;
}

TRANSACAO * filtrarPorData(TRANSACAO *transacoes, int n, DATA inicio, DATA fim, int *nt) {
    int x,p=0;
    (*nt)=0;

    for(x=0; x<n; x++) {
        if(verificaData(inicio,transacoes[x].data,fim)) {
            (*nt)++;
        }
    }

    TRANSACAO * filtradas=(TRANSACAO *)malloc((*nt)*sizeof(TRANSACAO));

    if(filtradas==NULL) {
        printf("Erro na alocacao");
        return NULL;
    }
    
    for(x=0; x<n; x++) {
        if(verificaData(inicio,transacoes[x].data,fim)) {
            filtradas[p++]=transacoes[x];
        }
    }

    return filtradas;
}

int main() {
    TRANSACAO transacoes[20] = {
        {{10, 1, 2021}, 150.50, "Compra supermercado"},
        {{25, 2, 2021}, -200.00, "Pagamento aluguel"},
        {{15, 4, 2021}, 50.00, "Deposito"},
        {{7, 6, 2021}, -30.00, "Pagamento de conta de luz"},
        {{22, 8, 2021}, 1000.00, "Salario"},
        {{13, 11, 2021}, -100.00, "Compra de roupas"},
        {{4, 2, 2022}, -75.00, "Manutencao do carro"},
        {{18, 5, 2022}, 200.00, "Reembolso"},
        {{29, 7, 2022}, -50.00, "Jantar fora"},
        {{3, 9, 2022}, 300.00, "Bonus"},
        {{17, 11, 2022}, -150.00, "Compra online"},
        {{12, 1, 2023}, 250.00, "Transferencia recebida"},
        {{26, 3, 2023}, -100.00, "Doacao"},
        {{8, 5, 2023}, -25.00, "Compra de presente"},
        {{19, 6, 2023}, 450.00, "Comissao"},
        {{30, 8, 2023}, -200.00, "Pagamento de academia"},
        {{14, 10, 2023}, 100.00, "Venda de itens usados"},
        {{2, 12, 2023}, -60.00, "Compra de livros"},
        {{21, 1, 2024}, 75.00, "Reembolso de viagem"},
        {{15, 3, 2024}, -120.00, "Pagamento de consulta medica"},
    };
    DATA inicio = {9, 1, 2021};
    DATA fim = {16, 3, 2024};

    int nt,x;

    TRANSACAO *filtradas = filtrarPorData(transacoes,20,inicio,fim,&nt);

    printf("Transacoes Filtradas:\n");
    for(x=0; x<nt; x++) {
        printf("%28s %6.1f %02d/%02d/%02d\n",filtradas[x].descricao,filtradas[x].valor,filtradas[x].data.dia,filtradas[x].data.mes,filtradas[x].data.ano);
    }

    free(filtradas);
}