#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 30

typedef struct atividade {
    char nome[N];
    char local[N];
    int quantidade;
    struct inscrito *inscritos;
    struct atividade *prox;
} Atividade;

typedef struct estudante {
    int codigo;
    char nome[N];
    char curso[N];
    struct estudante *prox;
    Atividade *atividade;
} Estudante;

typedef struct inscrito {
    Estudante *estudante;
    struct inscrito *prox;
} Inscrito;

typedef struct headerestudante {
    Estudante *ultimoInserido;
    Estudante *estudantes;
} HeaderEstudante;

typedef struct headeragenda {
    char data[N];
    char horario[N];
    struct atividade *atividades;
} HeaderAgenda;

HeaderAgenda headeragenda;
HeaderEstudante headerestudante;

void inicializar() {
    headerestudante.ultimoInserido = NULL;
    headerestudante.estudantes = NULL;

    strcpy(headeragenda.data, "25/09/2025");
    strcpy(headeragenda.horario, "10h");
    headeragenda.atividades = NULL;
}

void inserirEstudante(char nomeEstudante[N], char cursoEstudante[N]) {
    Estudante *novo;

    novo = (Estudante*)malloc(sizeof(Estudante));
    strcpy(novo->nome, nomeEstudante);
    strcpy(novo->curso, cursoEstudante);
    novo->prox = NULL;
    novo->atividade = NULL;
    
    if(headerestudante.estudantes==NULL) {
        novo->codigo = 0;
        headerestudante.estudantes = novo;
        headerestudante.ultimoInserido = novo;
    } else if(strcmp(novo->nome, headerestudante.estudantes->nome) <= 0) {
        novo->prox = headerestudante.estudantes;
        novo->codigo = headerestudante.ultimoInserido->codigo + 1;
        headerestudante.estudantes = novo;
        headerestudante.ultimoInserido = novo;
    } else {
        Estudante *aux = headerestudante.estudantes, *ant = headerestudante.estudantes;

        while (aux != NULL && strcmp(aux->nome, novo->nome) < 0 ) {
            ant = aux;
            aux = aux->prox;
        }
        ant->prox = novo;
        novo->prox = aux;
        novo->codigo = headerestudante.ultimoInserido->codigo + 1;
        headerestudante.ultimoInserido = novo;
    }
    printf("Estudante '%s' cadastrado com sucesso!\n", nomeEstudante);
    printf("----------------------------------------------------------------------------\n");
}

// Recebe o nome do estudante e remove sua inscrição
int removerInscrito(char nomeEstudante[N]) {
    Estudante *auxE = headerestudante.estudantes;

    while (auxE != NULL && strcmp(auxE->nome, nomeEstudante) != 0)
    {
        auxE = auxE->prox;
    }

    if (auxE == NULL) {
        printf("\nErro: Inscrito '%s' nao encontrado.\n", nomeEstudante);
        return 0;
    }

    if (auxE->atividade == NULL) {
        printf("\n'%s' nao esta inscrito em nenhuma atividade.\n", nomeEstudante);
        return 0;
    }

    auxE->atividade->quantidade--;

    Inscrito *auxI = auxE->atividade->inscritos;
    Inscrito *antI = NULL;

    while (auxI != NULL && strcmp(auxI->estudante->nome, nomeEstudante) != 0) {
        antI = auxI;
        auxI = auxI->prox;
    }

    if (antI == NULL) {
        auxE->atividade->inscritos = auxI->prox;
    } else {
        antI->prox = auxI->prox;
    }

    auxE->atividade = NULL;

    free(auxI);
    printf("\nInscrito '%s' removido(a) com sucesso.\n", nomeEstudante);
    printf("----------------------------------------------------------------------------\n");
    return 1;
}

