#include "../inc/exs1.h"

void    ex6()
{
    int segundos = 0;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);
    printf("A quantidade de horas é: %d\n", segundos / 3600);
    printf("A quantidade de minutos é: %d\n", (segundos % 3600) / 60);
    printf("A quantidade de segundos é: %d\n", (segundos % 3600) % 60);
}