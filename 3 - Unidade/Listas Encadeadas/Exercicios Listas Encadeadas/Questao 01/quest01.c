#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "quest01.h"

/*Considere listas encadeadas de valores inteiros e implemente uma função para
retornar o número de nós da lista que possuem o campo info com valores
maiores do que n. Essa função deve obedecer ao protótipo: int maiores(Lista* l,
int n)
*/

typedef struct lista{
    int info;
    struct lista *prox;
}Lista;

// funcao para adicionar elementos na lista
Lista* insere(Lista* l, int i){
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = l;
    return novo;
}

// funcao para imprimir a lista
void imprime(Lista* l){
    Lista* p;
    for(p=l; p!=NULL; p=p->prox){
        printf("info = %d\n", p->info);
    }
}

// funcao para retornar o numero de nos da lista que possuem o campo info com valores maiores do que n
int maiores(Lista* l, int n){
    int cont = 0;
    Lista* p;
    for(p=l; p!=NULL; p=p->prox){
        if(p->info > n){
            cont++;
        }
    }
    return cont;
}
