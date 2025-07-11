#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia dois números inteiros e depois os imprima na
ordem inversa em que eles foram lidos.*/

int main () {
    int num1, num2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d",&num1,&num2);
    printf("%d %d",num2,num1);
    return 0;
}
