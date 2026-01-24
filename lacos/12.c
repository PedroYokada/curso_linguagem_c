#include <stdio.h>

int main()
{
  int num;

  do
  {
    printf("Descubra o numero secreto (1 a 10): ");
    scanf("%d", &num);

    if (num < 1 || num > 10)
    {
      printf("Numero invalido! \n");
    }
  } while (num != 7);

  printf("NUMERO SECRETO = %d", num);

  return 0;
}