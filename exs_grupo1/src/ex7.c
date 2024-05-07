#include "../inc/exs1.h"

void    ex7()
{
    float macas = 0;
    float bananas = 0;
    float total = 0;

    printf("Digite a quantidade de kilos de maçãs: ");
    scanf("%f", &macas);
    printf("Digite a quantidade de kilos de bananas: ");
    scanf("%f", &bananas);
    printf("O valor total faturado com maças é: %.2f\n", macas * 1.5);
    printf("O valor total faturado com bananas é: %.2f\n", bananas * 1.2);
    total = (macas * 1.5) + (bananas * 1.2);
    printf("O valor total faturado é: %.2f\n", total);
    printf("O valor total para ser guardado é: %.2f\n", total * 0.1);
}