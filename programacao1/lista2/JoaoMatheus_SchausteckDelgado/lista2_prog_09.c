#include <stdio.h>

int main(){

    float horas, salario, desconto, salariof;
    printf("digite o numero de horas trabalhadas: \n");
    scanf("%f", &horas);
    salario = horas * 39.50;
    if(salario > 6000){
        desconto = (salario - 6000) * 0.25;
        salariof = salario - desconto;
        printf("Desconto imposto de renda: %.2f \n", desconto);
        printf("Salario liquido: %.2f", salariof);
    }else{
        printf("Sem desconto de imposto de renda \n");
        printf("salario liquido: %.2f", salario);
    }
    return 0;
}