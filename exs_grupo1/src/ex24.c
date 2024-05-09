#include "../inc/exs1.h"

void    ex24()
{
    float   price = 0;
    int     payment = 0;

    printf("Digite o preço do produto: ");
    scanf("%f", &price);
    printf("\n\nPronto pagamento: 1\n"
            "2 prestações: 2\n"
            "3 prestações: 3\n"
            "Entre 4 e 6 prestações: 4\n");
    printf("Digite o código do tipo de pagamento: \n");
    scanf("%d", &payment);
    switch (payment)
    {
        case 1:
            printf("Preço final: %.2f\n", price - (price * 0.3));
            break;
        case 2:
            printf("Preço de cada uma das 2 parcelas: %.2f\n", (price - (price * 0.2) / 2));
            break;
        case 3:
            printf("Preço de cada uma das 3 parcelas: %.2f\n", (price + (price * 0.1) / 3));
            break;
        case 4:
            printf("Essa quantidade de parcelas não tem desconto, apenas divida %.2f pela "
            "quantidade de parcelas\n", price);
            break;
        default:
            printf("Opção inválida\n");
            break;
    }
}