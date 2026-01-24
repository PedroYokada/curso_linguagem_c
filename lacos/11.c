#include <stdio.h>

int main()
{

  int coins = 0, qnt;

  while (coins < 100)
  {
    printf("Numero de moedas (1 a 10): ");
    scanf("%d", &qnt);

    if (qnt < 1 || qnt > 10)
    {
      printf("Numero de moedas invalido!\n");
    }
    else
    {
      coins += qnt;
    }
  }

  printf("QUANTIDADE MOEDAS = %d", coins);

  return 0;
}