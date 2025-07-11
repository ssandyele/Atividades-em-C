#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia dois valores do tipo float. Use um único
comando de leitura para isso. Em seguida, imprima os valores lidos na ordem
inversa em que eles foram lidos.*/

int main () {
    float v1, v2;
    printf("Digite dois valores: ");
    scanf("%f %f", &v1, &v2);
    printf("%f\n%f",v2,v1);
    return 0;
}
