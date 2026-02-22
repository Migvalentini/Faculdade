#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 30

typedef struct estudante {
    char nome[N];
    struct estudante *esq;
    struct estudante *dir;
} Estudante;

typedef struct listaestudante {
    char nome[N];
    int turma;
    struct listaestudante *prox;
} ListaEstudante;

typedef struct turma {
    int codigo;
    int quantidadeEstudantes;
    Estudante *estudantes;
    struct turma *prox;
} Turma;

Turma *turmas = NULL; 
ListaEstudante *listaEstudantes = NULL;

Estudante* novoEstudante(char nome[N]) {
    Estudante *novo = (Estudante*)malloc(sizeof(Estudante));

    strcpy(novo->nome, nome);
    novo->esq = NULL;
    novo->dir = NULL;

    return novo;
}

Turma* novaTurma(int codigoTurma) {
    Turma *novo = (Turma*)malloc(sizeof(Turma));

    novo->codigo = codigoTurma;
    novo->estudantes = NULL;
    novo->prox = NULL;
    novo->quantidadeEstudantes = 0;

    return novo;
}

void inserirTurma(int codigoTurma) {
    Turma *novo = novaTurma(codigoTurma);

    if (turmas == NULL) {
        turmas = novo;
    }
    else if (codigoTurma < turmas->codigo) {
        novo->prox = turmas;
        turmas = novo;
    }
    else {
        Turma *ant = turmas;
        Turma *aux = turmas->prox;
    
        while (aux != NULL && aux->codigo < codigoTurma) {
            ant = aux;
            aux = aux->prox;
        }
    
        if (ant->codigo == codigoTurma || (aux != NULL && aux->codigo == codigoTurma)) {
            printf("Erro: turma %d ja cadastrada!\n", codigoTurma);
            free(novo);
            return;
        }
    
        ant->prox = novo;
        novo->prox = aux;
    
    }
    
    printf("Turma '%d' cadastrada com sucesso!\n", codigoTurma);
}

Estudante* inserirEstudanteRecursivo(Estudante* estudantes, char nome[N], int* inseriu) {
    if (estudantes == NULL) {
        *inseriu = 1;
        Estudante *novo = novoEstudante(nome);
        return novo;
    }

    if (strcmp(nome, estudantes->nome) < 0) {
        estudantes->esq = inserirEstudanteRecursivo(estudantes->esq, nome, inseriu);
    }
    else if (strcmp(nome, estudantes->nome) > 0) {
        estudantes->dir = inserirEstudanteRecursivo(estudantes->dir, nome, inseriu);
    }
    else {
        printf("Erro: nome '%s' ja existe nesta turma!\n", nome);
        *inseriu = 0;
    }

    return estudantes;
}

void inserirEstudante(int codigoTurma, char nome[N]) {
    Turma *aux = turmas;
    
    while(aux != NULL && aux->codigo != codigoTurma) {
        aux = aux->prox;
    }

    if (aux == NULL) {
        printf("Turma nao encontrada!\n");
        return;
    }

    int inseriu;
    aux->estudantes = inserirEstudanteRecursivo(aux->estudantes, nome, &inseriu);

    if (inseriu) {
        printf("Estudante '%s' incluido com sucesso na turma %d!\n", nome, codigoTurma);
        (aux->quantidadeEstudantes)++;
    }
}

void inserirListaEstudante(char nome[N], int codigoTurma) {
    ListaEstudante *novo = (ListaEstudante*)malloc(sizeof(ListaEstudante));
    strcpy(novo->nome, nome);

    novo->turma = codigoTurma;
    novo->prox = NULL;

    if (listaEstudantes == NULL || strcmp(nome, listaEstudantes->nome) < 0) {
        novo->prox = listaEstudantes;
        listaEstudantes = novo;
        return;
    }

    ListaEstudante *ant = listaEstudantes;
    ListaEstudante *aux = listaEstudantes->prox;

    while (aux != NULL && strcmp(aux->nome, nome) < 0) {
        ant = aux;
        aux = aux->prox;
    }

    ant->prox = novo;
    novo->prox = aux;
}

