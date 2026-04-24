#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2;

    printf("Ponto 1: ");
    scanf("%f %f", &x1, &y1);
    printf("Ponto 2: ");
    scanf("%f %f", &x2, &y2);

    float dx = x2 - x1;
    float dy = y2 - y1;
    float distancia = sqrtf(dx * dx + dy * dy);

    printf("\ndistancia entre pontos: %f\n", distancia);

    return 0;
}
