#include <stdio.h>

int main(){

    //Movimento da Torre
    for(int i = 1; i <= 5; i++){
        printf("Movimento da Torre: \n");
        printf("direita \n");
    }

    //Movimento do Bispo
    int bispo = 1;
    while (bispo <= 5)
    {
        printf("Movimento do Bispo: \n");
        printf("Cima, Direita \n");
        bispo++;
    }

    //Movimento da Rainha
    int rainha = 1;
    do
    {
        printf("Movimento da Rainha: \n");
        printf("Esquerda \n");
        rainha++;
    } while (rainha <=8);
    
    
    return 0;
}