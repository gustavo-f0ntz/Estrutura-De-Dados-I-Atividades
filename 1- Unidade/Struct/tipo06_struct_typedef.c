#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definindo a estrutura aluno com typedef, o que permite que possamos usar apenas "Aluno" em vez de "struct aluno"
typedef struct aluno {
    char nome[20]; // Array de caracteres para armazenar o nome do aluno
    int idade; // Inteiro para armazenar a idade do aluno
    int mat; // Inteiro para armazenar a matrícula do aluno
    char email[80]; // Array de caracteres para armazenar o email do aluno
} Aluno;

int main () {
    Aluno aluno1; // Criando uma variável aluno1 do tipo Aluno
    aluno1.idade = 18; // Atribuindo o valor 18 ao campo idade de aluno1
    aluno1.mat = 123456; // Atribuindo o valor 123456 ao campo mat de aluno1
    strcpy(aluno1.email, "fontes.gustavo519@hotmail.com"); // Atribuindo o valor "fontes.gustavo519@hotmail.com" ao campo email de aluno1
    strcpy(aluno1.nome, "Gustavo"); // Atribuindo o valor "Gustavo" ao campo nome de aluno1

    // Imprimindo as informações de aluno1
    printf("Nome: %s\n", aluno1.nome);
    printf("Idade: %d\n", aluno1.idade);
    printf("Matricula: %d\n", aluno1.mat);
    printf("Email: %s\n", aluno1.email);

    return 0;
}