void centralEstudanteAlfabetico(Estudante* a) {
    if (a != NULL) {
        centralEstudanteAlfabetico(a->esq);
        printf("- %s ", a->nome);
        centralEstudanteAlfabetico(a->dir);
    }
}

void centralEstudanteInverso(Estudante* a) {
    if (a != NULL) {
        centralEstudanteInverso(a->dir);
        printf("- %s \n", a->nome);
        centralEstudanteInverso(a->esq);
    }
}

void preencherListaEstudantes(Estudante *a, int codigoTurma) {
    if (a != NULL) {
        preencherListaEstudantes(a->esq, codigoTurma);
        inserirListaEstudante(a->nome, codigoTurma);
        preencherListaEstudantes(a->dir, codigoTurma);
    }
}

void preFixadoEstudante(Estudante* a) {
    if (a != NULL) {
        printf("- %s \n", a->nome);
        preFixadoEstudante(a->esq);
        preFixadoEstudante(a->dir);
    }
}

void exibeTurma(int codigoTurma, int ordenacao) {
    Turma *auxT = turmas;
    
    while(auxT != NULL && auxT->codigo != codigoTurma) {        
        auxT = auxT->prox;
    }

    if (auxT != NULL) {
        if (ordenacao == 1) {
            printf("\n--- Lista de Estudantes da Turma %d - Ordem Alfabetica ---\n", auxT->codigo);
            centralEstudanteAlfabetico(auxT->estudantes);    
        }
        else if (ordenacao == 2) {
            printf("\n--- Lista de Estudantes da Turma %d - Ordem Alfabetica Inversa ---\n", auxT->codigo);
            centralEstudanteInverso(auxT->estudantes);   
        }
    }
    else {
        printf("Turma %d nao encontrada\n", codigoTurma);
    }
    printf("\n----------------------------------------------------------------------------\n");
}

void exibeTurmaPre(int codigoTurma) {
    Turma *auxT = turmas;
    
    while(auxT != NULL && auxT->codigo != codigoTurma) {        
        auxT = auxT->prox;
    }

    if (auxT != NULL) {
        printf("\n\n--- Lista de Estudantes da Turma %d - Pre Fixado ---\n", auxT->codigo);
    
        preFixadoEstudante(auxT->estudantes);    
    }
    else {
        printf("Turma %d nao encontrada\n", codigoTurma);
    }
    printf("----------------------------------------------------------------------------\n");
}

void contaEstudantes() {
    Turma *auxT = turmas;
    
    printf("\n\n--- Contagem de Estudantes por Turma ---\n");
    while(auxT != NULL) {
        printf("Codigo: %2d - Total de Estudantes: %d\n", auxT->codigo, auxT->quantidadeEstudantes);

        auxT = auxT->prox;
    }
    
    printf("----------------------------------------------------------------------------\n");
}

void maiorTurma() {
    Turma *auxT = turmas;
    int maior = turmas->quantidadeEstudantes;
    
    printf("\n\n--- Turma com Mais Estudantes ---\n");
    while(auxT != NULL) {
        if (auxT->quantidadeEstudantes > maior) {
            maior = auxT->quantidadeEstudantes;
        }
        
        auxT = auxT->prox;
    }

    auxT = turmas;

    while(auxT != NULL) {
        if (auxT->quantidadeEstudantes == maior) {
            printf("Maior turma: Cod: %2d Total de Estudantes: %d\n", auxT->codigo, auxT->quantidadeEstudantes);
        }
        
        auxT = auxT->prox;
    }
    
    printf("----------------------------------------------------------------------------\n");
}

