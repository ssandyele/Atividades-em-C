#include <stdio.h>
#include <stdlib.h>

/*Faça uma função e Algoritmo que receba as três notas de um aluno como
parâmetro e uma letra. Se a letra for A a função calcula a média aritmética
das notas do aluno, se for P a função calcula a média ponderada com pesos
5, 3 e 2. A média calculada deve ser devolvida como parâmetro de saída da
função.*/

float NOTA (float N1, float N2, float N3, char L);

int main() {
    float X, Y, Z, RES;
    char M;

    printf("Digite a primeira nota: ");
    scanf("%f", &X);
    printf("Digite a segunda nota: ");
    scanf("%f", &Y);
    printf("Digite a terceira nota: ");
    scanf("%f", &Z);

    printf("\nESCOLHA COMO A MEDIA SERA FEITA:\nDigite 'A' para media ARITMETICA\n");
    printf("Digite 'P' para media PONDERADA (pesos: 5, 3 e 2 respectivamente)\n");
    scanf(" %c", &M);

    RES=NOTA(X,Y,Z,M);

    if(RES==-1) {
        printf("\nA media selecionada nao existe.\n");
    } else {
        printf("\nMEDIA: %.1f\n", RES);
    }
    return 0;
}

float NOTA (float N1, float N2, float N3, char L){
    float media;
    switch(L){
        case 'A':
        case 'a':
            media=(N1+N2+N3)/3;
            break;
        case 'P':
        case 'p':
            media=((N1*5)+(N2*3)+(N3*2))/10;
            break;
        default:
            media=-1;
    }
    return media;
}