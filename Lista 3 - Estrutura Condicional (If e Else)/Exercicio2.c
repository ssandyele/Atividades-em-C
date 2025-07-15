#include <stdio.h>
#include <stdlib.h>

/*Construa um Algoritmo que leia dois valores numéricos inteiros e efetue a adição;
caso o resultado seja maior que 10, apresentá-lo.*/

int main () {
    int num1, num2;
    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &num1, &num2);
    int soma=num1+num2;
    if (soma>10) {
        printf("O resultado da adicao e: %d\n", soma);
    }
    return 0;
}
