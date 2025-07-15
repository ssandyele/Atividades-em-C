#include <stdio.h>
#include <stdlib.h>

/*Escreva um Algoritmo que leia um número e informe se ele é divisível por 3 e por
7*/

int main () {
    int num;
    printf("Digite um numero:\n");
    scanf("%d", &num);
    if (num%3==0&&num%7==0) {
        printf("O numero %d e divisivel por 3 e 7 ao mesmo tempo", num);
    }
    else {
        printf("O numero %d NAO e divisivel por 3 e 7 ao mesmo tempo", num);
    }
    return 0;
}
