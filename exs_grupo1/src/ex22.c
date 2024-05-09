#include "../inc/exs1.h"

void    ex22()
{
    int op = 0;
    float num1 = 0;
    float num2 = 0;
    float result = 0;

    printf("Caso queira somar digite: 1\n");
    printf("Caso queira subtrair digite: 2\n");
    printf("Caso queira multiplicar digite: 3\n");
    printf("Caso queira dividir digite: 4\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &op);
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    switch (op)
    {
        case 1:
            printf(" \nOpção selecionada: 1. Soma ");
            result = num1 + num2;
            printf(" \n%.2f + %.2f = %.2f\n ",num1, num2, result);
            break;
        case 2:
            printf(" \nOpção selecionada: 2. Subtração ");
            result = num1 - num2;
            printf(" \n%.2f - %.2f = %.2f\n ",num1, num2, result);
            break;
        case 3:
            printf(" \nOpção selecionada: 3. Multiplicação ");
            result = num1 * num2;
            printf(" \n%.2f * %.2f = %.2f\n ",num1, num2, result);
            break;
        case 4:
            printf(" \nOpção selecionada: 4. Divisão");
            result = num1 / num2;
            printf(" \n%.2f / %.2f = %.2f\n ",num1, num2, result);
            break;
        default:
            printf("Opção inválida\n");
    }
}