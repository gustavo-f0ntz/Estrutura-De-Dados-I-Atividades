#include <stdio.h>
#include <stdlib.h>

// Enum para TipoProduto
typedef enum {
    ALIMENTO,
    BEBIDA,
    ELETRONICO
} TipoProduto;

// Union para Tipo
typedef union {
    char alimento[50];
    char bebida[50];
    char eletronico[50];
} Tipo;

// Struct para Produto
typedef struct {
    char nome[50];
    float preco;
    Tipo tipo;
    TipoProduto tipoProduto;
} Produto;

// Função para ler os dados de um produto
void lerDados(Produto *p) {
    printf("Digite o nome: ");
    scanf(" %[^\n]", p->nome);

    printf("Digite o preco: ");
    scanf("%f", &(p->preco));

    printf("Digite o tipo (0 para alimento, 1 para bebida, 2 para eletronico): ");
    scanf("%d", (int*)&(p->tipoProduto));

    switch (p->tipoProduto) {
        case ALIMENTO:
            printf("Digite o nome do alimento: ");
            scanf(" %[^\n]", p->tipo.alimento);
            break;
        case BEBIDA:
            printf("Digite o nome da bebida: ");
            scanf(" %[^\n]", p->tipo.bebida);
            break;
        case ELETRONICO:
            printf("Digite o nome do eletronico: ");
            scanf(" %[^\n]", p->tipo.eletronico);
            break;
    }
}

// Função para imprimir os dados de um produto
void imprimirDados(Produto *p) {
    printf("Nome: %s\n", p->nome);
    printf("Preco: %.2f\n", p->preco);

    switch (p->tipoProduto) {
        case ALIMENTO:
            printf("Tipo: Alimento - %s\n", p->tipo.alimento);
            break;
        case BEBIDA:
            printf("Tipo: Bebida - %s\n", p->tipo.bebida);
            break;
        case ELETRONICO:
            printf("Tipo: Eletronico - %s\n", p->tipo.eletronico);
            break;
    }
}

int main() {
    Produto *produto = (Produto*) malloc(sizeof(Produto));

    lerDados(produto);
    imprimirDados(produto);

    free(produto);
    return 0;
}