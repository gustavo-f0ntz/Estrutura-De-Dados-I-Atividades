#include "questao3.h"

int main(void) {
    float v1[] = {1.3, 2.2, 3.7, 4, 5};
    float v2[] = {6, 7, 8.1, 9.9, 10};
    Lista *l1 = cria_lista_encadeada(5, v1);
    Lista *l2 = cria_lista_encadeada(5, v2);
    Lista *l3 = concatena(l1, l2);
    imprime_lista_encadeada(l3);
    libera_lista_encadeada(l3);
    return 0;
}