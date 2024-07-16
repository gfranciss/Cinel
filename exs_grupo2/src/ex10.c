#include "../inc/exs2.h"

void    ex10()
{
    char        op;
    int         candA = 0;
    int         candB = 0;
    int         indecisos = 0;
    int         d = 0;

    for(int i = 0; i < 80; i++)
    {
        printf("Digite o voto da %d: ", i + 1);
        scanf(" %c", &op);
        if (op == 'A')
            candA++;
        else if (op == 'B')
            candB++;
        else if (op == 'C')
            indecisos++;
        else if (op == 'D')
            d++;
        else
        {
            printf("Opção inválida\n");
            i--;
        }
    }
    printf("Candidato A: %d%%\n", candA / 5 * 100);
    printf("Candidato B: %d%%\n", candB / 80 * 100);
    printf("Indecisos: %d%%\n", indecisos / 80 * 100);
    printf("Nulos: %d%%\n", d / 80 * 100);

}