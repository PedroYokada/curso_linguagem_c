#include <stdio.h>

int main()
{
    int idade, qnt_gols;
    printf("Insira a idade do jogador: ");
    scanf("%d", &idade);
    printf("Insira a quantidade de gols jogador: ");
    scanf("%d", &qnt_gols);

    if (idade <= 20 && qnt_gols > 10)
    {
        printf("Jovem talento promissor!");
    }
    else if (idade <= 20 && qnt_gols <= 10)
    {
        printf("Jovem em desenvolvimento.");
    }
    else if (idade > 20 && qnt_gols > 15)
    {
        printf("Jogador experiente em grande fase!");
    }
    else
    {
        printf("Estevão");
    }

    return 0;
}