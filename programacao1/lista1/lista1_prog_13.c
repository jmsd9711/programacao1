#include <stdio.h>

int main(){

    float polegadas, mm;
    printf("Digite a quantidade de chuva em polegadas: ");
    scanf("%f", &polegadas);
    mm = polegadas * 25,4;
    printf("a quantidade de chuva em polegadas e de: %f", mm);
    return 0;

}