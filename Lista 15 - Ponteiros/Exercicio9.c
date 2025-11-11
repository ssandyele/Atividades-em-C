#include <stdio.h>
#include <stdlib.h>

/*Considere a seguinte declaração: int a,*b,**c,***d.
Escreva um programa que leia a variável a e calcule e exiba o dobro,
o triplo e o quádruplo desse valor utilizando apenas os ponteiros b, c e d.
O ponteiro b deve ser usado para calcular o dobro, c, o triplo, e d, o quádruplo.*/

int main() {
    int a,*b,**c,***d;
    b=&a;
    c=&b;
    d=&c;

    printf("Digite um valor inteiro: ");
    scanf("%d", &a);

    printf("Dobro de %d: %d\n",a, 2 * (*b));
    printf("Triplo de %d: %d\n",a, 3 * (**c));
    printf("Quadruplo de %d: %d\n",a, 4 * (***d));
    return 0;
}