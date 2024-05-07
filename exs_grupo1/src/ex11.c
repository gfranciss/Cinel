#include "../inc/exs1.h"

void    ex11()
{
    int num[4];
    int i = 0;
    int maior = 0;
    
    while (i <= 4)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &num[i]);
        i++;
    }
    maior = num[0];
    i = 0;
   for (i = 1; i <= 4; i++) 
   {
        if (num[i] > maior)
            maior = num[i];
   }
    printf("O maior número é %d\n", maior);
}