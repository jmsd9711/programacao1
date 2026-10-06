#include <stdio.h>

void invertido(int v[], int n){
    for(int i=n-1;i>=0;i--){
        printf("%d \t",v[i]);
    }
}

int main(){

    int v[6]={1,2,3,4,5,6};
    invertido(v,6);
    return 0;
}