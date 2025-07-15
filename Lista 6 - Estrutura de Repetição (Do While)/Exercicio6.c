#include <stdio.h>
#include <stdlib.h>


/*Elabore um programa que receba a idade, peso, sexo e o estado civil de várias
pessoas e imprima a quantidade de pessoas casadas, solteiras, separadas e viúvas.
Apresente a média de idade e de peso. O algoritmo finaliza quando for informado
o valor zero para idade.*/

int main () {
    int id, ID=0, civ, i=1, s=0, c=0, d=0, v=0, medid;
    float peso, P=0, medp;
    char gen;
    do {
        printf("CASO QUEIRA ENCERRAR A LISTA DIGITE '0' (ZER0) PARA A IDADE\nDigite a idade da pessoa %d:\n", i);
        scanf("%d", &id);
        ID=ID+id;
        if (id>0) {
            printf("Digite o peso (em Kg) da pessoa %d:\n", i);
            scanf("%f", &peso);
            P=P+peso;
            printf("Digite o genero da pessoa %d:\n", i);
            scanf("%s", &gen);
            printf("Digite o numero correspondente ao estado civil da pessoa %d:\n1 - Solteiro\n2 - Casado\n3 - Divorciado\n4 - Viuvo\n", i);
            scanf("%d", &civ);
            switch (civ) {
        case 1:
            s++;
            break;
        case 2:
            c++;
            break;
        case 3:
            d++;
            break;
        case 4:
            v++;
            break;
            }
            i++;
        }
    } while (id!=0);
    i--;
        medp=P/i;
        medid=ID/i;
        printf("\n\nA MEDIA de IDADE das pessoas cadastradas e: %d\n", medid);
        printf("A MEDIA de PESO das pessoas cadastradas e: %.2f\n", medp);
        printf("TOTAL DE PESSOAS:\nSolteiras: %d\nCasadas:%d\nDivorciadas:%d\nViuvas:%d\n", s, c, d, v);

    return 0;
}