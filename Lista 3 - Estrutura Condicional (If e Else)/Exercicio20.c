#include <stdio.h>
#include <stdlib.h>

/*Construa um Algoritmo para determinar se o indivíduo esta com um peso
favorável. Essa situação é determinada através do IMC (Índice de Massa
Corpórea), que é definida como sendo a relação entre o peso (PESO) e o quadrado
da Altura (ALTURA) do indivíduo. Ou seja,
IMC=peso/altura²
e, a situação do peso é determinada pela tabela abaixo:
| **IMC**                | **Classificação** |
| ---------------------- | ----------------- |
| Menor que 20           | Abaixo do peso    |
| De 20 até menor que 25 | Peso normal       |
| De 25 até menor que 30 | Sobrepeso         |
| De 30 até menor que 40 | Obeso             |
| 40 ou mais             | Peso mórbido      |
*/

int main () {
    float peso, altura, IMC;
    printf("Digite seu peso:\n");
    scanf("%f", &peso);
    printf("Digite sua altura:\n");
    scanf("%f", &altura);
    IMC=peso/pow(altura,2);
    if(IMC<20) {
        printf("Abaixo do peso");
    }
    else if (IMC>=20 && IMC<25){
        printf("Peso normal");
    }
    else if (IMC>=25 && IMC<30){
        printf("Sobre Peso");
    }
    else if (IMC>=30 && IMC<40){
        printf("Obeso");
    }
    else {
        printf("Peso Morbido");
    }
    return 0;
}
