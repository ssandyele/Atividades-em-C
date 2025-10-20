#include <stdio.h>
#include <stdlib.h>

/*O número 3.025 possui a seguinte característica: 30 + 25 = 55 55 2 = 3.025.
Faça uma função em Algoritmo que receba um inteiro de quatro dígitos e
retorne 1 se o número possuir essa característica e 0, caso contrário.*/

int prim, seg, soma, res;

int CARACTERISTICA (int num) {
    prim=num/100;
    seg=num%100;
    soma=prim+seg;
    res=soma*soma;
    if(num==res) {
        return 1;
    }
    else {
        return 0;
    }
}

int main () {
    int N;
    printf("VERIFICANDO SE UM NUMERO de quatro digitos E UM \"NUMERO de KAPREKAR\"\n");
    printf("Digite um numero de 4 digitos: ");
    scanf("%d", &N);
    int R= CARACTERISTICA(N);
    if(R==1) {
        printf("\n%d e um numero de Kaprekar!\n", N);
    } else {
        printf("\n%d nao e um numero de Kaprekar!\n", N);
    }
    return 0;
}