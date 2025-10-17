#include <stdio.h>
#include <stdlib.h>

/*Crie um procedimento que peça 2 informações ao usuário: linhas e colunas.
Ele deve chamar uma função que desenhe um retângulo na tela usando os
caracteres ‘+’ , ‘−’ e ‘| ‘. Esta função deve receber dois parâmetros: linhas e
colunas. Ex.: linhas= 2; colunas = 8*/

void retangulo (int L, int C){
    int i, j;
    printf("+");
    for (i=1;i<=C;i++) {
        printf("-");
    }
    printf("+\n");
    for (j=1;j<=L;j++){
        printf("|");
        for (i=1;i<=C;i++) {
            printf(" ");
        }
        printf("|\n");
    }
        printf("+");
    for (i=1;i<=C;i++) {
        printf("-");
    }
    printf("+\n");
}
int main() {
    int c, l;
    printf("Digite o numero de linhas: ");
    scanf("%d", &l);
    printf("Digite o numero de colunas: ");
    scanf("%d", &c);
    printf("\n");
    retangulo(l,c);
    return 0;
}