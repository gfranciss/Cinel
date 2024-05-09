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
        case 12:
            ex12();
            break;
        case 13:
            ex13();
            break;
        case 14:
            ex14();
            break;
        case 15:
            ex15();
            break;
        case 16:
            ex16();
            break;
        case 17:
            ex17();
            break;
        case 18:
            ex18();
            break;
        case 19:
            ex19();
            break;
        case 20:
            ex20();
            break;
        case 21:
            ex21();
            break;
        case 22:
            ex22();
            break;
        case 23:
            ex23();
            break;
        case 24:
            ex24();
            break;
        case 25:
            ex25();
            break;
        default:
            printf("Opção inválida\n");
    }
    return 0;
}