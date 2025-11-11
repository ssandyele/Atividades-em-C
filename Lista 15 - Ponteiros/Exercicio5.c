#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

/*Implemente uma função que calcule a área da superfície e o volume
de uma esfera de raio R. Essa função deve obedecer ao protótipo:
void calc_esfera(float R, float *area, float *volume)*/

void calc_esfera(float R, float *area, float *volume) {
    *area= 4 * PI * R * R;
    *volume= (4 * PI * R * R * R) / 3;
}

int main() {
    float R, area, volume;
    printf("Digite o raio da esfera: ");
    scanf("%f", &R);
    calc_esfera(R, &area, &volume);
    printf("\nArea da esfera: %.2f", area);
    printf("\nVolume da esfera: %.2f\n", volume);
    return 0;
}