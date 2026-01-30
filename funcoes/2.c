#include <stdio.h>

int vogais(char palavra[])
{

  int cont = 0;

  for (int i = 0; palavra[i] != '\0'; i++)
  {
    if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u' || palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U')
    {
      cont++;
    }
  }

  return cont;
}

int main()
{

  char texto[100];

  printf("Insira uma palavra: ");
  scanf("%s", texto);

  printf("Quantidade de vogais: %d", vogais(texto));
  return 0;
}
