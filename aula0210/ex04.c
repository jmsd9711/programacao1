#include <stdio.h>
int main(){
    int numeros[10];


    for(int i=0; i<10;i++){
        printf("informe o numero: \n");
        scanf("%d",&numeros[i]);
    }
    for(int i=0; i<10;i++){
        if(i%2==0){
            printf("%d \t",numeros[i]);
        } 
    }
    return 0;
}
