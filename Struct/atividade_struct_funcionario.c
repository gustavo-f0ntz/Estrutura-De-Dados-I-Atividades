#include <stdio.h>
#include <stdlib.h>
struct funcionario{
    char nome[20];
    int idade;
    float salario;
    char cargo[20];
    char sexo[10];
};

void preenche(struct funcionario *funcionario){

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

void imprimir (struct funcionario *funcionario){
    printf("Nome: %s\n", funcionario -> nome);
    printf("Idade: %d\n", funcionario -> idade);
    printf("Salário: %.2f\n", funcionario -> salario);
    printf("Cargo: %s\n", funcionario -> cargo);
    printf("Sexo: %s\n", funcionario -> sexo);
}


void alterar_Salario(struct funcionario *funcionario){
    printf("Digite o novo salario: ");
    scanf("%f", &funcionario -> salario);
}

void maior_e_menor(struct funcionario *funcionario,  int n){
    int maior_salario  = funcionario[0].salario;
    int menor_salario = funcionario[0].salario;
    int posicao_maior = 0;
    int posicao_menor = 0;

    for (int i = 0; i < n; i++){
        if(funcionario[i].salario > maior_salario){
            maior_salario = funcionario[i].salario;
            posicao_maior = i;

        }
        else if(funcionario[i].salario < menor_salario){
            menor_salario = funcionario[i].salario;
            posicao_menor = i;
        }
    }

    printf("------------------------------------\n");

    printf(" Cargo do funionario: %s\n "
    "Mairo salario: %.2f\n",funcionario[posicao_maior].cargo,funcionario[posicao_maior].salario);

    printf("------------------------------------\n");
    
    printf(" Cargo do funionario: %s\n "
    "Menor salario: %.2f\n",funcionario[posicao_menor].cargo,funcionario[posicao_menor].salario);
    
}

int main(void){

    int n,op;
    printf("Digite a quantidade de funcionario: ");
    scanf("%d", &n); 

   struct funcionario funcionario[n];


   for (int i = 0; i < n; i++){
        printf("------------------------------------\n");
        printf("Digite os dados do funcionário %d\n", i+1);
        preenche(&funcionario[i]);
        printf("------------------------------------\n");
   }

   for (int i = 0; i < n; i++){
        printf("Dados do funcionário %d\n", i +1);
        printf("------------------------------------\n");
        imprimir(&funcionario[i]);
        printf("------------------------------------\n");
   }

   printf("VOCÊ DESEJA ALTERAR O VALOR DE ALGUM SALARIO (1- SIM, 2- NÃO): ");
   scanf("%d",&op);

   if(op == 1){
        int funcionario_escolhido;
        printf("DIGITE O NUMERO DO FUNCIONARIO QUE DESEJA ALTERAR O SALARIO: ");
        scanf("%d",&funcionario_escolhido); 

        alterar_Salario(&funcionario[funcionario_escolhido-1]);

        printf("------------------------------------\n");
        printf("DADOS DO FUNCIONARIO %d\n",funcionario_escolhido);
        printf("------------------------------------\n");   
        imprimir(&funcionario[funcionario_escolhido-1]);
   }

    maior_e_menor(funcionario,n);



    
    return 0;
}