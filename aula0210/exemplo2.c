#include <stdio.h>

int main(){
    int numeros[5] = {10,15,20,30,40};


    printf("%d \n",numeros[1]);
    printf("%d \n",numeros[2]);

    numeros[1]=22;

    for(int i=0; i<5;i++){
        printf("%d \n",numeros[i]);
    }
    return 0;
}