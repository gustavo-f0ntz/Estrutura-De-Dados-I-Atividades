
#include <stdio.h> 
#include <stdlib.h>

typedef struct pessoa {
    int idade;
    char nome[20];
} Pessoa;

void dados_pessoa (Pessoa *p) {
    /*
    Função que preenche os dados de uma variável do tipo pessoa (struct)
    
    */

   printf("Informe o seu nome: \t");
   scanf(" %[^\n]", p->nome);
   printf("Informe a sua idade: \t ");
   scanf("%d", &p->idade);
}

int main(void) {
    Pessoa * pessoa = malloc(sizeof(Pessoa)); // alocando memória para a variável pessoa
    dados_pessoa(pessoa); // a função recebe o endereço da variável
    free(pessoa); // liberando a memória alocada
    return 0;


}