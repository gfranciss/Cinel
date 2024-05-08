#include "../inc/exs1.h"

void    ex14()
{
    float   note[3];
    float   media = 0;
    int     i = 0;

    for (i = 0; i < 3; i++)
    {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &note[i]);
    }
    media = ((note[0] * 2) + (note[1] * 3) + (note[2] * 5)) / 10;
    printf("A média é: %.2f\n", media);
    if (media >= 10)
        printf("Aprovado\n");
    else
        printf("Reprovado\n");
}