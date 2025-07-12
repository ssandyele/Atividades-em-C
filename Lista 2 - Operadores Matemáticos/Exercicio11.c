#include <stdio.h>
#include <stdlib.h>

/*Criar um Algoritmo que efetue o cálculo da quantidade de litros de combustível
gastos em uma viagem, sabendo-se que o carro faz 12 km com um litro. Deverão ser
fornecidos o tempo gasto na viagem e a velocidade média.
Distância = Tempo x Velocidade.
Litros = Distancia / 12.

O Algoritmo deverá apresentar os valores da Distância percorrida e a quantidade de
Litros utilizados na viagem.*/

int main () {
    float t, v, d, l;
    printf("Qual o tempo gasto na viagem? (em horas)\n");
    scanf("%f", &t);
    printf("Qual a velocidade media mantida no percurso? (em Km/h)\n");
    scanf("%f", &v);
    d=t*v;
    printf("A distancia percorrida foi: %.2f KM\n", d);
    l=d/12;
    printf("A quantidade de litros gastos foi de: %.1f L\n", l);
    return 0;
}
