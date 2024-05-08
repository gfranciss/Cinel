#include "../inc/exs1.h"

void    ex15()
{
    int note = 0;

    printf("Digite a nota: ");
    scanf("%d", &note);
    if(note >= 0 && note <= 6)
        printf("Fraco\n");
    else if(note > 6 && note <= 10)
        printf("Insuficiente\n");
    else if(note > 10 && note <= 15)
        printf("Satifaz\n");
    else if(note > 15 && note <= 18)
        printf("Bom\n");
    else if(note > 18 && note <= 20)
        printf("Muito Bom\n");
    else
        printf("Nota inválida\n");
}
