#include <stdio.h>

int main() {
    int dias;
    printf("Idade em dias: ");
    scanf("%d", &dias);

    int anos = dias / 365;
    int meses = (dias % 365) / 30;
    int diasrestantes = (dias % 365) % 30;

    printf("\n%08d dias equivalem a %d anos, %d meses e %d dias\n", dias, anos, meses, diasrestantes);

    return 0;
}
