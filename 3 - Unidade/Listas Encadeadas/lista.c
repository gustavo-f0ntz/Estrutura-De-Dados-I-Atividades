#include <stdio.h>
#include "lista.h"
#include <stdlib.h>

typedef struct lista {
    int info;
    struct lista * proximo_elemento;
} Lista;

/* funcao de criação: retorna uma lista vazia*/

Lista * lst_cria(void){
    return NULL;
}

/* funcao de insercao no inicio: retorna a lista atualizada */
Lista * lst_insere(Lista * l, int i){
    Lista * novo = (Lista *) malloc(sizeof(Lista));
    novo->info = i;
    novo->proximo_elemento = l;
    return novo;
}

Lista * insere_elementos(Lista * lista, int valor){
    //Aloca memoria para um novo no
    Lista * novo_no = (Lista *) malloc(sizeof(Lista));
    if (novo_no == NULL){
        exit(1);
    }
    //Adiciona o valor no campo info
    novo_no->info = valor;
    novo_no->proximo_elemento = lista;
    return novo_no;

}

// funcao para imprimir os elementos da lista
void lst_imprime(Lista * l){
    Lista * contador;
    for (contador = l; contador != NULL; contador = contador->proximo_elemento){
        printf("info = %d\n", contador->info);
    }
}

// funcao para verificar se a lista esta vazia
int lst_vazia(Lista * l){
    return (l == NULL);
}

// funcao para encontrar um elemento na lista
Lista * lst_busca(Lista * l, int v){
    Lista * contador;
    for (contador = l; contador != NULL; contador = contador->proximo_elemento){
        if (contador->info == v){
            return contador;
        }
    }
    return NULL;
}

// funcao para remover um elemento da lista
Lista * lst_retira(Lista * l, int v){
    Lista * anterior = NULL;
    Lista * p = l;
    while (p != NULL && p->info != v){
        anterior = p;
        p = p->proximo_elemento;
    }
    if (p == NULL){
        return l;
    }
    if (anterior == NULL){
        l = p->proximo_elemento;
    } else {
        anterior->proximo_elemento = p->proximo_elemento;
    }
    free(p);
    return l;
}

// funcao para retornar o numero de nos da lista que possuem o campo info com valores maiores que n
int maiores(Lista * l, int n){
    Lista * contador;
    int contador_maiores = 0;
    for (contador = l; contador != NULL; contador = contador->proximo_elemento){
        if (contador->info > n){
            contador_maiores++;
        }
    }
    return contador_maiores;
}

// funcao para liberar a memoria alocada para a lista
void lst_libera(Lista * l){
    Lista * p = l;
    while (p != NULL){
        Lista * t = p->proximo_elemento;
        free(p);
        p = t;
    }
}