// Considere um vetor de structs do tipo ALUNO que contenha: a turma, a matrícula e a nota de de um aluno:
// INF1001    9911234-9     7.3
// INF1001    9821234-9     8.7
// CRE0700    9926789-1    10.0
// CRE0700    9010087-2     9.2
// INF1620    8820324-3     3.4
// INF1620    9210478-5     7.2
// INF1620    9020256-8     6.7
// Faça uma função em C, conforme o protótipo
// ALUNO *media (ALUNO *a, int nalunos, char codigo[15], float *media, int *qtd);
// que receba um vetor do tipo ALUNO (o tamanho deve também ser passado como parâmetro) e o código da disciplina e retorne a média das notas obtidas pelos alunos nessa disciplina. 
// A função deverá retornar ainda um vetor alocado dinamicamente com todos os alunos dessa disciplina.  
// Se no vetor não existir alunos da disciplina dada, a função deverá retornar NULL e uma média igual a -1. 
// Faça um programa que leia um valor N aloque um vetor para N structs do tipo ALUNO, faça a leitura dos dados e requisite um código de disciplina. 
// O programa deve chamar a função media() e apresentar a média das notas da respectiva disciplina (ou -1 se a mesma não existir aluno algum). 
// Por exemplo, para a struct dada como exemplo no início desta questão, caso o usuário digitar a disciplina de código CRE0700, a média que deve ser mostrada na tela é 9,6 ((10 + 9,2)/2). 
// No caso de digitar um código de disciplina inexistente, o programa deve mostrar na tela o valor -1.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 7

struct aluno {
    char turma[15];
    char matricula[15];
    float nota;
};
typedef struct aluno ALUNO;

void leAlunos(ALUNO alunos[N]) {
    int x;

    for(x=0; x<N; x++) {
        printf("Digite a turma do aluno %d: ",x+1);
        fflush(stdin);
        gets(alunos[x].turma);
        printf("Digite a matricula do aluno %d: ",x+1);
        fflush(stdin);
        gets(alunos[x].matricula);
        printf("Digite a nota do aluno %d: ",x+1);
        fflush(stdin);
        scanf("%f",&alunos[x].nota);
    }
}

void escreveAlunos(ALUNO alunos[N], int n) {
    int x;

    for(x=0; x<n; x++) {
        printf("Turma: %s - Matricula: %s - Nota: %.1f\n",alunos[x].turma,alunos[x].matricula,alunos[x].nota);
    }
}

ALUNO * media (ALUNO *a, int nalunos, char codigo[15], float *media, int *qtd) {
    int x,k=0;
    float soma=0;
    *qtd=0;

    for(x=0; x<nalunos; x++) {
        if(strcmp(codigo, a[x].turma) == 0) {
            (*qtd)++;
            soma+=a[x].nota;
        }
    }

    if(*qtd==0) {
        *media=-1;
        return NULL;
    }

    *media=soma/(*qtd);

    ALUNO * alunos = (ALUNO *)malloc(*qtd * sizeof(ALUNO));

    if(alunos==NULL) {
        printf("Erro na alocacao");
        return NULL;
    }

    for(x=0; x<nalunos; x++) {
        if(strcmp(codigo, a[x].turma) == 0) {
            alunos[k++]=a[x];
        }
    }

    return alunos;
}

int main() {
    ALUNO alunos[N] = {
        {"INF1001", "9911234-9",  7.3},
        {"INF1001", "9821234-9",  8.7},
        {"CRE0700", "9926789-1", 10.0},
        {"CRE0700", "9010087-2",  9.2},
        {"INF1620", "8820324-3",  3.4},
        {"INF1620", "9210478-5",  7.2},
        {"INF1620", "9020256-8",  6.7},
    };

    //leAlunos(alunos);
    //escreveAlunos(alunos, N);

    int qtd;
    float med;
    ALUNO * alunosDisciplina = media(alunos, N, "CRE0700", &med, &qtd);

    if(med!=-1) {
        printf("A media eh: %.1f\n",med);
        escreveAlunos(alunosDisciplina,qtd);
    } else {
        printf("Nao ha alunos na disciplina");
    }

    free(alunosDisciplina);
}