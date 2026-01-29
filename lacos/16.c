#include <stdio.h>

int main()
{

  int moedas, rodadas = 0, total = 0;

  while (total < 100)
  {

    printf("Insira a quantidade de moedas por rodada: ");
    scanf("%d", &moedas);

    if (moedas >= 1 && moedas <= 10)
    {
      total += moedas;
      rodadas++;
    }
    else
    {
      printf("Não pode ser menos que 1 e maior que 10.\n");
      continue;
    }
  }

  printf("Meta atingida em %d rodadas!, TOTAL MOEDAS = %d \n", rodadas, total);

  return 0;
}