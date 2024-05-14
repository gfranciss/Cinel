#include "../inc/exs2.h"

void    ex4()
{
    int         num_mercadorias = 0;
    float       valor_mercadorias = 0;
    int         qtd_mercadorias = 0;
    float       valor_total = 0;
    int         total_mercadorias = 0;

    printf("Digite quantas mercadorias vão serem cadastradas: ");
    scanf("%d", &num_mercadorias);

    for (int i = 0; i < num_mercadorias; i++)
    {
        printf("Digite a quantidade da mercadoria %d: ", i + 1);
        scanf("%d", &qtd_mercadorias);
        printf("Digite o valor da mercadoria %d: ", i + 1);
        scanf("%f", &valor_mercadorias);
        printf("\n");
        valor_total += valor_mercadorias * qtd_mercadorias;
        total_mercadorias += qtd_mercadorias;
    }
    printf("O valor total das mercadorias é: %.2f\n", valor_total);
    printf("A quantidade total de mercadorias é: %d\n", total_mercadorias);
    printf("A média de valor das mercadorias é: %.2f\n", valor_total / total_mercadorias);


}