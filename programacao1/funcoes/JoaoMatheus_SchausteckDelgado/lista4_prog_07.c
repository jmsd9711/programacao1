#include <stdio.h>

float kelvin_para_fahrenheit(float k) {
    return (k - 273.15) * 9.0 / 5.0 + 32.0;
}

float fahrenheit_para_kelvin(float tf) {
    return (tf - 32.0) * 5.0 / 9.0 + 273.15;
}

float km_para_milhas(float km) {
    return km * 0.621371;
}

float milhas_para_km(float mi) {
    return mi / 0.621371;
}

float kg_para_libras(float kg) {
    return kg * 2.20462;
}

float libras_para_kg(float lb) {
    return lb / 2.20462;
}

float metros_para_polegadas(float m) {
    return m * 39.3701;
}

float polegadas_para_metros(float in) {
    return in / 39.3701;
}

int main() {
    int op, op2;
    float valor;

    printf("Escolha uma opcao:\n");
    printf("1 - Kelvin/Fahrenheit\n");
    printf("2 - Fahrenheit/Kelvin\n");
    printf("3 - Quilometros/Milhas\n");
    printf("4 - Milhas/Quilometros\n");
    printf("5 - Quilogramas/Libras\n");
    printf("6 - Libras/Quilogramas\n");
    printf("7 - Metros/Polegadas\n");
    printf("8 - Polegadas/Metros\n");
    scanf("%d", &op);

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    switch (op) {
        case 1:
            printf("Resultado: %.2f Fahrenheit\n", kelvin_para_fahrenheit(valor));
            break;
        case 2:
            printf("Resultado: %.2f Kelvin\n", fahrenheit_para_kelvin(valor));
            break;
        case 3:
            printf("Resultado: %.2f milhas\n", km_para_milhas(valor));
            break;
        case 4:
            printf("Resultado: %.2f quilometros\n", milhas_para_km(valor));
            break;
        case 5:
            printf("Resultado: %.2f libras\n", kg_para_libras(valor));
            break;
        case 6:
            printf("Resultado: %.2f quilogramas\n", libras_para_kg(valor));
            break;
        case 7:
            printf("Resultado: %.2f polegadas\n", metros_para_polegadas(valor));
            break;
        case 8:
            printf("Resultado: %.2f metros\n", polegadas_para_metros(valor));
            break;
        default:
            printf("Opcao invalida!\n");
            return 1;
    }

    return 0;
}
