#include <stdio.h>

int somar(int a, int b) //parametros
{
  return a + b;
}

int main()
{
  int resultado = somar(3,2); // argumentos
  printf("Resultado: %d",resultado);
  printf("Resultado: %d",somar(3,2));
  
  return 0;
}