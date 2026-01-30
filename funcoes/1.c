#include <stdio.h>

float media(float n1, float n2)
{
  return (float)(n1 + n2) / 2;
}

int main()
{
  float n1, n2;

  printf("Insira as duas notas: \n");
  scanf("%f %f", &n1, &n2);

  printf("MÉDIA = %.2f", media(n1, n2));

  return 0;
}