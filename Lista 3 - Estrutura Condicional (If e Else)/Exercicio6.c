#include <stdio.h>
#include <stdlib.h>

/*Escreva um Algoritmo que leia um número e imprima a raiz quadrada do número
caso ele seja positivo ou igual a zero e o quadrado do número caso ele seja
negativo.*/

int main () {
    int num, quad;
    float raiz;
    printf("Digite um numero:\n");
    scanf("%d", &num);
    if (num>=0) {
        raiz= sqrt(num);
        printf("A raiz quadrada desse numero e: %.2f\n", raiz);
    } else {
        quad=pow(num,2);
        printf("O quadrado desse numero e: %d\n", quad);
    }
    return 0;
}
