#include <stdio.h>

int main()
{
    int capacidade, torcedores;
    float ocupacao;

    printf("Insira a %% da capacidade do estadio: ");
    scanf("%d", &capacidade);

    printf("Insira a quantidade de torcedores: ");
    scanf("%d", &torcedores);

    ocupacao = (torcedores * 100) / capacidade;

    if (ocupacao > 90)
    {
        printf("Lotado!");
    }
    else if (ocupacao >= 70)
    {
        printf("Ótima presença de público!");
    }
    else if (ocupacao >= 50)
    {
        printf("Público razoável!");
    }
    else
    {
        printf("Morumbis!");
    }

    return 0;
}