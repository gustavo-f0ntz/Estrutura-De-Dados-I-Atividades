#include "questao3.h"

typedef struct lista {
    float info;
    struct lista *prox;
} Lista;

Lista* cria_lista_encadeada(int n, float *valores){
    Lista *l = (Lista*) malloc(sizeof(Lista));
    l->info = valores[0];
    l->prox = NULL;
    Lista *p = l;
    for(int i = 1; i < n; i++){
        p->prox = (Lista*) malloc(sizeof(Lista));
        p = p->prox;
        p->info = valores[i];
        p->prox = NULL;
    }
    return l;
}

Lista* concatena(Lista* l1, Lista* l2){
    Lista *p = l1;
    while(p->prox != NULL){
        p = p->prox;
    }
    p->prox = l2;
    return l1;
}

void imprime_lista_encadeada(Lista *l){
    Lista *p = l;
    while(p != NULL){
        printf("%.2f ", p->info);
        p = p->prox;
    }
    printf("\n");
}

void libera_lista_encadeada(Lista *l){
    Lista *p = l;
    while(p != NULL){
        Lista *t = p->prox;
        free(p);
        p = t;
    }
    printf("Lista liberada da memoria\n");

}



