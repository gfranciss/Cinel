#include "../inc/exs1.h"

int main()
{
    int op = 0;
    printf("Digite o exercicio que quer testar:\n");
    printf("OBS: A calculadora está como opção 0\n");
    scanf("%d", &op);
    switch (op)
    {
        case 1:
            ex1();
            break;
        case 2:
            ex2();
            break;
        case 3:
            ex3();
            break;
        case 4:
            ex4();
            break;
        case 5:
            ex5();
            break;
        case 6:
            ex6();
            break;
        case 7:
            ex7();
            break;
        case 8:
            ex8();
            break;
        case 0:
            calculadora();
            break;
        case 9:
            ex9();
            break;
        case 10:
            ex10();
            break;
        case 11:
            ex11();
            break;
        default:
            printf("Opção inválida\n");
    }
    return 0;
}