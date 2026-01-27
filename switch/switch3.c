#include <stdio.h>

int main()
{
  int opcao;

  printf("Digite uma opcao: ");
  scanf("%d", &opcao);

  switch (opcao) {

    case 1:
      printf("FASE 1");
      break;
    case 2:
      printf("FASE 2");
      break;
    case 3:
      printf("FASE 3");
      break;
    case 4:
      printf("FASE 4");
      break;
    default:
      printf("OPCAO INVALIDA!");
  }

  return 0;
}