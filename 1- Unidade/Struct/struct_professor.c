#include <stdio.h>
#include <stdlib.h>

struct professor {

    char nome[20];
    char email[50];
    char universidade;
    char disciplina;

};

void imprime(struct professor * professor1){
    printf("nome: %s\n", professor1->nome);
    printf("email: %s\n", professor1->email);
    printf("universidade: %s\n", professor1->universidade);
    printf("disciplina: %s\n", professor1->disciplina);
}

void preenche(struct professor * professor1){
    printf("digite seu nome: ");
    scanf(" %s", &professor1->nome);
    printf("digite seu email: ");
    scanf(" %s", &professor1->email);
    printf("digite sua universidade: ");
    scanf(" %s", &professor1->universidade);
    printf("digite a disciplina: ");
    scanf(" %s", &professor1->disciplina);
}

int main(void) {
   // ALOCAÇÃO DINAMICA DE STRUCT, POIS A VARIAVEL AGORA É UM PONTEIRO
    struct professor * professor1 = (struct professor*) malloc(sizeof(struct professor));
    if (professor1 == NULL){
        exit(1);
    }
    preenche(professor1);
    imprime(professor1);
    free(professor1);

    return 0;
}