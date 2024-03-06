#ifndef QUEST02_H
#define QUEST02_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista{
    char nome[50];
    int idade;
    struct lista *prox;
}Lista;

Lista *cria_lista();
Lista *insere_lista(Lista *l, char nome[], int idade);
void imprime_lista(Lista *l);
Lista *ultimo(Lista *l);

#endif
