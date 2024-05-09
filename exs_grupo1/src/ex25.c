#include "../inc/exs1.h"

void    ex25()
{
    float   price = 0;
    int     code = 0;

    printf("Digite o preço do produto: ");
    scanf("%f", &price);
    printf("\n\nLacticínios:   1\n"
            "Carnes:        2\n"
            "Peixes:        3\n"
            "Aves:          4\n"
            "Ovos:          5\n"
            "Doces:         6\n");
    printf("Digite o código do tipo de produto: \n");
    scanf("%d", &code);
    switch (code)
    {
        case 1:
            printf("Preço final com a margem de lucro: %.2f\n", price + (price * 0.8));
            break;
        case 2:
            printf("Preço final com a margem de lucro: %.2f\n", price + (price * 0.8));
            break;
        case 3:
            printf("Preço final com a margem de lucro: %.2f\n", price + price);
            break;
        case 4:
            printf("Preço final com a margem de lucro: %.2f\n", price + price);
            break;
        case 5:
            printf("Preço final com a margem de lucro: %.2f\n", price + (price * 0.9));
            break;
        case 6:
            printf("Preço final com a margem de lucro: %.2f\n", price + (price * 0.9));
            break;
        default:
            printf("Opção inválida\n");
            break;
    }
}