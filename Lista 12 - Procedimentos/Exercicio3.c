#include <stdio.h>
#include <stdlib.h>

/*Crie procedimento(s), que solicite um número do usuário (n) e imprima:
1 `
1 2
1 2 3
.. .. ..
1 2 3 .. N*/

int linhas (int L){
    int j=1;
    for (int i=1;j<=L;i++) {
        printf("%d ", i);
        if (i==j) {
            printf("\n");
            j++;
            i=0;
        }
    }
}

int main() {
    int x;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    printf("\n");
    linhas(x);
    return 0;
}