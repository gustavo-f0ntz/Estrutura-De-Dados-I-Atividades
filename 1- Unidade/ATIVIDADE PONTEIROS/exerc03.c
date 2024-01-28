#include <stdio.h>

int main(void) {
    int a, b, c, d; // Declaração de variáveis inteiras a, b, c, d
    int *p1; // Declaração do ponteiro p1
    int *p2 = &a; // Declaração do ponteiro p2 e atribuição do endereço de a a p2
    int *p3 = &c; // Declaração do ponteiro p3 e atribuição do endereço de c a p3

    p1 = p2; // Atribuição do valor de p2 (endereço de a) a p1
    *p2 = 10; // Atribuição do valor 10 a a através do ponteiro p2
    b = 20; // Atribuição do valor 20 a b

    int **pp; // Declaração do ponteiro para ponteiro pp
    pp = &p1; // Atribuição do endereço de p1 a pp
    *p3 = **pp; // Atribuição do valor apontado por p1 (que é a) a c através do ponteiro p3

    int *p4 = &d; // Declaração do ponteiro p4 e atribuição do endereço de d a p4
    *p4 = b + (*p1)++; // Atribuição da soma de b e a (incrementado após a operação) a d através do ponteiro p4

    printf("%d\t%d\t%d\t%d\n", a, b, c, d); // Aqui vamos imprimir os valores a,b,c,d.

    return 0; 
}

// OS VALORES FINAIS IMPRESSOS SÃO: 11, 20, 10, 30.


