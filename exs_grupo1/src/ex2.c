#include "../inc/exs1.h"

void    contaRetangulo()
{
    float base = 0;
    float altura = 0;
    
    printf("Digite a base do retangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);
    printf("A area do retangulo é: %.2f\n", base * altura);
    printf("O perimetro do retangulo é: %.2f\n", 2 * (base + altura));
}
void   contaCirculo()
{
    float raio = 0;
    const double pi = 3.14;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    printf("A area do circulo é: %.2f\n", pi * raio * raio);
    printf("O perimetro do circulo é: %.2f\n", 2 * pi * raio);
}

void    ex2(void)
{
    int opcao = 0;
    printf("Caso queria calcular a area e o perimetro de um retangulo digite 1\n");
    printf("Caso queria calcular a area e o perimetro de um circulo digite 2\n");
    printf("Digite um número: ");
    scanf("%d", &opcao);
    if (opcao == 1)
        contaRetangulo();
    else if (opcao == 2)
        contaCirculo();
    else
        printf("Opção inválida\n");
}
