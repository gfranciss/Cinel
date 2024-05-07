#include "../inc/exs1.h"

void    calculadora()
{
    int op = 0;
    float num1 = 0;
    float num2 = 0;
    float result = 0;
    printf("Caso queira somar digite: 1\n");
    printf("Caso queira subtrair digite: 2\n");
    printf("Caso queira multiplicar digite: 3\n");
    printf("Caso queira o quociente da divisão de primeiro pelo segundo digite: 4\n");
    printf("Caso queira o resto divisão de primeiro pelo segundo digite: 5\n");
    printf("Caso queira a porcentagem do primeiro em relação ao segundo digite: 6\n");
    printf("Caso queira a média aritmética digite: 6\n");
    printf("Digite um número: ");
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
            printf(" \nOpção selecionada: 4. Quociente da divisão de primeiro pelo segundo ");
            result = num1 / num2;
            printf(" \n%.2f / %.2f = %.2f, o quociente da divisão é: %.2f\n ",num1, num2, result, result);
            break;
        case 5:
            printf(" \nOpção selecionada: 5. Resto da divisão de primeiro pelo segundo ");
            result = (int)num1 % (int)num2;
            printf(" \n%.2f %% %.2f = %.2f, o resto da divisão é: %.2f\n ",num1, num2, result, result);
            break;
        case 6:
            printf(" \nOpção selecionada: 6. Porcentagem do primeiro em relação ao segundo ");
            result = (num1 / num2) * 100;
            printf(" \n(%.2f / %.2f) * 100 = %.2f, a porcentagem é: %.2f\n ",num1, num2, result, result);
            break;
        case 7:
            printf(" \nOpção selecionada: 7. Média aritmética ");
            result = (num1 + num2) / 2;
            printf(" \n(%.2f + %.2f) / 2 = %.2f, a média aritmética é: %.2f\n ",num1, num2, result, result);
            break;
        default:
            printf("Opção inválida\n");
            break;
    }
}