#include "../inc/exs2.h"

int    option()
{
    char       op;

    printf("Gostou do produto? (S/N): ");
    scanf(" %c", &op);
    
    while (op != 'S' && op != 'N')
    {
        printf("Opção inválida\n");
        printf("Gostou do produto? (S/N): ");
        scanf(" %c", &op);
    }
    if (op == 'S')
        return (1);
    return (0);
}

void    ex11()
{
    int         masculine = 0, feminine = 0;
    char        op;
    int         opM = 0, opF = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o sexo da pessoa %d (M/F): ", i + 1);
        scanf(" %c", &op);
        while (op != 'F' && op != 'M')
        {
            printf("Opção inválida\n");
            printf("Digite o sexo da pessoa %d (M/F): ", i + 1);
            scanf(" %c", &op);
        }
        if (op == 'M')
        {
            masculine++;
            opM += option();
        }
        else
        {
            feminine++;
            opF += option();
        }
    }
    printf("Existem %d pessoas que gostaram do produto\n", opM + opF);
    printf("Existem %d pessoas que não gostaram do produto\n", 5 - (opM + opF));
    printf("%d%% dos homens gostaram do produto\n", opM / masculine * 100);
    if (opF > opM)
        printf("O produto foi mais bem aceito pelas mulheres\n");
    else if (opF < opM)
        printf("O produto foi mais bem aceito por homens\n");
    else
        printf("O produto foi igualmente aceito por ambos os sexos\n");
    
}