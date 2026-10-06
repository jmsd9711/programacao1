#include <stdio.h>

int main(){

    int a[10];
    for(int i=0;i<10;i++){
        printf("Informe um valor: \n");
        scanf("%d",&a[i]);
    }
    printf("Indice Par:\n");
    for(int i=0;i<10;i+=2){
        printf("%d \t",a[i]);
    }
    printf("\nIndice Impar:\n");
    for(int i=1;i<10;i+=2){
        printf("%d \t",a[i]);
    }
    
    return 0;
}