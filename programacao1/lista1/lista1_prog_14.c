#include <stdio.h>

int main(){

    float v1, v2, v3, v4, media;
    printf("Digite o primeiro valor: ");
    scanf("%f",&v1);
    printf("Digite o segundo valor: ");
    scanf("%f",&v2);
    printf("Digite o terceiro valor: ");
    scanf("%f",&v3);
    printf("Digite o quarto valor: ");
    scanf("%f",&v4);

    media = (v1 + v2 + v3 + v4)/4;

    printf("A media e de: %f", media);
    return 0;
}