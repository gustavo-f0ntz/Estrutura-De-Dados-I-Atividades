#include <stdio.h>

// Enum para mês
typedef enum {
    JANEIRO = 1, FEVEREIRO, MARCO, ABRIL, MAIO, JUNHO,
    JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO, DEZEMBRO
} Mes;

// Struct para Data
typedef struct {
    int dia;
    Mes mes;
    int ano;
} Data;

// Função para ler a data
void lerData(Data *d) {
    printf("Digite o dia: ");
    scanf("%d", &(d->dia));

    printf("Digite o mes (1 para Janeiro, 2 para Fevereiro, ..., 12 para Dezembro): ");
    scanf("%d", (int*)&(d->mes)); // para ler o mês como um inteiro e não como um Mes

    

    printf("Digite o ano: ");
    scanf("%d", &(d->ano));
}

// Função para imprimir a data
void imprimirData(Data *d) {
     printf("Data: %02d/%02d/%04d\n", d->dia, d->mes, d->ano); 
}

int main() {
    Data data;

    lerData(&data);
    imprimirData(&data);

    return 0;
}