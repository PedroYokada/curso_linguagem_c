#include <stdio.h>

void dimensao(int asterisco, char caracter)
{

  for (int i = 1; i <= asterisco; i++)
  {
    for (int j = 1; j <= asterisco; j++)
    {
      printf("%c ", caracter);
    }
    printf("\n");
  }
}
int main()
{

  int quadrado;
  char caracter;

  printf("Insira a dimensão do quadrado: ");
  scanf("%d", &quadrado);

  printf("Insira o tipo de caracter(*,#,$,/): \n");
  scanf(" %c", &caracter);

  dimensao(quadrado, caracter);
}