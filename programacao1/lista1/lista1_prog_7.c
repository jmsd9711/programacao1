#include <stdio.h>

int main(){

    float p, t, pa;
    printf("Digite o valor da prestacao: ");
    scanf("%f",&p);
    printf("Digite o valor da taxa de jutos: ");
    scanf("%f",&t);

    pa = p+(p*t/100);

    printf("O valor da prestacao atrasada e de: %f", pa);
    return 0;
}