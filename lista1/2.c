#include <stdio.h>

int main () {
    int gols,partidas;
    float media;

    printf("Insira a quantidade de gols: ");
    scanf("%d",&gols);

    printf("Insira a quantidade de partidas: ");
    scanf("%d",&partidas);

    media = gols/partidas;

    printf("-- Medias de gols por partida --  \n");
    printf("MEDIA = %.2f",media);

    return 0;
}