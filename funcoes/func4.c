#include <stdio.h>

int ParImpar(int num)
{
  if (num % 2 == 0)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}
int main()
{
  int num;

  printf("Insira um numero: ");
  scanf("%d", &num);

  if (ParImpar(num))
  {
    printf("Numero Impar: %d\n", num);
  }
  else
  {
    printf("Numero Par: %d\n", num);
  }

  return 0;
}