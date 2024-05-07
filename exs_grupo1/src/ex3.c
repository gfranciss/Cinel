#include "../inc/exs1.h"

void    ex3()
{
    int num1 = 0;
    int num2 = 0;
    int temp = 0;

    printf("Digite o primeiro valor a ser trocado: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor a ser trocado: ");
    scanf("%d", &num2);
    
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("Os valores trocados sao num1: %d e num2: %d\n", num1, num2);
}