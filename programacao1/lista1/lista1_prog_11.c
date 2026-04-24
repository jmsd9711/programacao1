#include <stdio.h>

int main(){

    float valor1, valor2, subtracao, soma, multiplicacao, div;
    printf("Digite um valor: ");
    scanf("%f",&valor1);
    printf("Digite o segundo valor: ");
    scanf("%f",&valor2);
    subtracao = valor1 - valor2;
    soma = valor1 + valor2;
    multiplicacao= valor1 * valor2;
    div = valor1 /valor2;

    printf("a soma dos dois numeros e de: %f,\n a subtracao dos numeros e de: %f,\n a multiplicacao dos numeros e de:%f,\n e a divisao dos numeros e de:%f ", soma, subtracao, multiplicacao, div);

    return 0;

}