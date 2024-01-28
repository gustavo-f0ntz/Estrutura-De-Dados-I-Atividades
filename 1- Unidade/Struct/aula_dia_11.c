#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno {
    char nome[20]; // 20 bytes
    int idade; // 4 bytes
    int mat; // 4 bytes
    char email[80]; // 80 bytes
}; 

// int main () {
//     struct aluno aluno1;
//     aluno1.idade = 18;
//     aluno1.mat = 123456;
//     strcpy(aluno1.email, "gustavo@.com");
//     strcpy(aluno1.nome, "Gustavo");

//     printf("Nome: %s\n", aluno1.nome);
//     printf("Idade: %d\n", aluno1.idade);
//     printf("Matricula: %d\n", aluno1.mat);
//     printf("Email: %s\n", aluno1.email);

//     return 0;

// }

// COM ALOCAÇÃO ESTATICA DE STRUCT

// int main (void) {
//     struct aluno estudante;
//     printf("Digite o nome do aluno: \n");
//     scanf("%[^\n]", estudante.nome);
//     printf("Digite a idade do aluno: \n");
//     scanf("%d", &estudante.idade);
//     printf("Digite a matricula do aluno: \n");
//     scanf("%d", &estudante.mat);
//     printf("Digite o email do aluno: \n");
//     scanf(" %[^\n]", estudante.email);

//     printf("Nome: %s\n", estudante.nome);
//     printf("Idade: %d\n", estudante.idade);
//     printf("Matricula: %d\n", estudante.mat);
//     printf("Email: %s\n", estudante.email);
//     return 0;
// }



// DE UMA FORMA MAIS ESTRUTURADA, USANDO PONTEIRO E ALOCAÇÃO DINAMICA DE STRUCT

// int main (void) {
//     struct aluno * estudante = malloc(sizeof(struct aluno));

//     if(estudante == NULL) {
//         exit(1);
//     }

//     printf("Digite o nome do aluno: \n");
//     scanf("%[^\n]", estudante->nome);
//     printf("Digite a idade do aluno: \n");
//     scanf("%d", &estudante->idade);
//     printf("Digite a matricula do aluno: \n");
//     scanf("%d", &estudante->mat);
//     printf("Digite o email do aluno: \n");
//     scanf(" %[^\n]", estudante->email);

//     printf("Nome: %s\n", estudante->nome);
//     printf("Idade: %d\n", estudante->idade);
//     printf("Matricula: %d\n", estudante->mat);
//     printf("Email: %s\n", estudante->email);
//     free(estudante);
//     return 0;
// }



// DE UMA FORMA MAIS ESTRUTURADA, USANDO PONTEIRO E ALOCAÇÃO DINAMICA DE STRUCT

void preenche(struct aluno * estudante) {
    printf("digite seu nome: ");
    scanf(" %[^\n]", &estudante->nome);
    printf("digite sua idade: ");
    scanf("%d", &estudante->idade);
    printf("digite sua matricula: ");
    scanf("%d", &estudante->mat);
    printf("digite seu email: ");
    scanf(" %[^\n]", &estudante->email);
}


int main(void) {
   // ALOCAÇÃO DINAMICA DE STRUCT, POIS A VARIAVEL AGORA É UM PONTEIRO
    struct aluno * estudante = (struct aluno*) malloc(sizeof(struct aluno));
    if (estudante == NULL){
        exit(1);
    }
    preenche(estudante);
    free(estudante);

    return 0;
}

