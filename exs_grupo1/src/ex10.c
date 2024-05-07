#include "../inc/exs1.h"

void    ex10()
{
    int num1 = 0;
    int num2 = 0;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if (num1 > num2)
        printf("O número %d é maior que o número %d\n", num1, num2);
    else if (num1 < num2)
        printf("O número %d é maior que o número %d\n", num2, num1);
    else
        printf("Os números %d e %d são iguais\n", num1, num2);
}