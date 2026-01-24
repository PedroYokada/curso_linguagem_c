#include <stdio.h>

int main()
{

  int senha;
  do
  {
    printf("Digite a senha correta (12345): ");
    scanf("%d", &senha);

  } while (senha != 12345);

  printf("Acesso liberado!");

  return 0;
}