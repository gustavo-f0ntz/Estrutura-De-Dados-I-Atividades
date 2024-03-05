#include "quest01.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    Lista* l;
    l = NULL;
    l = insere(l, 100);
    l = insere(l, 90);
    l = insere(l, 80);
    l = insere(l, 70);
    l = insere(l, 60);
    l = insere(l, 50);
    l = insere(l, 40);
    l = insere(l, 30);
    l = insere(l, 20);
    l = insere(l, 10);
    imprime(l);
    printf("Numero de nos da lista que possuem o campo info com valores maiores do que 50: %d\n", maiores(l, 50));
    return 0;

}

