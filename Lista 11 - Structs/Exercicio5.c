#include <stdio.h>
#include <stdlib.h>

/*EXERCICIO 5 -------------------------------------------------------------------------
/*Usando a estrutura Retângulo do exercício anterior, faça um
programa que declare e leia uma estrutura Retângulo e um Ponto, e informe se
esse ponto está ou não dentro do retângulo.*/

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
    Ponto p;
    Retangulo r;
//Pegando coordenadas do retangulo
    printf("Digite a coordenada x do ponto superior esquerdo do retangulo: ");
    scanf("%d", &r.se.x);
    printf("Digite a coordenada y do ponto superior esquerdo do retangulo: ");
    scanf("%d", &r.se.y);
    printf("Digite a coordenada x do ponto inferior direito do retangulo: ");
    scanf("%d", &r.id.x);
    printf("Digite a coordenada y do ponto inferior direito do retangulo: ");
    scanf("%d", &r.id.y);
//Coordenadas do ponto
    printf("\nQual a coordenada x do ponto? ");
    scanf("%d", &p.x);
    printf("Qual a coordenada y do ponto? ");
    scanf("%d", &p.y);
//Verificando se o ponto esta dentro do retangulo
    if (p.x<r.id.x&&p.x>r.se.x&&p.y<r.se.y&&p.y>r.id.y) {
        printf("\n\nO ponto esta dentro do retangulo!\n");
    } else {
        printf("\n\nO ponto nao esta contido dentro do retangulo.\n");
    }
    return 0;
}