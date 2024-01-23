#include <stdio.h>
#include <stdlib.h>

#define ESTUDANTES 10

void calcularResultado(char *respostasCorretas, char **respostasEstudantes, int totalQuestoes)
{
    float nota = 0;
    float acertos = 0;
    float aprovados = 0;

    printf("----------NOTAS DOS ESTUDANTES----------\n");
    for (int i = 0; i < ESTUDANTES; i++)
    {
        nota = 0;
        acertos = 0;
        for (int j = 0; j < totalQuestoes; j++)
        {
            if (respostasEstudantes[i][j] == respostasCorretas[j])
            {
                acertos++;
            }
        }

        nota = acertos / totalQuestoes * 10;
        printf("ESTUDANTE %d:  %.2f\n", i + 1, nota);

        if (nota >= 6.0)
        {
            aprovados++;
        }
    }

    float porcentagemAprovados = (aprovados / ESTUDANTES) * 100;

    printf("PORCENTAGEM DE APROVADOS: %.2f %%", porcentagemAprovados);
}

int main(void)
{

    int totalQuestoes;

    printf("DIGITE O TOTAL DE QUESTÕES: ");
    scanf("%d", &totalQuestoes);

    char *respostasCorretas = (char *)malloc(totalQuestoes * sizeof(char));
    char **respostasEstudantes = (char **)malloc(10 * sizeof(char *));

    for (int i = 0; i < 10; i++)
    {
        respostasEstudantes[i] = (char *)malloc(totalQuestoes * sizeof(char));
        if (respostasEstudantes[i] == NULL)
        {
            printf("ERRO DE ALOCAÇÃO DE MEMORIA\n");
            exit(1);
        }
    }

    if (respostasCorretas == NULL)
    {
        printf("ERRO DE ALOCAÇÃO DE MEMORIA\n");
        exit(1);
    }

    printf("--------GABARITO DA PROVA----------\n");

    for (int i = 0; i < totalQuestoes; i++)
    {

        printf("DIGITE A RESPOSTA DA QUESTÃO %d: ", i + 1);
        scanf(" %c", &respostasCorretas[i]);
    }
    printf("------------------------------------\n");

    printf("\n");

    for (int i = 0; i < ESTUDANTES; i++)
    {

        printf("---------------ESTUDANTE %d--------------\n", i + 1);

        for (int j = 0; j < totalQuestoes; j++)
        {
            printf("DIGITE A RESPOSTA DO ESTUDANTE PARA A QUESTÃO %d: ", i + 1);
            scanf(" %c", &respostasEstudantes[i][j]);
        }
    }


    calcularResultado(respostasCorretas, respostasEstudantes, totalQuestoes);

    free(respostasEstudantes);

    for (int i = 0; i < 10; i++)
    {
        free(respostasEstudantes[i]);
    }
    free(respostasCorretas);

    return 0;
}