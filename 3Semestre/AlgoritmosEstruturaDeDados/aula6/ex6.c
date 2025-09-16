//Uma operadora possui uma impressora, compartilhada por seus usuários. 
//Essa impressora tem uma fila de impressão, para a qual os usuários enviam suas solicitações de impressão. 
//Os usuários são classificados em 3 categorias: prioridade máxima (0), prioridade normal (1) e prioridade baixa (2). 
//Para solicitar uma impressão, é utilizada a operação imprime(prioridade, trabalho), e a impressão ocorre através da operação impressao( ). 
//A cada 2 impressões de prioridade máxima, a impressora imprime uma solicitação de prioridade normal. 
//A cada 3 impressões de prioridade normal, a impressora imprime uma impressão de prioridade baixa. Implemente o controle da impressora.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct element {
    char job[50];
    struct element *prox;
}; typedef struct element Element;

Element *maxPriority;
Element *normalPriority;
Element *lowPriority;
int maxTimes=0, normalTimes=0;

void writeQueues() {
    Element *aux = maxPriority;
    
    printf("\nMax Queue Priority:\n-> ");
    while(aux != NULL) {
        printf("%s - ",aux->job);
        aux = aux->prox;
    }

    aux = normalPriority;
    
    printf("\nNormal Queue Priority:\n-> ");
    while(aux != NULL) {
        printf("%s - ",aux->job);
        aux = aux->prox;
    }

    aux = lowPriority;
    
    printf("\nLow Queue Priority:\n-> ");
    while(aux != NULL) {
        printf("%s - ",aux->job);
        aux = aux->prox;
    }

    printf("\n------------\n");
}

void print(int priority, char job[50]) {
    Element *new;
    new = (Element*)malloc(sizeof(Element));
    strcpy(new->job, job);

    if(priority==0) {
        if(maxPriority == NULL) {
            new->prox = NULL;
        } else {
            new->prox = maxPriority;
        }
        maxPriority = new;
    } else if(priority==1) {
        if(normalPriority == NULL) { 
            new->prox = NULL;
        } else {
            new->prox = normalPriority;
        }
        normalPriority = new;
    } else if(priority==2) {
        if(lowPriority == NULL) { 
            new->prox = NULL;
        } else {
            new->prox = lowPriority;
        }
        lowPriority = new;
    }
}

int dequeueMaxPriority() {
    if (maxPriority == NULL) {
        return 0;
    }

    Element *aux = maxPriority;
    Element *prev = NULL;

    while (aux->prox != NULL) {
        prev = aux;
        aux = aux->prox;
    }

    if (prev == NULL) {
        maxPriority = NULL;
    } else {
        prev->prox = NULL;
    }

    printf("Printed: %s\n", aux->job);
    free(aux);
    maxTimes++;

    return 1;
}

int dequeueNormalPriority() {
    if (normalPriority == NULL) {
        return 0;
    }

    Element *aux = normalPriority;
    Element *prev = NULL;

    while (aux->prox != NULL) {
        prev = aux;
        aux = aux->prox;
    }

    if (prev == NULL) {
        normalPriority = NULL;
    } else {
        prev->prox = NULL;
    }

    printf("Printed: %s\n", aux->job);
    free(aux);

    normalTimes++;
    maxTimes = 0;

    return 1;
}

int dequeueLowPriority() {
    if (lowPriority == NULL) {
        return 0;
    }

    Element *aux = lowPriority;
    Element *prev = NULL;

    while (aux->prox != NULL) {
        prev = aux;
        aux = aux->prox;
    }

    if (prev == NULL) {
        lowPriority = NULL;
    } else {
        prev->prox = NULL;
    }

    printf("Printed: %s\n", aux->job);
    free(aux);

    maxTimes = 0;
    normalTimes = 0;

    return 1;
}

void printing() {
    if (maxPriority == NULL && normalPriority == NULL && lowPriority == NULL) {
        printf("No jobs to print.\n");
        return;
    }

    if (maxPriority != NULL && maxTimes < 2) {
        dequeueMaxPriority();
        return;
    }

    if (normalPriority != NULL && (maxTimes >= 2 || maxPriority == NULL)) {
        dequeueNormalPriority();
        return;
    }

    if (lowPriority != NULL && (normalTimes >= 3 || (maxPriority == NULL && normalPriority == NULL))) {
        dequeueLowPriority();
        return;
    }

    if (maxPriority != NULL) {
        dequeueMaxPriority();
    } else if (normalPriority != NULL) {
        dequeueNormalPriority();
    } else if (lowPriority != NULL) {
        dequeueLowPriority();
    }
}


int main() {
    maxPriority = NULL;
    normalPriority = NULL;
    lowPriority = NULL;

    print(0, "A");
    print(0, "B");
    print(0, "C");
    print(0, "D");
    print(1, "E");
    print(1, "F");
    print(1, "G");
    print(1, "H");
    print(2, "I");
    print(2, "J");
    print(2, "K");
    print(2, "L");
    writeQueues();
    
    printing();
    printing();
    printing();
    printing();
    printing();
    printing();
    printing();
    printing();
    printing();
    printing();
    printing();
    printing();

    writeQueues();

    return 0;
}
