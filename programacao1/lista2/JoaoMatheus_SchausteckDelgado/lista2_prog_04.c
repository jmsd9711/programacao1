#include <stdio.h>

int main(){

    float slf, tv, salariof;
    printf("Digite o salario fixo do vendedor e o total de vendas no mes: \n");
    scanf("%f %f",&slf,&tv);
    if(tv>10000){
        salariof = slf+(tv*0.15);
        printf("Salario: %f",salariof);
    }else{
        salariof = slf+(tv*0.075);
        printf("Salario: %f",salariof);
    }
    return 0;
}
