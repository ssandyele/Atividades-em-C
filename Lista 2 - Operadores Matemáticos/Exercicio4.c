#include <stdio.h>
#include <stdlib.h>

/*Criar um Algoritmo para calcular e apresentar o valor do volume de
uma lata de óleo, utilizando a fórmula:
V=3.14159*R²*h
sendo V é o volume, R é o raio e h é a altura.*/

int main () {
    float volume, raio, altura;
    printf("Digite o raio da lata de oleo:\n");
    scanf("%f", &raio);
    printf("Digite a altura da lata de oleo:\n");
    scanf("%f", &altura);
    raio= pow(raio,2);
    volume=3.14159*raio*altura;
    printf("O volume e: %.2f", volume);
    return 0;
}