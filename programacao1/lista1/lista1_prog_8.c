#include <stdio.h>

int main(){

    float r, a, v;
    printf("Digite o valor do raio: ");
    scanf("%f",&r);
    printf("Digite o valor da altura: ");
    scanf("%f",&a);

    v = 3,1415 *(r*r)*a;

    printf("O valor do volume e de: %f", v);
    return 0;
}