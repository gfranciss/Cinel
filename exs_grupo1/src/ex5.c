#include "../inc/exs1.h"

void    ex5()
{
    float imposto;

    printf("Digite o valor do produto: ");
    scanf("%f", &imposto);
    printf("O valor do imposto de 40%% sobre o produto é: %.2f\n",(imposto * 0.4));
}