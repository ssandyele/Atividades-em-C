#include <stdio.h>
#include <stdlib.h>

/*Escreva uma função recursiva que receba um valor inteiro e o retorne
invertido. Exemplo:
Número lido = 123. Número retornado = 321.*/

int inverter(int n, int invertido) {
    if (n == 0)
        return invertido;
    return inverter(n / 10, invertido * 10 + n % 10);
}

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Numero invertido = %d\n", inverter(num, 0));

    return 0;
}