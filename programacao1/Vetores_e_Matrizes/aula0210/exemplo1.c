#include <stdio.h>

int main(){

    int numeros[5];

    numeros[0]=10;
    numeros[1]=20;
    numeros[2]=30;
    numeros[3]=40;
    numeros[4]=50;

    printf("%d \n",numeros[4]);
    printf("%d \n",numeros[2]);

    numeros[1]=15;

    for(int i=0; i<5;i++){
        printf("%d \n",numeros[i]);
    }
    return 0;
}