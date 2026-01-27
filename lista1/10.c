#include <stdio.h>

int main()
{

    int cap, qnt;
    float ocup;

    printf("Insira a capacidade total do estadio: ");
    scanf("%d", &cap);

    printf("Insira a quantidade de torcedores: ");
    scanf("%d", &qnt);

    ocup = (float)qnt / cap * 100;

    printf("LOTACAO: %.2f%% \n", ocup);

    if (ocup > 90)
    {
        printf("Lotado!");
    }
    else if (ocup >= 70)
    {
        printf("Ótima presença de público!");
    }
    else if (ocup >= 50)
    {
        printf("Público razoável.");
    }
    else
    {
        printf("Morumbis.");
    }
}