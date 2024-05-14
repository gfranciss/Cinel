#include "../inc/exs2.h"

void    ex5()
{
    int         num_mercadoria = 0;
    float       valor_mercadoria = 0;
    int         qtd_mercadoria = 0;
    float       valor_total = 0;
    int         total_mercadoria = 0;
    char        c = 'S';

    while (c == 'S')
    {
        num_mercadoria++;
        printf("Digite a quantidade da mercadoria %d: ", num_mercadoria);
        scanf("%d", &qtd_mercadoria);
        printf("Digite o valor da mercadoria %d: ", num_mercadoria);
        scanf("%f", &valor_mercadoria);
        valor_total += valor_mercadoria * qtd_mercadoria;
        printf("O valor total da mercadoria %d é: %.2f\n",num_mercadoria, valor_mercadoria * qtd_mercadoria);
        total_mercadoria += qtd_mercadoria;
        printf("Deseja continuar? (S/N)\n");
        scanf(" %c", &c);
    }
    printf("O valor total das mercadorias é: %.2f\n", valor_total);
    printf("A quantidade total de mercadorias é: %d\n", total_mercadoria);
    printf("A média de valor das mercadorias é: %.2f\n", valor_total / total_mercadoria);


}