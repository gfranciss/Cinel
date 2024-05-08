#include "../inc/exs1.h"

void    ex13()
{
    float num = 0;
    float valor = 0;
    printf("Digite um número: ");
    scanf("%f", &num);
    if (num < 0)
        valor = num * num;
    else if (num > 0)
        valor = num / 2;
    else
        printf("O número é 0\n");
    printf("O valor é: %.2f\n", valor);
}