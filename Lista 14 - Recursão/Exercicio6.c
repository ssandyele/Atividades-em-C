#include <stdio.h>
#include <stdlib.h>

/*Escreva uma função recursiva que receba por parâmetro dois valores
inteiros x e y e calcule e retorne o resultado de xy para o programa
principal.*/

int potencia (int x, int y) {
    if (y==0) {
        return 1;
    }
    return x * potencia(x,y-1);
}

int main()
{
    int x, y;
    printf("Digite um valor para x: ");
    scanf("%d", &x);
    printf("Digite um valor para y: ");
    scanf("%d", &y);

    printf("\n%d elevado a %d e igual a: %d\n", x, y, potencia(x,y));
    return 0;
}