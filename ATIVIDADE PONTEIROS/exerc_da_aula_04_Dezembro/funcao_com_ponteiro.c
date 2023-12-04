
// void incrementa(int *ponteiro) {
//     (*ponteiro)++;
// }

// int main() {
//     int variavel = 5;
//     incrementa(&variavel);
//     printf("Valor da variavel: %d", *ponteiro);

//     return 0;
// }

// #include <stdio.h>

// int *cria_variavel() {
//     int variavel = 5;
//     return &variavel;

// }

// int main() {
//     int *ponteiro = cria_variavel();
//     printf("Valor da variavel: %d" , *ponteiro);

//     return 0;
// }



/* exemplificando ponteiros...

int *ponteiro_int;
float *ponteiro_float;
char *ponteiro_char;
int **ponteiro_ponteiro_int;

*/



// COMO DECLARAR PONTEIRO PARA UMA FUNÇÃO:

// int incremento (int valor) {
//     return ++valor;
// }

// int (*ponteiro) (int) = incremento;


// IMPLEMENTAÇÃO DE UJMA OPERAÇÃO DE PONTEIROS DE FUNÇÕES :

#include <stdio.h>

int soma (int a, int b) {
    return a + b;
}

int multiplica(int a, int b) {
    return a * b;
}

int divisao (int a, int b) {
    return a / b;
}

int subtracao (int a, int b) {
    return a - b;
}

int calcula (int x, int y, int (*operacao)(int, int)) {
    return (*operacao)(x, y);
}

int main() {
    float resultado = calcula(9, 2, divisao);
    printf("Resultado: %2.f", resultado);
    return 0;
}

