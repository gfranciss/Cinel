#include "../inc/exs2.h"

void    ex7()
{
    int     qtd_eleitores = 0;
    int     votos_brancos = 0, votos_nulos = 0, votos_validos = 0;
    int     total_votos = 0;

    printf("Digite a quantidade de eleitores: ");
    scanf("%d", &qtd_eleitores);
    printf("Digite a quantidade de votos brancos: ");
    scanf("%d", &votos_brancos);
    printf("Digite a quantidade de votos nulos: ");
    scanf("%d", &votos_nulos);
    printf("Digite a quantidade de votos válidos: ");
    scanf("%d", &votos_validos);
    total_votos = votos_brancos + votos_nulos + votos_validos;
    if (total_votos != qtd_eleitores)
    {
        printf("A quantidade de votos não corresponde a quantidade de eleitores.\n");
        return ;
    }
    printf("\nA porcentagem de votos brancos é: %.2f%%\n", (float)votos_brancos / total_votos * 100);
    printf("A porcentagem de votos nulos é: %.2f%%\n", (float)votos_nulos / total_votos * 100);
    printf("A porcentagem de votos válidos é: %.2f%%\n", (float)votos_validos / total_votos * 100);
}