#include <stdio.h>

int main () {
    int cartoes;

    printf("Cartoes amarelos recebidos: ");
    scanf("%d",&cartoes);

    if (cartoes >= 2) {
        printf("Jogador expulso \n");
        printf("QUANTIDADES CARTOES = %d",cartoes);
    } else {
        printf("Permanece no jogo \n");
        printf("QUANTIDADES CARTOES = %d",cartoes);
    }

    return 0;
}