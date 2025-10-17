#include <stdio.h>
#include <stdlib.h>

/*Faça um Procedimento em algoritmo que recebe como parâmetro um inteiro
no intervalo de 1 a 9 e mostre a seguinte tabela de multiplicação
1
2 4
3 6 9
4 8 12 16
5 10 15 20 25
...
9 18 27 36 45 54 63 72 81
*/

void multiplicacao (int M) {
    int i, j, R;
    for (i=1;i<=M;i++) {
        for (j=1; j<=i;j++) {
            R=i*j;
            printf("%d ", R);
        }
        printf("\n");
    }
}

int main () {
    int m;
    do {
    printf("Digite um numero inteiro de 1 a 9: ");
    scanf("%d", &m);
    } while(m<1||m>9);
    printf("\n");
    multiplicacao(m);
    return 0;
}