#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno {
    char nome[20];
    int idade;
    int mat;
    char email[80];
} Aluno;

int main () {
    Aluno aluno1;
    aluno1.idade = 18;
    aluno1.mat = 123456;
    strcpy(aluno1.email, "gustavo@.com");
    strcpy(aluno1.nome, "Gustavo");

    printf("Nome: %s\n", aluno1.nome);
    printf("Idade: %d\n", aluno1.idade);
    printf("Matricula: %d\n", aluno1.mat);
    printf("Email: %s\n", aluno1.email);

    return 0;
}