#include <stdio.h>

int main() {
    int torre;
    int bispo = 1;
    int rainha = 1;

    //Movimento da torre

    for (int torre = 0; torre < 5; torre++) {
        printf("Mova uma casa pra frente\n");
    }

    //Movimento do Bispo

    while (bispo <= 5) {
        printf("Mover uma casa na diagonal direita\n", bispo);
        bispo++;
    }

    //Movimento da Rainha

    do {

        printf("Mova uma casa para esquerda\n", rainha);
        rainha++;

    } while (rainha <= 7);


    

    return 0;
}
