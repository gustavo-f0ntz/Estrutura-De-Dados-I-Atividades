#include <stdio.h>

// Enum para gênero
typedef enum {
    MASCULINO,
    FEMININO
} Genero;

// Struct para Pessoa
typedef struct {
    char nome[50];
    int idade;
    Genero genero;
} Pessoa;

// Função para ler os dados de uma pessoa
void lerDados(Pessoa *p) {
    printf("Digite o nome: ");
    scanf(" %[^\n]", p->nome);

    printf("Digite a idade: ");
    scanf("%d", &(p->idade));

    printf("Digite o gênero (0 para masculino, 1 para feminino): ");
    scanf("%d", (int*)&(p->genero));
}

// Função para imprimir os dados de uma pessoa
void imprimirDados(Pessoa *p) {
    printf("Nome: %s \n", p->nome);
    printf("Idade: %d \n", p->idade);
    printf("Gênero: %s \n", p->genero == MASCULINO ? "Masculino" : "Feminino");
}

int main() {
    Pessoa pessoa;

    lerDados(&pessoa);
    imprimirDados(&pessoa);

    return 0;
}