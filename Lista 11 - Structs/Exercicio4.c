#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Crie uma estrutura chamada Retângulo. Essa estrutura deverá
conter o ponto superior esquerdo e o ponto inferior direito do retângulo. Cada
ponto é definido por uma estrutura Ponto, a qual contém as posições X e Y.
Faça um programa que declare e leia uma estrutura Retângulo e exiba a área e
o comprimento da diagonal e o perímetro desse retângulo.*/

    struct Ponto {
        int x;
        int y;
    };

    struct Retangulo {
        int area;
        float diagonal;
        int perimetro;
        struct Ponto se;
        struct Ponto id;
    };

    typedef struct Ponto Ponto;
    typedef struct Retangulo Retangulo;

int main () {
    Ponto se;
    Ponto id;
    Retangulo r;
    int H, V;
//Pegando coordenadas
    printf("Digite a coordenada x do ponto superior esquerdo do retangulo: ");
    scanf("%d", &r.se.x);
    printf("Digite a coordenada y do ponto superior esquerdo do retangulo: ");
    scanf("%d", &r.se.y);
    printf("Digite a coordenada x do ponto inferior direito do retangulo: ");
    scanf("%d", &r.id.x);
    printf("Digite a coordenada y do ponto inferior direito do retangulo: ");
    scanf("%d", &r.id.y);
//Calculando lados
    H=r.id.x-r.se.x;
    V=r.se.y-r.id.y;
//Calculando area
    r.area=H*V;
//Calculando a diagonal
    r.diagonal=sqrt((H*H)+(V*V));
//Calculando perimetro
    r.perimetro=H+H+V+V;

    printf("\n--------------RETANGULO--------------\n");
    printf("Coordenadas das pontas do retangulo:\n  Sup.Esq: (%d,%d)    Inf.Dir: (%d,%d)\n", r.se.x, r.se.y, r.id.x, r.id.y);
    printf("Area: %d\n",r.area);
    printf("Comprimento da diagonal: %.2f\n", r.diagonal);
    printf("Perimetro: %d\n", r.perimetro);
    printf("-------------------------------------\n");

    return 0;
}

