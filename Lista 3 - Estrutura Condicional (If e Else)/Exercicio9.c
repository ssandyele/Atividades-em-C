#include <stdio.h>
#include <stdlib.h>

/*Escreva um Algoritmo que receba um número e imprima uma das mensagens: “é
múltiplo de 3” ou “não é múltiplo de 3”.*/

int main () {
    int num;
    printf("Digite um numero:\n");
    scanf("%d", &num);
    if (num%3==0) {
        printf("E multiplo de 3");
    }
    else {
        printf("Nao e multiplo de 3");
    }

    return 0;
}
