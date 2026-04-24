#include <stdio.h>

int main(){

    float vp, p, troco;
    printf("Digite o valor pago: ");
    scanf("%f",&vp);
    printf("Digite o valor do produto: ");
    scanf("%f",&p);
    troco = vp -p;
    printf("O troco foi de: %f",troco);
    return 0;
}