#include "quest02.h"

typedef struct lista{
    char nome[50];
    int idade;
    struct lista *prox;
}Lista;

Lista *cria_lista(){
    return NULL;
}

Lista *insere_lista(Lista *l, char nome[], int idade){
    Lista *novo = (Lista *)malloc(sizeof(Lista));
    strcpy(novo->nome, nome);
    novo->idade = idade;
    novo->prox = l;
    return novo;
}


void imprime_lista(Lista *l){
    Lista *p;

    while(p != NULL){
        p = p -> prox;
    }
    
}


Lista *ultimo(Lista *l){
    Lista *p;
    for(p = l; p->prox != NULL; p = p->prox);
    return p;
}