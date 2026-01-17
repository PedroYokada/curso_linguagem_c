#include <stdio.h>

int main()
{
    char produto[50];
    int est, estMin, prod;

    printf("Quantos produtos deseja cadastrar? ");
    scanf("%d", &prod);

    for (int i = 1; i <= prod; i++)
    {
        printf("Nome do produto: ");
        scanf("%s", &produto);

        printf("Quantidade em estoque: ");
        scanf("%d", &est);

        printf("Estoque mínimo recomendado: ");
        scanf("%d", &estMin);

        if (est >= estMin)
        {
            printf("O produto %s tem estoque suficiente. (Estoque: %d , Mínimo: %d)", produto, est, estMin);
        }
        else
        {
            printf("O produto %s precisa ser reposto. (Estoque: %d , Mínimo: %d)", produto, est, estMin);
        }
        printf("\n");
    }

    return 0;
}