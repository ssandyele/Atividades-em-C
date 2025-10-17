#include <stdio.h>
#include <stdlib.h>

/*Elabore um procedimento que receba como parâmetro um valor inteiro n e
gere como saída um triângulo lateral formado por asteriscos conforme o
exemplo a seguir, em que usamos n = 4:
*
**
***
****
***
**
*

*/

void triangulo (int N) {
    for (int i=1; i<=N; i++) {
        for(int j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i=N-1; i>=1; i--) {
        for(int j=i;j>=1;j--) {
            printf("*");
        }
        printf("\n");
    }
}

int main () {
    int n;
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);
    printf("\n");
    triangulo(n);
    return 0;
}