#include <stdio.h>

//Estrutura union

typedef union tipodados {
    int meu_int;
    float meu_float;
} dados;

int main(void) {
    dados uniao;
    printf("Digite os dados: \t");
    scanf("%d %f", &uniao.meu_int, &uniao.meu_float);
    printf("Os dados informados: meu_int = %d meu_float=%f", uniao.meu_int, uniao.meu_float);
    return 0;
}