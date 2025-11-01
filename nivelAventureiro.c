#include <stdio.h>

int main() {

    for(int i = 1; i <= 5; i++){
        printf("Movimento da Torre: \n");
        printf("Direita \n");
    }

    int bispo = 1;
    while (bispo <= 5) {
        printf("Movimento do Bispo: \n");
        printf("Cima, Direita \n");
        bispo++;
    }

    int rainha = 1;
    do {
        printf("Movimento da Rainha: \n");
        printf("Esquerda \n");
        rainha++;
    } while (rainha <= 8);

    printf("\n");
    printf("Movimento do Cavalo:\n");

    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    for (int i = 1; i <= movimentosBaixo; i++) {
        printf("Baixo\n");
        int j = 1;
        while (j <= movimentosEsquerda) {
            if (i == movimentosBaixo) {
                printf("Esquerda\n");
            }
            j++;
        }
    }

    return 0;
}
