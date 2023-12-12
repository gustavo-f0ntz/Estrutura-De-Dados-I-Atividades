#include <stdio.h>

// Definindo a estrutura aluno
struct aluno {
    char nome[20]; // Array de caracteres para armazenar o nome do aluno
    int idade; // Inteiro para armazenar a idade do aluno
    int matricula; // Inteiro para armazenar a matrícula do aluno
    char email[50]; // Array de caracteres para armazenar o email do aluno
};

int main(void) {
    struct aluno aluno1; // Declaração de uma variável aluno1 do tipo struct aluno

    // Solicitando ao usuário que insira as informações do aluno
    printf("digite seu nome: ");
    scanf(" %[^\n]", &aluno1.nome); // Lendo o nome do aluno
    printf("digite sua idade: ");
    scanf("%d", &aluno1.idade); // Lendo a idade do aluno
    printf("digite sua matricula: ");
    scanf("%d", &aluno1.matricula); // Lendo a matrícula do aluno
    printf("digite seu email: ");
    scanf(" %[^\n]", &aluno1.email); // Lendo o email do aluno

    // Imprimindo as informações do aluno
    printf("nome: %s\n", aluno1.nome); // Imprimindo o nome do aluno
    printf("idade: %d\n", aluno1.idade); // Imprimindo a idade do aluno
    printf("matricula: %d\n", aluno1.matricula); // Imprimindo a matrícula do aluno
    printf("email: %s\n", aluno1.email); // Imprimindo o email do aluno

    return 0;
}