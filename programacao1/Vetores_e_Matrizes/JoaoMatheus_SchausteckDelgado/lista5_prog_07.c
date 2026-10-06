#include <stdio.h>

void triplo(double v[], int n){
    double primeiro=0;
    printf("Digite o primeiro valor: \n");
    scanf("%lf",&primeiro);
    v[0]=primeiro;
    printf("%.0lf \n",v[0]);
    for(int i=1; i<n; i++){
        v[i] = v[i-1]*3;
        printf("%.0lf \n",v[i]);
    }
}

int main(){

    double v[50];
    triplo(v,50);
    
    return 0;
}