#include "../inc/exs2.h"

int    askAge()
{
    int         age = 0;

    printf ("Digite a idade da pessoa: ");
    scanf("%d", &age);

    return (age);
}

void    ex8()
{
    char        gender;
    int         masculine = 0, feminine = 0;
    int         adultM = 0, adultF = 0;
    int         age = 0, ageM = 0, ageF = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o sexo da pessoa %d (M/F): ", i + 1);
        scanf(" %c", &gender);
        if (gender == 'M')
        {
            age = askAge();
            ageM += age;
            if (age >= 18)
                adultM++;
            masculine++;
        }
        else if (gender == 'F')
        {
            age = askAge();
            ageF += age;
            if (age >= 18)
                adultF++;
            feminine++;
        }
        else
        {
            printf("Opção inválida\n");
            i--;
        }        
    
    }
    printf("Existem %d pessoas do sexo feminino e %d são maiores de idade e a média de idade feminina é: %2.f\n", feminine, adultF, ageF / feminine);
    printf("Existem %d pessoas do sexo masculino e %d são maiores de idade e a média de idade masculina é: %2.f\n", masculine, adultM, ageM / masculine);

}