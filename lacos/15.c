#include <stdio.h>
#include <stdbool.h>

int main()
{
  int quantidadeCarros;

  printf("Insira a quantidade de carros: ");
  scanf("%d", &quantidadeCarros);

  for (int i = 1; i <= quantidadeCarros; i++)
  {
    char modelo[50];
    int ano;
    int carro_funcionando;

    printf("Modelo: ");
    scanf("%s", &modelo);

    printf("Ano de fabricacao: ");
    scanf("%d", &ano);

    printf("Está funcionando normalmente (1 ou 0)?: ");
    scanf("%d", &carro_funcionando);

    if (ano < 2005 && carro_funcionando == 0)
    {
      printf("O carro %s precisa de REPAROS URGENTES! \n", modelo);
    }
    else if (ano < 2005)
    {
      printf("O carro %s  é antigo, recomenda-se uma revisão! \n", modelo);
    }
    else if (carro_funcionando == 0)
    {
      printf("O carro %s precisa de manutenção! \n", modelo);
    }
    else
    {
      printf("O carro %s está em boas condições! \n", modelo);
    }
  }
}
