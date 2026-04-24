#include <stdio.h>

int main(){

    float v1, v2, media;
    printf("Digite o primeiro valor: ");
    scanf("%f",&v1);
    printf("Digite o segundo valor: ");
    scanf("%f",&v2);

    media = (v1 + v2)/2;

    printf("A media e de: %f", media);
    return 0;
}