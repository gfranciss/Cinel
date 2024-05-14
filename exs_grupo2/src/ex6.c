#include "../inc/exs2.h"

void    ex6()
{
    int     qtd_num = 0;
    int     num = 0;
    int     maior = 0;
    int     menor = 0;
    int     soma = 0;

    printf("Digite a quantidade de números que deseja digitar: ");
    scanf("%d", &qtd_num);
    for (int i = 0; i < qtd_num; i++)
    {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &num);
        if (i == 0)
        {
            maior = num;
            menor = num;
        }
        if (num > maior)
            maior = num;
        if (num < menor)
            menor = num;
        soma += num;
    }
    printf("\nO maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);
    printf("A média dos números é: %.2f\n", (float)soma / qtd_num);
}