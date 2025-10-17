#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que contenha duas variáveis inteiras.
Leia essas variáveis do teclado. Em seguida, compare seus endereços
e exiba o conteúdo do maior endereço.*/

int main() {
    int A, B;
    printf("Digite um valor inteiro: ");
    scanf("%d", &A);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &B);
    printf("\n---ENDERECOS DE MEMORIA---\nA: %X\tB:%X\n\n", &A, &B);
    if(&A>&B) {
        printf("\nConteudo do maior endereco (A): %d\n", A);
    } else{
        printf("\nConteudo do maior endereco (B): %d\n", B);
    }
    return 0;
}