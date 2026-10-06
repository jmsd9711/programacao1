#include <stdio.h>

int main(){

    float a[10]={1,2,3,4,5,6,7,8,9,10};
    float maior=0;
    float menor=a[0];
    for(int i=0;i<10;i++){
        if(a[i]>maior){
            maior = a[i];
        }
        if(a[i]<menor){
            maior = a[i];
        }
    }
    printf("O maior valor foi:%f \nE o Menor foi: %f",maior,menor);
    return 0;
}