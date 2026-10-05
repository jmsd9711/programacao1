#include <stdio.h>

int main(){
    int numeros[5];


    for(int i=0; i<5;i++){
        printf("informe o numero: \n");
        scanf("%d",&numeros[i]);
    }
    for(int i=0; i<5;i++){
        printf("%d \t",numeros[i]);
    }
    return 0;
}
