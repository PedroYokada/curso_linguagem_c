#include <stdio.h>

int main()
{
    int totalProdutos;

    printf("Quantos produtos deseja cadastrar? ");
    scanf("%d", &totalProdutos);

    for (int i = 1; i <= totalProdutos; i++)
    {
        char nome[50];
        int est, estMin;

        printf("\nProduto %d: \n", i);

        printf("Nome do produto: ");
        scanf("%s", &nome);

        printf("Quantidade em estoque: ");
        scanf("%d", &est);

        printf("Estoque mínimo recomendado: ");
        scanf("%d", &estMin);

        if (est >= estMin)
        {
            printf("O produto '%s' tem estoque suficiente. (Estoque: %d , Mínimo: %d)", nome, est, estMin);
        }
        else
        {
            printf("O produto '%s' precisa ser reposto. (Estoque: %d , Mínimo: %d)", nome, est, estMin);
        }
        printf("\n");
    }
    return 0;
}