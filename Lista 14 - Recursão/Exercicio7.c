#include <stdio.h>
#include <stdlib.h>

/*A multiplicação de dois números inteiros pode ser feita através de somas
sucessivas (por exemplo, 2 * 3 = 2 + 2 + 2). Crie uma função recursiva que
calcule a multiplicação por somas sucessivas de dois inteiros.*/

int mult (int x, int y) {
    if (y==0) {
        return 0;
    }
    return x + mult(x,y-1);
}

int main()
{
    int x, y;
    printf("Digite um valor para x: ");
    scanf("%d", &x);
    printf("Digite um valor para y: ");
    scanf("%d", &y);

    printf("\n%d vezes %d e igual a: %d\n", x, y, mult(x,y));
    return 0;
}