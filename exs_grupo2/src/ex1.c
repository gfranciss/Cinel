#include "../inc/exs2.h"

void    ex1()
{
    int num = 0;

    printf("Digite um número para ser feito a tabuada: ");
    scanf("%d", &num);
    
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}