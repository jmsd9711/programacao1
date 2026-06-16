#include <stdio.h>

int main(){

    float salario, bonus, total;
    int anos;
    printf("digite o salario e o tempo de trabalho em anos: \n");
    scanf("%f %d", &salario, &anos);
    if(salario <= 4000){
        bonus = salario * 0.15;
    }else if(salario <= 10000){
        bonus = salario * 0.12;
    }else{
        bonus = salario * 0.05;
    }
    if(anos >= 3){
        bonus = bonus + (salario * 0.10);
    }
    total = salario + bonus;
    printf("salario com bonus: %.2f", total);
    return 0;
}