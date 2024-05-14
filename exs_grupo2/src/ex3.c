#include "../inc/exs2.h"

void    ex3()
{
    int num1 = 0;
    int num2 = 0;
    int sum = 0;

    printf("Digite sempre o maior número primeiro\n");
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    for (int i = num1; i >= num2; i--)
        sum += i;

    printf("A soma dos números entre %d e %d é: %d\n", num2, num1, sum);

}