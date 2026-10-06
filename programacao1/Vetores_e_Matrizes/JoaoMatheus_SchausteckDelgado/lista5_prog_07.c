#include <stdio.h>

int main(){

    double a[50];
    double primeiro=0;
    printf("Digite o primeiro valor: \n");
    scanf("%lf",&primeiro);
    a[0]=primeiro;
    printf("%.0lf \n",a[0]);
    for(int i=1; i<50; i++){
        a[i] = a[i-1]*3;
        printf("%.0lf \n",a[i]);
    }
    
    return 0;
}