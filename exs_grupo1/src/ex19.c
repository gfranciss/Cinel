#include "../inc/exs1.h"

void ex19()
{
    char    str[100];
    int     qtd = 0;
    float   price = 0;
    float   total = 0;

    printf("Digite o nome do produto: ");
    scanf("%s", str);
    printf("Digite a quantidade de produtos: ");
    scanf("%d", &qtd);
    printf("Digite o preço do produto: ");
    scanf("%f", &price);
    
    total = qtd * price;
    printf("O %s custa %.2f sem o desconto!\n", str, total);
    if(qtd <= 5)
    {
        total = total - (total * 0.02);
        printf("O %s custa %.2f com o desconto de 2%%!\n", str, total);
    }
    else if (qtd > 5 && qtd <= 10)
    {
        total = total - (total * 0.03);
        printf("O %s custa %.2f com o desconto de 3%%!\n", str, total);
    }
    else if (qtd > 10)
    {
        total = total - (total * 0.05);
        printf("O %s custa %.2f com o desconto de 5%%!\n", str, total);
    }

}