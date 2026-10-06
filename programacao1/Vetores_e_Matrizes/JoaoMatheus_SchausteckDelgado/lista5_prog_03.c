#include <stdio.h>

void maior_menor(float v[], int n){
    float maior=0;
    float menor=v[0];
    for(int i=0;i<n;i++){
        if(v[i]>maior){
            maior = v[i];
        }
        if(v[i]<menor){
            menor = v[i];
        }
    }
    printf("O maior valor foi:%f \nE o menor foi: %f",maior,menor);
}

int main(){

    float v[10]={1,2,3,4,5,6,7,8,9,10};
    maior_menor(v,10);
    return 0;
}