#include <stdio.h>


void inverter(int v[], int n){
    int invertido[n];
    for(int i=0;i<n;i++){
            invertido[i]=v[n-1-i];  
    }
    for(int i=0;i<n;i++){
        printf("%d \t",invertido[i]);
    }
}

int main(){
    int v[5]={1,2,3,4,5};
    inverter(v,5);
    return 0;
}

