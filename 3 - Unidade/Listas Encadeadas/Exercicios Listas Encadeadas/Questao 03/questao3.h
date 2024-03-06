#ifndef QUESTAO3_H
#define QUESTAO3_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct lista Lista;
Lista* cria_lista_encadeada(int n, float *valores);
Lista* concatena(Lista* l1, Lista* l2);
void imprime_lista_encadeada(Lista *l);
void libera_lista_encadeada(Lista *l);


#endif

