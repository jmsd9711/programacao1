#include <stdio.h>

int main() {
    float valordolar, taxacambio;
    printf("Valor da compra em dolares: ");
    scanf("%f", &valordolar);
    printf("Taxa de cambio (1 dolar em reais): ");
    scanf("%f", &taxacambio);

    float valorreais = valordolar * taxacambio;
    float iof = valorreais * 0.0638;
    float total = valorreais + iof;

    printf("\nValor em reais (sem IOF): R$ %.2f\n", valorreais);
    printf("IOF (6.38%%): R$ %.2f\n", iof);
    printf("Total cobrado: R$ %.2f\n", total);

    return 0;
}
