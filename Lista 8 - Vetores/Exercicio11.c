#include <stdio.h>
#include <stdlib.h>

/*Leia um conjunto de números reais, armazenando-o em vetor. Em seguida,
calcule o quadrado de cada elemento desse vetor armazenando esse resultado
em outro vetor. Os conjuntos têm, no máximo, 20 elementos. Imprima os dois
conjuntos de números.*/

int main () {
    int A[20], B[20];
    printf("Digite 20 numeros inteiros:\n");
    for (int i=0; i<20; i++) {
        scanf("%d", &A[i]);
    }
    printf("\nARRAY A (numeros que foram digitados)\n");
    for (int i=0; i<20; i++) {
        printf("%d ", A[i]);
    }
    for (int i=0; i<20; i++) {
        B[i]=A[i]*A[i];
    }
    printf("\nARRAY B (quadrado de cada numero digitado)\n");
    for (int i=0; i<20; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
    return 0;
}
