#include "../inc/exs1.h"

void    ex12()
{
    int num, centena, dezena, unidade, soma;

    printf("Digite um número de três dígitos: ");
    scanf("%d", &num);
    
    centena = num / 100;
    dezena = (num % 100) / 10;
    unidade = num % 10;
    
    printf("Centena: %d\nDezena: %d\nUnidade: %d\n", centena, dezena, unidade);
    soma = centena + dezena + unidade;
    printf("A soma dos dígitos é: %d\n", soma);

}