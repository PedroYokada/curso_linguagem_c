#include <stdio.h>

int maiorTres(int n1, int n2, int n3)
{
  int maior;
  if (n1 >= n2 && n1 >= n3)
    maior = n1;
  else if (n2 >= n1 && n2 >= n3)
    maior = n2;
  else
    maior = n3;

  return maior;
}

int main()
{
  int n1, n2, n3;

  printf("Insira três números: \n");
  scanf("%d %d %d", &n1, &n2, &n3);

  printf("MAIOR NÚMERO = %d", maiorTres(n1, n2, n3));

  return 0;
}