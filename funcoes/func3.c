#include <stdio.h>

void ExibirMenu()
{
  // FUNCAO QUE MOSTRA UM MENU E NAO RETORNA NADA
  printf("=== MENU DE OPÇÕES === \n");
  printf("1 - VER SALDO \n");
  printf("2 - FAZER DEPÓSITO \n");
  printf("3 - FAZER SAQUE \n");
  printf("4 - SAIR \n");
  printf("=======================\n");
}

int main()
{
  // CHAMADA DA FUNCAO
  ExibirMenu();

  int opcao;
  printf("Escolha uma opção: ");
  scanf("%d", &opcao);

  printf("Você escolheu a opção %d.\n", opcao);
  return 0;
}