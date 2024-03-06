#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

int main (void) {
    Lista * lista_encadeada = lst_cria();
    // Inserindo o valor 3 na lista encadeada
    lista_encadeada = insere_elementos(lista_encadeada, 3);
    lista_encadeada = insere_elementos(lista_encadeada, 5);
    lista_encadeada = insere_elementos(lista_encadeada, 7);
    lista_encadeada = insere_elementos(lista_encadeada, 9);
    lst_imprime(lista_encadeada);
    // verificar se a lista esta vazia
    if (lst_vazia(lista_encadeada)){
        printf("Lista vazia\n");
    } else {
        printf("Lista nao vazia\n");
    }
    // buscar um elemento na lista
    Lista * elemento = lst_busca(lista_encadeada, 10);
    if (elemento == NULL){
        printf("Elemento nao encontrado\n");
    } else {
        printf("Elemento encontrado\n");
    }
    // retirar um elemento da lista
    lista_encadeada = lst_retira(lista_encadeada, 5);
    lst_imprime(lista_encadeada);
    


    return 0;

}