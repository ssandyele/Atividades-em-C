#include <stdio.h>
#include <stdlib.h>

/*Elabore um programa que solicite ao usuário entrar com o valor do dia, mês
e ano (inteiros). Em seguida, imprima os valores lidos separados por uma barra
(\).*/

int main () {
    int dia, mes, a;
    printf("Digite o dia:\n");
    scanf("%d",&dia);
    printf("Digite o mes:\n");
    scanf("%d", &mes);
    printf("Digite o ano:\n");
    scanf("%d", &a);
    printf("\nA data fornecida foi: %d\\%d\\%d\n", dia, mes, a);
    return 0;
}