void removerEstudante(int codigoEstudante, char nomeEstudante[N]) {
    int removido = removerInscrito(nomeEstudante);

    if(removido) {
        if(headerestudante.estudantes == NULL) { //Lista vazia
            return;
        }
        if(headerestudante.estudantes->prox == NULL && (headerestudante.estudantes->codigo == codigoEstudante || strcmp(headerestudante.estudantes->nome, nomeEstudante) == 0)) { //Primeiro e Único
            free(headerestudante.estudantes);
            headerestudante.estudantes = NULL;
            removido = 1;
        } else if(headerestudante.estudantes->codigo == codigoEstudante || strcmp(headerestudante.estudantes->nome, nomeEstudante) == 0) { //Primeiro, mas não único
            Estudante *aux = headerestudante.estudantes;
            headerestudante.estudantes = headerestudante.estudantes->prox;
            free(aux);
            removido = 1;
        } else { //Remove Meio ou Último
            Estudante *aux = headerestudante.estudantes, *ant = headerestudante.estudantes;
            while (aux != NULL && strcmp(aux->nome, nomeEstudante) != 0 && aux->codigo != codigoEstudante) { 
                ant = aux;
                aux = aux->prox;
            }
            if (aux != NULL) {
                ant->prox = aux->prox;
                free(aux);
                removido = 1;
            }
        }
        printf("Estudante '%s' removido com sucesso!\n", nomeEstudante);
    } else {
        printf("Erro: Estudante '%s' nao encontrado!\n", nomeEstudante);
    }
    printf("----------------------------------------------------------------------------\n");
}

void consultarTodosEstudantes() {
    Estudante *aux = headerestudante.estudantes;

    printf("\n\n--- Lista de Estudantes ---\n");
    while(aux != NULL) {
        printf("Cod: %2d | Nome: %30s | Curso: %30s\n", aux->codigo, aux->nome, aux->curso);
        aux = aux->prox;
    }
    
    printf("----------------------------------------------------------------------------\n");
}

void inserirAtividade(char nomeAtividade[N], char localAtividade[N]) {
    Atividade *novo;

    novo = (Atividade*)malloc(sizeof(Atividade));
    strcpy(novo->nome, nomeAtividade);
    strcpy(novo->local, localAtividade);
    novo->quantidade = 0;
    novo->inscritos = NULL;
    
    if(headeragenda.atividades==NULL) {
        novo->prox = NULL;
    } else {
        novo->prox = headeragenda.atividades;
    }
    headeragenda.atividades = novo;
    printf("Atividade '%s' cadastrada com sucesso!\n", nomeAtividade);
    printf("----------------------------------------------------------------------------\n");
}

void removerAtividade(char nomeAtividade[N]) {
    if(headeragenda.atividades == NULL) { //Lista vazia
        return;
    }
    if(headeragenda.atividades->prox == NULL && strcmp(headeragenda.atividades->nome, nomeAtividade) == 0) { //Primeiro e Único
        free(headeragenda.atividades);
        headeragenda.atividades = NULL;
    } else if(strcmp(headeragenda.atividades->nome, nomeAtividade) == 0) { //Primeiro, mas não único
        Atividade *aux=headeragenda.atividades;
        headeragenda.atividades = headeragenda.atividades->prox;
        free(aux);
    } else { //Remove Meio ou Último
        Atividade *aux=headeragenda.atividades, *ant=headeragenda.atividades;
        while (aux != NULL && strcmp(aux->nome, nomeAtividade) != 0) { 
            ant = aux;
            aux = aux->prox;
        }
        if (aux != NULL) {
            ant->prox = aux->prox;
            free(aux);
        }
    }
    printf("Atividade '%s' removida com sucesso!\n", nomeAtividade);
    printf("----------------------------------------------------------------------------\n");
}

void consultarTodasAtividades() {
    Atividade *aux = headeragenda.atividades;
 
    printf("\n\n--- Lista de Atividades ---\n");
    while(aux != NULL) {
        printf("Nome: %30s | Local: %30s\n", aux->nome, aux->local);
        aux = aux->prox;
    }
    printf("----------------------------------------------------------------------------\n");
}

