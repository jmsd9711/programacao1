#include <stdio.h>

int main(){

    float salario, carro;
    printf("Digite o valor do carro que foi vendido: \n");
    scanf("%f",&carro);
    salario = 1621 + 150+(carro*0.05);

    printf("O valor do salario sera de: %f", salario);

    return 0;
}