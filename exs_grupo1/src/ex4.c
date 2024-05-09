#include "../inc/exs1.h"

void    ex4()
{
    int     year    = 0;
    int     actual_year = 0;

    printf("Digite o ano em que nasceu: ");
    scanf("%d", &year);
    printf("Digite o ano atual: ");
    scanf("%d", &actual_year);
    printf("Você tem %d anos\n", actual_year - year);
}