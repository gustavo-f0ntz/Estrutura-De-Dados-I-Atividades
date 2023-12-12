#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura servidor
struct servidor {
    char nome[20]; // Array de caracteres para armazenar o nome do servidor
    int idade; // Inteiro para armazenar a idade do servidor
    int documento; // Inteiro para armazenar o documento do servidor
    char servico[50]; // Array de caracteres para armazenar o serviço do servidor
};

// Função para imprimir as informações do servidor
void imprime(struct servidor * servidor1){
    printf("nome: %s\n", servidor1->nome); // Imprimindo o nome do servidor
    printf("idade: %d\n", servidor1->idade); // Imprimindo a idade do servidor
    printf("documento: %d\n", servidor1->documento); // Imprimindo o documento do servidor
    printf("servico: %s\n", servidor1->servico); // Imprimindo o serviço do servidor
}

// Função para preencher as informações do servidor
void preenche(struct servidor * servidor1){
    printf("digite seu nome: ");
    scanf(" %[^\n]", &servidor1->nome); // Lendo o nome do servidor
    printf("digite sua idade: ");
    scanf(" %d", &servidor1->idade); // Lendo a idade do servidor
    printf("digite seu documento: ");
    scanf(" %d", &servidor1->documento); // Lendo o documento do servidor
    printf("digite o seu servico: ");
    scanf(" %[^\n]", &servidor1->servico); // Lendo o serviço do servidor
}

int main(void) {
    // ALOCAÇÃO DINAMICA DE STRUCT, POIS A VARIAVEL AGORA É UM PONTEIRO
    // Alocando memória dinamicamente para a struct servidor usando malloc
    struct servidor * servidor1 = (struct servidor*) malloc(sizeof(struct servidor));
    // Verificando se a alocação foi bem-sucedida
    if (servidor1 == NULL){
        exit(1); // Se a alocação falhar, o programa termina
    }
    preenche(servidor1); // Chamando a função para preencher as informações do servidor
    imprime(servidor1); // Chamando a função para imprimir as informações do servidor
    free(servidor1); // Liberando a memória alocada para servidor1

    return 0;
}