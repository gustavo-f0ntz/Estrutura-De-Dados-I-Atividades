#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura Funcionario
struct Funcionario {
    char nome[20];
    int idade;
    float salario;
    char cargo[20];
    char sexo[10];
};

// Função para preencher os dados de um funcionário
void preenche(struct Funcionario *funcionario) {
    printf("Digite o nome do funcionário: ");
    scanf(" %[^\n]", funcionario -> nome);

    printf("Digite a idade do funcionário: ");
    scanf("%d", &funcionario -> idade);

    printf("Digite o salário do funcionário: ");
    scanf("%f", &funcionario -> salario);

    printf("Digite o cargo do funcionário: ");
    scanf(" %[^\n]", funcionario -> cargo);

    printf("Digite o sexo do funcionário: ");
    scanf(" %[^\n]", funcionario -> sexo);
}

// Função para imprimir os dados de um funcionário
void imprimir(struct Funcionario *funcionario) {
    printf("Nome: %s\n", funcionario -> nome);
    printf("Idade: %d\n", funcionario -> idade);
    printf("Salário: %.2f\n", funcionario -> salario);
    printf("Cargo: %s\n", funcionario -> cargo);
    printf("Sexo: %s\n", funcionario -> sexo);
}

// Função para alterar o salário de um funcionário
void alterarSalario(struct Funcionario *funcionario) {
    printf("Digite o novo salario: ");
    scanf("%f", &funcionario -> salario);
}

// Função para encontrar o funcionário com maior e menor salário
void maiorEMenor(struct Funcionario *funcionario,  int n) {
    float maiorSalario  = funcionario[0].salario;
    float menorSalario = funcionario[0].salario;
    int posicaoMaior = 0;
    int posicaoMenor = 0;

    for (int i = 0; i < n; i++) {
        if(funcionario[i].salario > maiorSalario) {
            maiorSalario = funcionario[i].salario;
            posicaoMaior = i;
        }
        else if(funcionario[i].salario < menorSalario) {
            menorSalario = funcionario[i].salario;
            posicaoMenor = i;
        }
    }

    printf("------------------------------------\n");
    printf("Cargo do funcionario com maior salario: %s\nSalario: %.2f\n",funcionario[posicaoMaior].cargo,funcionario[posicaoMaior].salario);
    printf("------------------------------------\n");
    printf("Cargo do funcionario com menor salario: %s\nSalario: %.2f\n",funcionario[posicaoMenor].cargo,funcionario[posicaoMenor].salario);
}

int main(void) {
    int quantidadeFuncionarios, opcao;
    printf("Digite a quantidade de funcionarios: ");
    scanf("%d", &quantidadeFuncionarios); 

    struct Funcionario funcionario[quantidadeFuncionarios];

    // Preenchimento dos dados dos funcionários
    for (int i = 0; i < quantidadeFuncionarios; i++) {
        printf("------------------------------------\n");
        printf("Digite os dados do funcionário %d\n", i+1);
        preenche(&funcionario[i]);
        printf("------------------------------------\n");
    }

    // Impressão dos dados dos funcionários
    for (int i = 0; i < quantidadeFuncionarios; i++) {
        printf("Dados do funcionário %d\n", i +1);
        printf("------------------------------------\n");
        imprimir(&funcionario[i]);
        printf("------------------------------------\n");
    }

    printf("Você deseja alterar o valor de algum salario (1- Sim, 2- Não): ");
    scanf("%d",&opcao);

    if(opcao == 1) {
        int funcionarioEscolhido;
        printf("Digite o número do funcionário que deseja alterar o salário: ");
        scanf("%d",&funcionarioEscolhido); 

        alterarSalario(&funcionario[funcionarioEscolhido-1]);

        printf("------------------------------------\n");
        printf("Dados do funcionário %d\n",funcionarioEscolhido);
        printf("------------------------------------\n");   
        imprimir(&funcionario[funcionarioEscolhido-1]);
    }

    maiorEMenor(funcionario, quantidadeFuncionarios);

    return 0;
}