#include <stdio.h>

int main() {
    float diametro, altura;
    printf("Digite o diâmetro do tanque (em metros): ");
    scanf("%f", &diametro);
    printf("Digite a altura do tanque (em metros): ");
    scanf("%f", &altura);

    float arealateral = 3.14 * diametro * altura;
    float areatotal = 2 * 3.14 * (diametro / 2) * (diametro / 2) + arealateral;
    float areapintar = areatotal * 2;

    float litrosnecessarios = areapintar / 3;
    float galoesnecessarios = litrosnecessarios / 3.6;

    float custototal = galoesnecessarios * 60.0;

    printf("quantidade de galoes de tinta necessarios: %d\n", galoesnecessarios);
    printf("custo total: R$ %f\n", custototal);

    return 0;
}