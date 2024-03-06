#include "questao04.h"

typedef struct lista {
    int info;
    struct lista *prox;
} Lista;


Lista *insere(Lista *l, int i) {
    Lista *novo = (Lista *)malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = l;
    return novo;
}

void imprime(Lista *l) {
    Lista *p;
    for (p = l; p != NULL; p = p->prox) {
        printf("info = %d\n", p->info);
    }
}

Lista *retira_n(Lista *l, int n) {
    Lista *p = l;
    Lista *ant = NULL;
    while (p != NULL) {
        if (p->info == n) {
            if (ant == NULL) {
                l = p->prox;
            } else {
                ant->prox = p->prox;
            }
            free(p);
            p = ant;
        }
        ant = p;
        p = p->prox;
    }
    return l;
}
