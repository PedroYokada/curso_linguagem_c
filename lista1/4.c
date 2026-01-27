#include <stdio.h>

int main () {

    int vitorias,derrotas,empate,pontos;

    printf("Insira o numero de vitórias: ");
    scanf("%d",&vitorias);

    printf("Insira o numero de empates: ");
    scanf("%d",&empate);

    printf("Insira o numero de derrotas: ");
    scanf("%d",&derrotas);

    pontos = (vitorias * 3) + (empate * 1) + (derrotas * 0);

    printf("-- Quantidade de pontos -- \n");
    printf("Vitória = %d \n",vitorias);
    printf("Empates = %d \n",empate);
    printf("Derrotas = %d \n",derrotas);
    printf("TOTAL PONTOS = %d \n",pontos);

    return 0;
}