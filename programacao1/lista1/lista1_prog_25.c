#include <stdio.h>
#include <math.h>

int main() {
    float cateto1, cateto2;

    printf("Cateto 1: ");
    scanf("%f", &cateto1);

    printf("Cateto 2: ");
    scanf("%f", &cateto2);

    float hipotenusa = sqrtf(cateto1 * cateto1 + cateto2 * cateto2);

    printf("\nH: %f\n", hipotenusa);

    return 0;
}