void consultarAtividade(char nomeAtividade[N]) {
    Atividade *aux = headeragenda.atividades;
    int encontrada = 0;

    printf("\n\n--- Detalhes da Atividade '%s' ---\n", nomeAtividade);
    while(aux != NULL) {
        if(strcmp(aux->nome, nomeAtividade) == 0) {
            printf("Nome: %30s | Local: %30s\n", aux->nome, aux->local);
            encontrada = 1;
            break;
        }
        aux = aux->prox;
    }
    if (!encontrada) {
        printf("Atividade '%s' nao encontrada.\n", nomeAtividade);
    }
    printf("----------------------------------------------------------------------------\n");
}

void inscreverParticipante(char nomeAtividade[N], int codigoEstudante) {
    Estudante *auxE = headerestudante.estudantes;
    Atividade *auxA = headeragenda.atividades;
    int existeEstudante = 0, existeAtividade = 0;

    while(auxE != NULL) {
        if(auxE->codigo == codigoEstudante) {
            existeEstudante = 1;
            break;
        }
        auxE = auxE->prox;
    }
    while(auxA != NULL) {
        if(strcmp(auxA->nome, nomeAtividade) == 0) {
            existeAtividade = 1;
            break;
        }
        auxA = auxA->prox;
    }

    if(existeEstudante && existeAtividade && auxE->atividade == NULL) {
        Inscrito *novo = (Inscrito*)malloc(sizeof(Inscrito));
        novo->estudante = auxE;
        novo->prox = auxA->inscritos;
        auxA->inscritos = novo;
        (auxA->quantidade)++;

        auxE->atividade = auxA;

        printf("\nParticipante '%s' inserido(a) com sucesso na atividade '%s'!\n", auxE->nome, auxA->nome);
    }
    else if (auxE != NULL && auxE->atividade != NULL && (existeEstudante || existeAtividade)) {
        printf("\nErro: Estudante %s ja inscrito na atividade %s!\n", auxE->nome, auxA->nome);
    }

    if(!existeEstudante) {
        printf("\nErro: Estudante de codigo %d nao encontrado.\n", codigoEstudante);
    } 
    if(!existeAtividade) {
        printf("\nErro: Atividade %s nao encontrada.\n", nomeAtividade);
    }
    printf("----------------------------------------------------------------------------\n");
}

void consultarQuantidades() {
    Atividade *aux = headeragenda.atividades;

    printf("\n\n--- Quantidade de Inscritos por Atividade ---\n");
    while(aux != NULL) {
        printf("Atividade: %30s | Quantidade de inscritos: %d\n", aux->nome, aux->quantidade);
        aux = aux->prox;
    }
    printf("----------------------------------------------------------------------------\n");
}

// Recebe o nome de uma atividade e exibe todos os seus participantes
void consultarParticipantes(char nomeAtividade[N]) {
    Atividade *auxA = headeragenda.atividades;

    while (auxA != NULL && strcmp(auxA->nome, nomeAtividade) != 0) {
        auxA = auxA->prox;
    }

    printf("\n\n--- Participantes da Atividade '%s' ---\n", nomeAtividade);
    if (auxA != NULL) {
        printf("Local: %s\n", auxA->local);
        
        Inscrito *auxI = auxA->inscritos;
        if (auxI == NULL) {
            printf("Nenhum participante inscrito.\n");
        } else {
            while (auxI != NULL) {
                printf("Cod: %2d | Nome: %30s | Curso: %30s\n", auxI->estudante->codigo, auxI->estudante->nome, auxI->estudante->curso);
                auxI = auxI->prox;
            }
        }
    } else {
        printf("Atividade '%s' nao encontrada.\n", nomeAtividade);
    }
    printf("----------------------------------------------------------------------------\n");
}

// Exibe todos os participantes de cada uma das atividades
void consultarInscritos() {
    Atividade *auxA = headeragenda.atividades;

    printf("\n\n--- Lista de Inscritos por Atividade ---\n");
    if (auxA == NULL) {
        printf("Nenhuma atividade cadastrada.\n");
    } else {
        while (auxA != NULL) {
            printf("\nAtividade: %s (%d %s)\n", auxA->nome, auxA->quantidade, auxA->quantidade >= 2 ? "inscritos" : "inscrito");
            
            Inscrito *auxI = auxA->inscritos;
            if (auxI == NULL) {
                printf("- Nenhum participante inscrito.\n");
            } else {
                while(auxI != NULL) {
                    printf("- %s\n", auxI->estudante->nome);
                    auxI = auxI->prox;
                }
            }
            auxA = auxA->prox;
        }
    }
    printf("----------------------------------------------------------------------------\n");
}

