#include "../inc/exs1.h"

void    ex1(void)
{
    int anos = 0;

    printf("Digite a quantidade de anos: ");
    scanf("%d", &anos);
    printf("A quantidade de dias é: %d\n", anos * 365);
}