#include <stdio.h>
#include <stdlib.h>

/*Construir um Algoritmo que leia dois números e efetue a adição. Caso o valor
somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8;
caso o valor somado seja menor ou igual a 20, este deverá ser apresentado
subtraindo-se 5.*/

int main () {
    int num1, num2;
    printf("Digite dois numeros:\n");
    scanf("%d %d", &num1, &num2);
    int soma=num1+num2;
    if (soma>20){
        soma=soma+8;
        printf("Valor final: %d\n", soma);
    }
    else {
        soma=soma-5;
        printf("Valor final: %d\n", soma);
    }
    return 0;
}
