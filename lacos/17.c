#include <stdio.h>

int main()
{
  int palpite;

  do
  {
    printf("Adivinhe um numero de 1 a 10: ");
    scanf("%d", &palpite);

    if (palpite < 1 || palpite > 10)
    {
      printf("Numero invalido, tente novamente!\n");
    }
    else if (palpite != 7)
    {
      printf("Palpite errado, tente novamente!\n");
    }

  } while (palpite != 7);

  printf("Palpite correto, numero: %d", palpite);
}
