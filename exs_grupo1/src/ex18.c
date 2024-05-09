#include "../inc/exs1.h"

void    ex18()
{
    int year = 0;

    printf("Digite o ano: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("O ano é bissexto\n");
    else
        printf("O ano não é bissexto\n");
}
