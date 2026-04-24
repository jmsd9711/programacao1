#include <stdio.h>
#define PI 3.1415927f

int main() {
    int graus, minutos, segundos;

    printf("Angulo em graus: ");
    scanf("%d %d %d", &graus, &minutos, &segundos);

    float total_graus = (graus + (minutos / 60.0)) + (segundos / 3600.0);
    float radianos = total_graus * PI / 180.0;

    printf("\nangulo: %d %d %d = %f rad\n", graus, minutos, segundos, radianos);

    return 0;
}
