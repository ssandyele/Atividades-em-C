#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Faça um programa que leia três números inteiros positivos e efetue o cálculo
de uma das seguintes médias de acordo com um valor numérico digitado pelo
usuário e mostrado na tabela a seguir:
| Número digitado | Média                                               |
| --------------- | --------------------------------------------------- |
| 1               | Geométrica:                                         |
|                 | x * y * z                                           |
| 2               | Ponderada:                                          |
|                 | (x + 2*y + 3*z)/6                                   |
| 3               | Harmônica:                                          |
|                 | 1/[(1/x) + (1/y) + (1/z)]                           |
| 4               | Aritmética:                                         |
|                 | (x + y + z)/3                                       |

*/

int main () {
    int x, y, z, op;
    float res;
    printf("Digite tres numeros inteiros:\n");
    scanf("%d %d %d", &x, &y, &z);
    printf("Escolha o tipo de media:\n1 - Geometrica\n2 - Ponderada\n3 - Harmonica\n4 - Aritmetica\n");
    scanf("%d", &op);
    switch (op) {
    case 1:
        res = cbrt(x * y * z);
        printf("Media Geometrica = %.2f", res);
        break;
    case 2:
        res = (x * 1 + y * 2 + z * 3) / 6.0;
        printf("Media Ponderada = %.2f", res);
        break;
    case 3:
        res = 3.0 / (1.0/x + 1.0/y + 1.0/z);
        printf("Media Harmonica = %.2f", res);
        break;
    case 4:
        res = (x + y + z) / 3.0;
        printf("Media Aritmetica = %.2f", res);
        break;
    default:
        printf("ERRO!");
    }
    return 0;
}
