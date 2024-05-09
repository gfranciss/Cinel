#include "../inc/exs1.h"

void    ex17()
{
    int     qtd = 0;
    float   price = 0;

    printf("Digite a quantidade de maçãs: ");
    scanf("%d", &qtd);
    if(qtd >= 12)
        price = qtd * 0.10;
    else
        price = qtd * 0.30;
    printf("O preço total é: R$%.2f\n", price);        
}