#include <stdio.h>

int main(){

    float pixel, escala;
    printf("Digite o valor do pixel (0-255): ");
    scanf("%f", &pixel);
    
    escala = -1 + (pixel * 2) / 255;
    
    printf("O valor na escala normalizada e: %f\n", escala);
    
    return 0;
}
