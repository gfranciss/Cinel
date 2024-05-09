#include "../inc/exs1.h"

void    ex23()
{
    int     code = 0;

    printf("Digite o código do produto: ");
    scanf("%d", &code);

    switch (code)
    {
        case 100:
            printf("O produto é: Cachorro quente\n");
            printf("O preço é: 2.50€\n");
            break;
        case 101:
            printf("O produto é: Hambúrguer simples\n");
            printf("O preço é: 3.50€\n");
            break;
        case 102:
            printf("O produto é: Hambúrguer especial\n");
            printf("O preço é: 4.50€\n");
            break;
        case 103:
            printf("O produto é: Bifana simples\n");
            printf("O preço é: 2.70€\n");
            break;
        case 104:
            printf("O produto é: Bifana com queijo e bacon\n");
            printf("O preço é: 3.55€\n");
            break;
        case 105:
            printf("O produto é: Refrigerante\n");
            printf("O preço é: 1.75€\n");
            break;
        default:
            printf("Produto não cadastrado!\n");
    }
}