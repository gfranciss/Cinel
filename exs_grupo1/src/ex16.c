#include "../inc/exs1.h"

void    ex16()
{
    float note[3];
    float media = 0;

    for (int i = 0; i < 2; i++)
    {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &note[i]);
    }
    media = (note[0] + note[1]) / 2;
    if (media >= 10)
        printf("Aprovado\n");
    else
    {
        printf("Recuperação\n");
        printf("Digite a nota da recuperação: ");
        scanf("%f", &note[2]);
        media = (note[0] + note[1] + note[2]) / 3;
        if (media >= 10)
            printf("Aprovado\n");
        else
            printf("Reprovado\n");
    }
}