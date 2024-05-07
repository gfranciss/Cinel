#include "../inc/exs1.h"

void    ex9()
{
    int num = 0;

    printf("Digite um número: ");
    scanf("%d", &num);
    if (num > 0)
        printf("O número %d é positivo\n", num);
    else if (num < 0)
        printf("O número %d é negativo\n", num);
    else
        printf("O número %d é zero\n", num);
}
