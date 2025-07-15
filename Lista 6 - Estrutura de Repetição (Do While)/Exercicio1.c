#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/

int main () {
    int soma=0, num=2, count=1;
    do{
        soma=soma+num;
        num=num+2;
        count++;
    } while (count<=50);
    printf("%d", soma);
    return 0;
}
