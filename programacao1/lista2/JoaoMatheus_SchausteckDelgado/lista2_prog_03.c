#include <stdio.h>

int main(){

    float altura1, peso1, altura2, peso2;
    printf("Digite a altura e o peso de umas das pessoas: \n");
    scanf("%f %f",&altura1,&peso1);
    printf("Digite a altura e o peso da outra pessoas: \n");
    scanf("%f %f",&altura2,&peso2);

    if(altura1 > altura2){
        printf("altura %f \n", altura1);
    }else{
        printf("altura %f \n", altura2);
    }
    if(peso1>peso2){
        printf("peso %f",peso1);
    }else{
        printf("peso %f",peso2);
    }
    return 0;
}