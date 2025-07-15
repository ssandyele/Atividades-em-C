#include <stdio.h>
#include <stdlib.h>


/*Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10
e terminando em 0. Mostre uma mensagem “FIM!” após a contagem.*/

int main () {
    int i = 10;
    do {
        printf("%d\n", i);
        i--;
    } while (i>=0);
    printf("FIM");

    return 0;
}
