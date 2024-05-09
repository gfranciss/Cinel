#include "../inc/exs1.h"

void    ex21()
{
    char    letter;

    printf("Digite a classificação do aluno: ");
    scanf(" %c", &letter);
    switch (letter)
    {
        case 'A':
            printf("Excelente\n");
            break;
        case 'B':
            printf("Muito Bom\n");
            break;
        case 'C':
            printf("Bom\n");
            break;
        case 'D':
            printf("Suficiente\n");
            break;
        case 'E':
            printf("Reprovado\n");
            break;
        default:
            printf("Classificação inválida\n");
            break;
    }
}