#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura aluno
struct aluno {
    char nome[20]; // Array de caracteres para armazenar o nome do aluno
    int idade; // Inteiro para armazenar a idade do aluno
    int matricula; // Inteiro para armazenar a matrícula do aluno
    char email[50]; // Array de caracteres para armazenar o email do aluno
};

// Função para imprimir as informações do aluno
void imprime(struct aluno * aluno1){
    printf("nome: %s\n", aluno1->nome); // Imprimindo o nome do aluno
    printf("idade: %d\n", aluno1->idade); // Imprimindo a idade do aluno
    printf("matricula: %d\n", aluno1->matricula); // Imprimindo a matrícula do aluno
    printf("email: %s\n", aluno1->email); // Imprimindo o email do aluno
}

// Função para preencher as informações do aluno
void preenche(struct aluno * aluno1){
    printf("digite seu nome: ");
    scanf(" %[^\n]", &aluno1->nome); // Lendo o nome do aluno
    printf("digite sua idade: ");
    scanf("%d", &aluno1->idade); // Lendo a idade do aluno
    printf("digite sua matricula: ");
    scanf("%d", &aluno1->matricula); // Lendo a matrícula do aluno
    printf("digite seu email: ");
    scanf(" %[^\n]", &aluno1->email); // Lendo o email do aluno
}

int main(void) {
    // ALOCAÇÃO DINAMICA DE STRUCT, POIS A VARIAVEL AGORA É UM PONTEIRO
    // Alocando memória dinamicamente para a struct aluno usando malloc
    struct aluno * aluno1 = (struct aluno*) malloc(sizeof(struct aluno));
    // Verificando se a alocação foi bem-sucedida
    if (aluno1 == NULL){
        exit(1); // Se a alocação falhar, o programa termina
    }
    preenche(aluno1); // Chamando a função para preencher as informações do aluno
    imprime(aluno1); // Chamando a função para imprimir as informações do aluno
    free(aluno1); // Liberando a memória alocada para aluno1

    return 0;
}