void menorTurma() {
    Turma *auxT = turmas;
    int menor = turmas->quantidadeEstudantes;
    
    printf("\n\n--- Turma com Menos Estudantes ---\n");
    while(auxT != NULL) {
        if (auxT->quantidadeEstudantes < menor) {
            menor = auxT->quantidadeEstudantes;
        }
        
        auxT = auxT->prox;
    }

    auxT = turmas;

    while(auxT != NULL) {
        if (auxT->quantidadeEstudantes == menor) {
            printf("Menor turma: Cod: %2d Total de Estudantes: %d\n", auxT->codigo, auxT->quantidadeEstudantes);
        }
        
        auxT = auxT->prox;
    }
    
    printf("----------------------------------------------------------------------------\n");
}

void exibeTodosEstudantes() {
    listaEstudantes = NULL;
    Turma *auxT = turmas;

    while (auxT != NULL) {
        preencherListaEstudantes(auxT->estudantes, auxT->codigo);
        auxT = auxT->prox;
    }

    printf("\n\n--- TODOS OS ESTUDANTES (ALFABETICO) ---\n");

    ListaEstudante *auxLE = listaEstudantes;

    while (auxLE != NULL) {
        printf("(Turma %d) %s\n", auxLE->turma, auxLE->nome);
        auxLE = auxLE->prox;
    }
}

void nomesRepetidos() {
    listaEstudantes = NULL;
    Turma *auxT = turmas;

    while (auxT != NULL) {
        preencherListaEstudantes(auxT->estudantes, auxT->codigo);
        auxT = auxT->prox;
    }

    printf("\n--- NOMES REPETIDOS ---\n");

    ListaEstudante *auxLE = listaEstudantes;

    while (auxLE != NULL && auxLE->prox != NULL) {
        if (strcmp(auxLE->nome, auxLE->prox->nome) == 0) {
            printf("%s\n", auxLE->nome);

            while (auxLE->prox != NULL && strcmp(auxLE->nome, auxLE->prox->nome) == 0) {
                auxLE = auxLE->prox;
            }
        }
        auxLE = auxLE->prox;
    }
}

void removerEstudante(int codigoTurma, char nome[N]) {
    Turma* auxT = turmas;

    while(auxT != NULL && auxT->codigo != codigoTurma) {
        auxT = auxT->prox;
    } 

    if (auxT == NULL) {
        printf("Turma nao encontrada!\n");
        return;
    }

    Estudante* auxE = auxT->estudantes;
    Estudante* auxPai = NULL;
    int lado = 0; // 0 => esquerda 1 => direita

    while (auxE != NULL && strcmp(nome, auxE->nome) != 0)
    {
        auxPai = auxE;
        if (strcmp(nome, auxE->nome) < 0) {
            auxE = auxE->esq;
            lado = 0;
        }
        else {
            auxE = auxE->dir;
            lado = 1;
        }
    }

    if (auxE == NULL) {
        printf("Estudante nao encontrado!\n");
        return;
    }
    
    char nomeRemovido[N];
    strcpy(nomeRemovido, nome);

    // Exclui uma folha
    if (auxE->esq == NULL && auxE->dir == NULL) {
        free(auxE);
        if (auxPai != NULL && !lado) auxPai->esq = NULL;
        else if (auxPai != NULL && lado) auxPai->dir = NULL;
        else auxT->estudantes = NULL;
    }
    // Exclui nodo com um filho a direita
    else if (auxE->esq == NULL && auxE->dir != NULL) {
        if (auxPai != NULL && !lado) auxPai->esq = auxE->dir;
        else if (auxPai != NULL && lado) auxPai->dir = auxE->dir;
        else auxT->estudantes = auxE->dir;

        free(auxE);
    }
    // Exclui nodo com um filho a esquerda
    else if (auxE->esq != NULL && auxE->dir == NULL) {
        if (auxPai != NULL && !lado) auxPai->esq = auxE->esq;
        else if (auxPai != NULL && lado) auxPai->dir = auxE->esq;
        else auxT->estudantes = auxE->esq;

        free(auxE);
    }
    else {
        Estudante* maior = auxE->esq;
        Estudante* maiorPai = auxE;
        int flag = 0;

        while (maior->dir != NULL) {
            maiorPai = maior;
            maior = maior->dir;
            flag = 1;
        }
        
        if (auxPai != NULL && !lado) auxPai->esq = maior;
        else if (auxPai != NULL && lado) auxPai->dir = maior;
        else auxT->estudantes = maior;

        maior->dir = auxE->dir;
        if(flag) {
            maior->esq = auxE->esq;
            maiorPai->dir = NULL;
        }
        else {
            maiorPai->esq = NULL;
        }

        free(auxE);
    }

    (auxT->quantidadeEstudantes)--;
    printf("Estudante '%s' removido da Turma %d com sucesso.\n", nomeRemovido, codigoTurma);
}

