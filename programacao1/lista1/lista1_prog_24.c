#include <stdio.h>

int main(){
    float c, a, l, q;
    float area, areatotal, areaMais;

    printf("Comprimento: ");
    scanf("%f", &c);

    printf("Altura: ");
    scanf("%f", &a);

    printf("largura: ");
    scanf("%f", &l);

    printf("quantidade de caixas: ");
    scanf("%f", &q);

    area = 2.0 * (c * a + c * l + a * l);
    areatotal = area * q;
    areaMais = areatotal * 1.10;

    printf("\narea minima total: %.2f m2\n", areatotal);
    printf("area total com 10 porcento de adicional: %.2f m2\n", areaMais);

    return 0;
}