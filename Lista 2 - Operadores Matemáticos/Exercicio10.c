#include <stdio.h>
#include <stdlib.h>

/*Para várias situações, a base de cálculo é o salário-mínimo. Fazer um Algoritmo que
leia o valor do salário-mínimo e o valor do salário de uma pessoa. Calcular e imprimir
quantos salários-mínimos essa pessoa ganha.*/

int main () {
    float s, q;
    printf("Digite o valor de seu salario:\n R$");
    scanf("%f", &s);
    float m = 1518;
    q=s/m;
    printf("Voce ganha aproximadamente %.1f salarios minimos.", q);
    return 0;
}
