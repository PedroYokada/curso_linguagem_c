#include <stdio.h>
#include <stdbool.h>

int main()
{

    int qnt, ano;
    bool estado;
    char modelo[20];

    printf("Insira a quantidade de carros para registro: ");
    scanf("%d", &qnt);

    for (int i = 1; i <= qnt; i++)
    {
        printf("Insira o modelo: ");
        scanf("%s", &modelo);

        printf("Insira o ano de fabriacao: ");
        scanf("%d", &ano);

        printf("Está funcionando normalmente? (0=nao/1=sim): ");
        scanf("%d", &estado);

        if (ano < 2005 && !estado)
        {
            printf("O carro %s precisa de REPAROS URGENTES!\n", modelo);
        }
        else if (ano < 2005 && estado)
        {
            printf("O carro %s é antigo, recomenda-se uma revisão!\n", modelo);
        }
        else if (ano >= 2005 && !estado)
        {
            printf("O carro %s precisa de manutenção!\n", modelo);
        }
        else
        {
            printf("O carro %s está em boas condições!\n", modelo);
        }
    }

    printf("PROGRAMA ENCERRADO!");

    return 0;
}