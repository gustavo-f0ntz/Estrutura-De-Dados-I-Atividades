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
