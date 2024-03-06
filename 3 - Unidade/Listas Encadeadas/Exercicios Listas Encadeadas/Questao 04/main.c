#include "questao04.h"

int main(void) {
    // inserir elementos na lista
    Lista *l = NULL;
    l = insere(l, 1);
    l = insere(l, 2);
    l = insere(l, 3);
    l = insere(l, 4);
    l = insere(l, 5);

    // imprimir a lista
    printf("Lista original:\n");
    imprime(l);

    // retirando o elemento 2 e imprimindo o resto da lista atualizada
    l = retira_n(l, 2);
    printf("Lista resultante:\n");
    imprime(l);

}