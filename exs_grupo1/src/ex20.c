#include "../inc/exs1.h"

void    ex20()
{
    float   weight = 0;
    float   height = 0;
    float   imc = 0;

    printf("Digite o peso em Kg: ");
    scanf("%f", &weight);
    printf("Digite a altura em m: ");
    scanf("%f", &height);

    imc = weight / (height * height);

    printf("IMC: %.2f\n", imc);
    if(imc < 17)
        printf("Muito abaixo do peso!\n");
    else if(imc >= 17 && imc < 18.5)
        printf("Abaixo do peso!\n");
    else if(imc >= 18.5 && imc < 25)
        printf("Peso ideal!\n");
    else if(imc >= 25 && imc < 30)
        printf("Algum peso a mais!\n");
    else if(imc >= 30 && imc < 35)
        printf("Obesidade!\n");
    else if(imc >= 35 && imc < 40)
        printf("Obesidade severa!\n");
    else if(imc >= 40)
        printf("Obesidade mórbida!\n");
}