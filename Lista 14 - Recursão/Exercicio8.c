#include <stdio.h>
#include <stdlib.h>

/*Escreva uma função recursiva que rece\ba um número inteiro positivo n.
Calcule e retorne o seu fatorial n!:
n! = n * (n – 1) * (n – 2) * ... * 1*/

int fatorial (int n) {
    if (n==1) {
        return 1;
    }
    return n * fatorial (n-1);
}

int main()
{
    int n;
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    printf("\nFatorial de %d: %d\n", n, fatorial(n));
    return 0;
} 