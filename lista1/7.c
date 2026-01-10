#include <stdio.h>

int main()
{
    int idade;

    printf("Insira a idade do jogador: ");
    scanf("%d", &idade);

    if (idade <= 20)
    {
        printf("Deve-se jogar na categoria sub-20");
    }
    else
    {
        printf("Deve-se jogar na categoria profissional");
    }

    return 0;
}