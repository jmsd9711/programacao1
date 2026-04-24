#include <stdio.h>

int main() {
    float valorCompra, valorPago, troco;
    int notas100, notas10, notas1;
    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra);
    printf("Digite o valor pago: ");
    scanf("%f", &valorPago);

    troco = valorPago - valorCompra;
    notas100 = (int)troco / 100;
    
    troco = notas100 * 100;
    notas10 = (int)troco / 10;

    troco = notas10 * 10;
    notas1 = (int)troco;

    printf("\nValor da compra: R$ %f", valorCompra);
    printf("\nValor pago: R$ %f", valorPago);
    printf("\nValor do troco: R$ %f", troco);
    printf("\nQuantidade de notas de 100 reais: %d", notas100);
    printf("\nQuantidade de notas de 10 reais: %d", notas10);
    printf("\nQuantidade de notas de 1 real: %d", notas1);

    return 0;
}