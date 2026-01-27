#include <stdio.h>

int main()
{
  int a,b,op;

  printf("Insira A: ");
  scanf("%d", &a);

  printf("Insira B: ");
  scanf("%d", &b);

  printf("Insira a operacao (1=soma,2=sub,3=multi,4=divisao): ");
  scanf("%d", &op);

  if (op == 1)
  {
    printf("SOMA = %d", a + b);
  }
  else if (op == 2)
  {
    printf("SUBTRACAO = %d", a - b);
  }
  else if (op == 3)
  {
    printf("MULTIPLICACAO = %d", a * b);
  }
  else if (op == 4)
  {
    if (a == 0 || b == 0)
    {
      printf("Nao é permitido zero na divisao!");
    }
    else
    {
      printf("DIVISAO = %d", a / b);
    }
  }
  else
  {
    printf("Operacao invalida!");
  }

  return 0;
}