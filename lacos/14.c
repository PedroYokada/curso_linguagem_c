#include <stdio.h>

int main()
{
  int prod, qnt, estMin;
  char nome[30];

  printf("Produtos a ser cadastrados : ");
  scanf("%d", &prod);

  for (int i = 1; i <= prod; i++)
  {
    printf("Produto %d: \n", i);

    printf("Insira o nome do produto: ");
    scanf("%s", &nome);

    printf("Quantidade em estoque: ");
    scanf("%d", &qnt);

    printf("Estoque minimo do produto: ");
    scanf("%d", &estMin);

    if (qnt >= estMin)
    {
      printf("O produto '%s' tem estoque suficiente! (Estoque: %d, Minimo: %d \n) ", nome, qnt, estMin);
    }
    else
    {
      printf("O produto '%s' precisa ser reposto! (Estoque: %d, Minimo: %d \n) ", nome, qnt, estMin);
    }
    printf("\n");
  }

  return 0;
}