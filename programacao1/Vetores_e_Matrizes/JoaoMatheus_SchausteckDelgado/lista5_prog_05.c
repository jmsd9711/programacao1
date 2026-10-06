#include <stdio.h>

int main(){

    int a[10];
    for(int i=0;i<10;i++){
        printf("Informe um valor: \n");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++){
        if(a[i]==0){
            a[i]=1;
        }
        printf("%d \t",a[i]);
    }
    
    return 0;
}