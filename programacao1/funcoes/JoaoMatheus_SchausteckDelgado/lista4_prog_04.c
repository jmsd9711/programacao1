#include <stdio.h>

float celcius_para_kelvin(float temp){
    return temp+273.15;
}
float kelvin_para_celsius(float temp){
    return temp-273.15;
}

int main(){
    float temp;
    int op;
    printf("Digite a temperatura: \n");
    scanf("%f",&temp);
    printf("Escolha para qual converter: \n");
    printf("1 - kelvin \n2 - celsius\n");
    scanf("%d",&op);
    if(op==1){
        printf("%f kelvin",celcius_para_kelvin(temp));
    }else{
        printf("%f celsius",kelvin_para_celsius(temp));
    }
    return 0;
}