// Recebe o nome de um estudante e exibe a atividade que ele está inscrito 
void consultarAtividadePorEstudante(char nomeEstudante[N]) {
    Estudante *estudanteEncontrado = NULL;
    Estudante *auxE = headerestudante.estudantes;
    
    while(auxE != NULL) {
        if(strcmp(auxE->nome, nomeEstudante) == 0) {
            estudanteEncontrado = auxE;
            break;
        }
        auxE = auxE->prox;
    }

    if(estudanteEncontrado == NULL) {
        printf("Erro: Estudante '%s' nao encontrado.\n", nomeEstudante);
        printf("----------------------------------------------------------------------------\n");
        return;
    }

    printf("\n--- Atividades de %s ---\n", nomeEstudante);

    if(estudanteEncontrado->atividade != NULL) {
        printf("O estudante '%s' esta inscrito na atividade:\n", estudanteEncontrado->nome);
        printf("- Nome: %s | Local: %s\n", estudanteEncontrado->atividade->nome, estudanteEncontrado->atividade->local);
    } else {
        printf("O estudante '%s' nao esta inscrito em nenhuma atividade.\n", estudanteEncontrado->nome);
    }
    printf("----------------------------------------------------------------------------\n");
}

// Recebe o nome de algum curso dos estudantes e exibe as atividades que há ao menos 1 inscrito
void consultarAtividadesPorCurso(char nomeCurso[N]) {
    Atividade* auxA = headeragenda.atividades;
    int listou = 0;

    printf("\n-- Atividades com pelo menos 1 Estudante de '%s' --\n\n", nomeCurso);

    while (auxA != NULL) {
        int encontrou = 0;

        Inscrito* auxI = auxA->inscritos;
        while (auxI != NULL) {
            if (strcasecmp(nomeCurso, auxI->estudante->curso) == 0) {
                encontrou = 1;
                listou = 1;
                break;
            }
            auxI = auxI->prox;
        }

        if (encontrou) {
            printf("%s\n", auxA->nome);
        }
        
        auxA = auxA->prox;
    }

    if (!listou) {
        printf("Nao ha inscritos de '%s' em nenhuma atividade\n", nomeCurso);
    }

    printf("----------------------------------------------------------------------------\n");
}

int main() {    

    inicializar();

    inserirEstudante("Ana", "Nutricao");
    inserirEstudante("Miguel", "Engenharia de Sotware");
    inserirEstudante("Pedro", "Administracao");
    inserirEstudante("Gustavo", "Gastronomia");
    inserirEstudante("Douglas", "Medicina");
    inserirEstudante("Marcio", "Medicina");

    consultarTodosEstudantes();

    inserirAtividade("Jogos de Cartas", "Sala de Jogos");
    inserirAtividade("Livros de Ficcao", "Biblioteca");
    inserirAtividade("Tenis de Mesa", "Ginasio");
    inserirAtividade("Esports", "www.site.com");

    inscreverParticipante("Esports", 2);
    inscreverParticipante("Esports", 4);
    inscreverParticipante("Tenis de Mesa", 5);
    inscreverParticipante("Jogos de Cartas", 0);
    inscreverParticipante("Esports", 5);

    consultarInscritos();

    removerEstudante(0, "Ana");

    consultarInscritos();
    consultarQuantidades();
    
    consultarAtividadesPorCurso("Medicina");
    
    removerAtividade("Jogos de Cartas");
    
    consultarInscritos();
    
    consultarTodasAtividades();

    consultarParticipantes("Livros de Ficcao");

    consultarAtividadePorEstudante("Pedro");

    return 0;
}
