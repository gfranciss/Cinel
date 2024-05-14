#include "../inc/exs2.h"

void    ex2()
{
    int num[11];
    int sum = 0;

    printf("Digite os 10 números: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &num[i]);
        if (num[i] < 40)
            sum += num[i];
    }
    printf("A soma dos números menores que 40 é: %d\n", sum);
}