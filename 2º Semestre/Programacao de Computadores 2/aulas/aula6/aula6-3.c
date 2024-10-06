#include <stdio.h>

#define N 5

struct data {
    int d,m,a;
};
typedef struct data DATA;

void leDatas(DATA v[N]) {
    int x;

    for(x=0; x<N; x++) {
        printf("Digite a data: ");
        scanf("%d:%d:%d",&v[x].d,&v[x].m,&v[x].a);
    }
}

void ordenaDatas(DATA v[N]) {
    int j,i=0;
    DATA aux;

    for(i=0; i<N-1; i++) {
        for(j=0; j<N-1-i; j++) {
            if(v[j].a>v[j+1].a) {
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            } else if (v[j].a==v[j+1].a && v[j].m>v[j+1].m) {
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            } else if (v[j].a==v[j+1].a && v[j].m==v[j+1].m && v[j].d>v[j+1].d) {
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
}

void escreveDatas(DATA v[N]) {
    int x;

    for(x=0; x<N; x++) {
        printf("Data: %d:%d:%d\n",v[x].d,v[x].m,v[x].a);
    }
}

int main() {
    DATA v[N];

    leDatas(v);
    ordenaDatas(v);
    escreveDatas(v);
}