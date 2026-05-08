#include <stdio.h>

int main(){

    int codigo, dependentes;
    float salariob, inss, salariol;
    printf("digite o codigo do funcionario: \n");
    scanf("%d", &codigo);
    printf("Digite o salario bruto: \n");
    scanf("%f", &salariob);
    printf("Digite o numero de dependentes: \n");
    scanf("%d", &dependentes);
    if(salariob <= 500){
        inss = salariob * 0.08;
    }else if(salariob <= 2000){
        inss = salariob * 0.09;
    }else{
        inss = salariob * 0.10;
    }
    salariol = salariob-inss+ (150.00 * dependentes) + 140.00 + 550.00;
    printf("Codigo: %d \n", codigo);
    printf("Salario liquido: %.2f", salariol);
    return 0;
}