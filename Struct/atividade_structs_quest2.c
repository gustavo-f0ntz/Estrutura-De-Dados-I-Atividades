#include <stdio.h>
#include <stdlib.h>

// Estrutura para armazenar dados pessoais
struct DadosPessoais {
    char nome[20];
    int idade;
    int cpf;
};

// Função para preencher os dados pessoais
void preencherDados(struct DadosPessoais *pessoa) {
    printf("Digite o nome: ");
    scanf(" %[^\n]", pessoa -> nome);

    printf("Digite a idade: ");
    scanf("%d", &pessoa -> idade);

    printf("Digite o CPF: ");
    scanf("%d", &pessoa -> cpf);
} 

// Função para imprimir os dados pessoais
void imprimirDados(struct DadosPessoais *pessoa) {
    printf("Nome: %s\n", pessoa -> nome);
    printf("Idade: %d\n", pessoa -> idade);
    printf("CPF: %d\n", pessoa -> cpf);
}

// Função para alterar a idade
void alterarIdade(struct DadosPessoais *pessoa) {
    printf("Digite a nova idade: ");
    scanf("%d", &pessoa -> idade);
}

// Função para encontrar a pessoa mais velha e mais nova
void encontrarMaisVelhoEMaisNovo(struct DadosPessoais *pessoas, int quantidade) {
    int idadeMaisVelha = pessoas[0].idade;
    int idadeMaisNova = pessoas[0].idade;
    int indiceMaisVelho = 0;
    int indiceMaisNovo = 0;

    for (int i = 0; i < quantidade; i++) {
        if(pessoas[i].idade > idadeMaisVelha) {
            idadeMaisVelha = pessoas[i].idade;
            indiceMaisVelho = i;
        }
        else if(pessoas[i].idade < idadeMaisNova) {
            idadeMaisNova = pessoas[i].idade;
            indiceMaisNovo = i;
        }
    }

    printf("A pessoa mais velha é: %s\n"
    "com a idade: %d\n", pessoas[indiceMaisVelho].nome, pessoas[indiceMaisVelho].idade);

    printf("A pessoa mais nova é: %s\n"
    "com a idade: %d\n", pessoas[indiceMaisNovo].nome, pessoas[indiceMaisNovo].idade);
}

int main(void) {
    int numPessoas, posicao, opcao;
    printf("Digite o número de pessoas: ");
    scanf("%d", &numPessoas);

    struct DadosPessoais *pessoas = (struct DadosPessoais*) malloc (numPessoas * sizeof(struct DadosPessoais));

    for(int i = 0; i < numPessoas; i++) {
        printf("------------------------------------\n");
        printf("Digite os dados da pessoa %d\n", i+1);
        preencherDados(&pessoas[i]);
    }

    for(int i = 0; i < numPessoas; i++) {
        printf("------------------------------------\n");
        printf("Dados da pessoa %d\n", i+1);
        imprimirDados(&pessoas[i]);
    }  

    printf("Deseja alterar a idade de alguma pessoa? (1 - sim, 2 - não): ");
    scanf("%d", &opcao);

    if(opcao == 1) {
        printf("Digite a posição da pessoa que deseja alterar a idade: ");
        scanf("%d", &posicao);
        alterarIdade(&pessoas[posicao]);
    }

    encontrarMaisVelhoEMaisNovo(pessoas, numPessoas);

    free(pessoas);
    return 0;
}