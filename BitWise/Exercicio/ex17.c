#include <stdio.h>

int main(){
    int pixel;
    int r, g, b;
    
    printf("Digite um pixel em hexadecimal: ");
    scanf("%d", &pixel);
    
    r = (pixel >> 16) & 0xFF;
    g = (pixel >> 8) & 0xFF;
    b = pixel & 0xFF;
    
    printf("\ncanai RGB:\n");
    printf("Vermelho: %d\n", r);
    printf("Verde: %d\n", g);
    printf("Azul: %d\n", b);
    
    int semAzul = (r << 16) | (g << 8);
    printf("\nSem canal azul: %d\n", semAzul);
    
    int vermMax = (0xFF << 16) | (g << 8) | b;
    printf("Com vermelho maximo: %d\n", vermMax);
    
    return 0;
}