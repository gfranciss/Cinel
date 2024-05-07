#include "../inc/exs1.h"

void    ex8()
{
    float qtd;
    float price;
    float liter;

    printf("Digite o valor que deseja colocar: ");
    scanf("%f", &qtd);
    printf("Digite o preço do litro: ");
    scanf("%f", &price);
    liter = qtd / price;
    printf("Você conseguiu abastecer %.2f litros\n", liter);
}