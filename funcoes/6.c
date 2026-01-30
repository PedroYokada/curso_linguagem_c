#include <stdio.h>

void desempenho(int qnt, float n1, float n2, float n3)
{

  for (int i = 1; i <= qnt; i++)
  {
    float media = 0;

    printf("Insira as três notas do %d jogador: \n", i);
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (float)(n1 + n2 + n3) / 3;
    if (media >= 9)
    {
      printf("EXCELENTE, NOTA do %dº jogador = %.2f", i, media);
    }
    else if (media >= 7)
    {
      printf("BOM, NOTA do %dº jogador = %.2f", i, media);
    }
    else if (media >= 5)
    {
      printf("REGULAR, NOTA do %dº jogador = %.2f", i, media);
    }
    else
    {
      printf("RUIM, NOTA do %dº jogador = %.2f", i, media);
    }
    printf("\n");
  }
}

int main()
{

  int jogadores, n1, n2, n3;

  printf("Insira a quantidade de jogadores: ");
  scanf("%d", &jogadores);

  desempenho(jogadores, n1, n2, n3);
}