void removerTodosEstudantesTurma(Estudante* estudante, int codigoTurma) {
    if (estudante != NULL) {
        removerTodosEstudantesTurma(estudante->esq, codigoTurma);
        removerTodosEstudantesTurma(estudante->dir, codigoTurma);

        removerEstudante(codigoTurma, estudante->nome);
    }
} 

void removerTurma(int codigoTurma) {
    Turma* auxT = turmas;
    Turma* ant = NULL;

    while (auxT != NULL && auxT->codigo != codigoTurma) {
        ant = auxT;
        auxT = auxT->prox;
    }

    if (auxT == NULL) {
        printf("Turma nao encontrada!\n");
        return;
    }

    removerTodosEstudantesTurma(auxT->estudantes, codigoTurma);

    if (ant == NULL && auxT->prox == NULL) {
        turmas = NULL;
        free(auxT);
    }
    else if (ant == NULL) {
        turmas = turmas->prox;
        free(auxT);
    }
    else {
        ant->prox = auxT->prox;
        free(auxT);
    }
}

void exibirTurmas() {
    Turma *auxT = turmas;

    printf("\n---- LISTA DE TURMAS ----\n");

    while(auxT != NULL) {
        exibeTurma(auxT->codigo, 1);

        auxT = auxT->prox;
    }
}

int main() {
    inserirTurma(103);
    inserirTurma(201);
    inserirTurma(305);
    inserirTurma(305);
    inserirTurma(202);
    inserirTurma(105);

    inserirEstudante(103, "Joao");
    inserirEstudante(103, "Ana");
    inserirEstudante(103, "Mauro");
    inserirEstudante(103, "Clarice");
    inserirEstudante(103, "Luiz");
    inserirEstudante(103, "Samuel");
    inserirEstudante(103, "Diego");
    
    inserirEstudante(201, "Carlos");
    inserirEstudante(201, "Maria");
    inserirEstudante(201, "Beatriz");
    inserirEstudante(201, "Lucas");
    inserirEstudante(201, "Vitor");
    inserirEstudante(201, "Denise");
    
    inserirEstudante(305, "Maria");
    inserirEstudante(305, "Eduardo");
    inserirEstudante(305, "Paulo");
    inserirEstudante(305, "Cintia");
    inserirEstudante(305, "Marisa");
    inserirEstudante(305, "Alvaro");
    inserirEstudante(305, "Sandra");
    
    inserirEstudante(202, "Patricia");
    inserirEstudante(202, "Anelise");
    inserirEstudante(202, "Douglas");
    inserirEstudante(202, "Diego");
    inserirEstudante(202, "Marcos");
    inserirEstudante(202, "Vania");
    
    inserirEstudante(105, "Eduardo");
    inserirEstudante(105, "Lucas");
    inserirEstudante(105, "Maria");
    inserirEstudante(105, "Vinicius");
    inserirEstudante(105, "Felipe");
    inserirEstudante(105, "Clara");

    //exibeTurma(103, 1);
    //exibeTurma(103, 2);
    //exibeTurmaPre(103);

    //contaEstudantes();

    //menorTurma();
    //maiorTurma();

    //exibirTurmas();
    //removerTurma(103);
    //exibirTurmas();

    //exibeTodosEstudantes();
    //nomesRepetidos();

    //exibeTurma(305, 1);
    //removerEstudante(305, "Eduardo");
    //exibeTurma(305, 1);
    //inserirEstudante(305, "Eduardo");
    //exibeTurma(305, 1);
}