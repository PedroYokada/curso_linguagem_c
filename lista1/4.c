#include <stdio.h>

int main () {

    int vitorias,derrotas,empate,qntV,qntD,qntE,total;

    printf("Insira o numero de vitórias: ");
    scanf("%d",&vitorias);

    printf("Insira o numero de empates: ");
    scanf("%d",&empate);

    printf("Insira o numero de derrotas: ");
    scanf("%d",&derrotas);

    qntV = vitorias * 3;
    qntE = empate * 1;
    qntD = 0;
    total = qntD + qntE + qntV;

    printf("-- Quantidade de pontos -- \n");
    printf("Vitória = %d \n",qntV);
    printf("Empates = %d \n",qntE);
    printf("Derrotas = %d \n",qntD);
    printf("TOTAL PONTOS = %d \n",total);

    return 0;
}