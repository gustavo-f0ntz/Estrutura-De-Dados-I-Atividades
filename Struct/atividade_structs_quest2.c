#include <stdio.h>
#include <stdlib.h>

struct dados_pessoal{
    char nome[20];
    int idade;
    int cpf;
};

void preenche(struct dados_pessoal *pessoas){
    printf("Digite o nome: ");
    scanf(" %[^\n]", pessoas -> nome);

    printf("Digite a idade: ");
    scanf("%d", &pessoas -> idade);

    printf("Digite o cpf: ");
    scanf("%d", &pessoas -> cpf);
} 

void imprimir(struct dados_pessoal *pessoas){
    printf("Nome: %s\n", pessoas -> nome);
    printf("Idade: %d\n", pessoas -> idade);
    printf("CPF: %d\n", pessoas -> cpf);
}

void alterar_idade(struct dados_pessoal *pessoas){
    printf("Digite a nova idade:");
    scanf("%d", &pessoas -> idade);
}


void maior_e_menor(struct dados_pessoal *pessoas, int n){
    int maior_idade = pessoas[0].idade;
    int menor_idade = pessoas[0].idade;
    int posicao_maior = 0;
    int posicao_menor = 0;

    for (int i = 0; i < n; i++){
        if(pessoas[i].idade > maior_idade){
            maior_idade = pessoas[i].idade;
            posicao_maior = i;
        }
        else if(pessoas[i].idade < menor_idade){
            menor_idade = pessoas[i].idade;
            posicao_menor = i;
        }
    }

    printf("A pessoa mais velha é: %s\n"
    "com a idade: %d", pessoas[posicao_maior].nome, pessoas[posicao_maior].idade);

    printf("A pessoa mais nova é: %s\n"
    "com a idade: %d", pessoas[posicao_menor].nome, pessoas[posicao_menor].idade);


}

int main(void){

    int n, posicao, op;
    printf("Digite o numero de pessoas: ");
    scanf("%d", &n);

    struct dados_pessoal *pessoas = (struct dados_pessoal*) malloc (n * sizeof(struct dados_pessoal));

    for(int i = 0; i < n; i++){
        printf("------------------------------------\n");
        printf("Digite os dados da pessoa %d\n", i+1);
        preenche(&pessoas[i]);
    }

    for(int i = 0; i < n; i++){
        printf("------------------------------------\n");
        printf("Dados da pessoa %d\n", i+1);
        imprimir(&pessoas[i]);
    }  


    printf("Deseja alterar a idade de alguma pessoa? (1 - sim, 2 - não): ");
    scanf("%d", &op);


    if(op ==1){

    
    printf("Digite a posição da pessoa que deseja alterar a idade: ");
    scanf("%d", &posicao);

    alterar_idade(&pessoas[posicao]);
    }

    maior_e_menor(pessoas, n);


    free(pessoas);
    return 0;
}