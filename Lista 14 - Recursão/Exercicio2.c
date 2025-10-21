#include <stdio.h>
#include <stdlib.h>

/*Crie uma função recursiva que receba um número inteiro N e imprima todos
os números naturais de 0 até N em ordem crescente.*/

int imprime (int n) {
    if (n==0) {
        printf("%d ", n);
        return 0;
    }
    imprime (n-1);
    printf("%d ", n);
}

int main () {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    imprime(n);
    printf("\n");
    return 0;
}