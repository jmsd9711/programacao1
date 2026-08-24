#include <stdio.h>

float celcius_para_fahrenheit(float tc){
    return (tc*9.0/5)+32;
}

int main(){
    for(float i =0;i<=100;i++){
        printf("%.2f C\t=\t%.2f F\n",i,celcius_para_fahrenheit(i));
    }
    return 0;
}