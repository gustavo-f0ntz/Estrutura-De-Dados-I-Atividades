#include "quest02.h"


int main (void) {
    Lista *l;
    l = cria_lista();
    l = insere_lista(l, "Ana", 10);
    l = insere_lista(l, "Joao", 20);
    l = insere_lista(l, "Maria", 30);
    l = insere_lista(l, "Jose", 40);
    imprime_lista(l);
    printf("Ultimo: %s \t idade: %d ", ultimo(l)->nome, ultimo(l)->idade);
    return 0;

}
