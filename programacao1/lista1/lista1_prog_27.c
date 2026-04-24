#include <stdio.h>

int main() {
    float segundos;
    printf("Intervalo em segundos: ");
    scanf("%f", &segundos);

    float minutos = segundos / 60.0;
    float horas = segundos / 3600.0;
    float dias = segundos / 86400.0;

    printf("\nMinutos: %.3f\n", minutos);
    printf("Horas: %.6f\n", horas);
    printf("Dias: %.8f\n", dias);

    return 0;
}
