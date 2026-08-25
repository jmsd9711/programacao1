#include <stdio.h>

float maximo(float n1, float n2){
    if(n1 > n2){
        return n1;
    }
    return n2;
}

float minimo(float n1, float n2){
    if(n1 < n2){
        return n1;
    }
    return n2;
}

int main(){
    float n1,n2;
    scanf("%f %f", &n1,&n2);
    printf("maximo: %f \n",maximo(n1,n2));
    printf("minimo: %f",minimo(n1,n2));
    return 0;
}