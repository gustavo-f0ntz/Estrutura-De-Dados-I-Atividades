#include <stdio.h>

// Definição da estrutura Ingresso
typedef struct {
    float preco;
    char local[50];
    char atracao[100]; // Aumentei o tamanho do campo atracao para acomodar múltiplas palavras
} Ingresso;

// Função para limpar o buffer de entrada
void limpa_buffer() {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

// Função para preencher os campos da estrutura Ingresso com valores fornecidos pelo usuário
void preenche(Ingresso* i) {
    printf("Digite o preco do ingresso: ");
    scanf("%f", &i->preco);
    limpa_buffer(); // Limpa o buffer de entrada
    printf("Digite o local do evento: ");
    fgets(i->local, 50, stdin); // Utiliza fgets para aceitar espaços
    i->local[strcspn(i->local, "\n")] = 0; // Remove a quebra de linha do final
    printf("Digite a atracao do evento: ");
    fgets(i->atracao, 100, stdin); // Utiliza fgets para aceitar espaços
    i->atracao[strcspn(i->atracao, "\n")] = 0; // Remove a quebra de linha do final
}

// Função para imprimir os valores dos campos da estrutura Ingresso
void imprime(Ingresso* i) {
    printf("Preco do ingresso: %.2f\n", i->preco);
    printf("Local do evento: %s\n", i->local);
    printf("Atracao do evento: %s\n", i->atracao);
}

// Função para atualizar o preço do ingresso para um novo valor
void altera_preco(Ingresso* i, float valor) {
    i->preco = valor;
}

// Função para imprimir o evento de ingresso mais barato e mais caro
void imprime_menor_maior_preco(int n, Ingresso* vet) {
    float menor_preco = vet[0].preco;
    float maior_preco = vet[0].preco;
    int evento_menor_preco = 0;
    int evento_maior_preco = 0;

    for (int i = 1; i < n; i++) {
        if (vet[i].preco < menor_preco) {
            menor_preco = vet[i].preco;
            evento_menor_preco = i;
        }
        if (vet[i].preco > maior_preco) {
            maior_preco = vet[i].preco;
            evento_maior_preco = i;
        }
    }

    printf("Evento de ingresso mais barato:\n");
    imprime(&vet[evento_menor_preco]);
    printf("\nEvento de ingresso mais caro:\n");
    imprime(&vet[evento_maior_preco]);
}

// Função main para testar as funções
int main() {
    Ingresso evento1, evento2;
    
    printf("Preencha os dados do primeiro evento:\n");
    preenche(&evento1);
    printf("\n");
    
    printf("Preencha os dados do segundo evento:\n");
    preenche(&evento2);
    printf("\n");
    
    printf("Valores do primeiro evento:\n");
    printf("Evento: %s\n", evento1.atracao);
    imprime(&evento1);
    printf("\nValores do segundo evento:\n");
    printf("Evento: %s\n", evento2.atracao);
    imprime(&evento2);
    printf("\n");
    
    Ingresso eventos[2] = {evento1, evento2};
    imprime_menor_maior_preco(2, eventos);
    
    return 0;
}