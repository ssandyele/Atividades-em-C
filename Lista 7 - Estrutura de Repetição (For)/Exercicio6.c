#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10 e terminando em 0. Mostre uma mensagem “FIM!” após a contagem. */

int main () {
    int i;
    for(i=10; i>=0; i--) {
        printf("%d ", i);
    }
    printf("FIM");
    return 0;
}
