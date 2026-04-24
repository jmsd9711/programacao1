#include <stdio.h>

int main(){

    float consumo, distancia, media;
    printf("Digite a distancia percorrida pelo automovel: ");
    scanf("%f", &distancia);
    printf("Digite o consumo da gasolina: ");
    scanf("%f", &consumo);

    media = distancia/consumo;

    printf("O consumo medio de gasolina e de: %f", media);

    return 0;
}