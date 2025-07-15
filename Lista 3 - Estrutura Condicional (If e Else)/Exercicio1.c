#include <stdio.h>
#include <stdlib.h>

/*Escreva um Algoritmo que leia um número e o imprima caso ele seja maior que
20.*/

int main () {
    int num;
    printf("Digite um numero:\n");
    scanf("%d", &num);
    if (num>20){
        printf("O numero e: %d", num);
    }
    return 0;
}
