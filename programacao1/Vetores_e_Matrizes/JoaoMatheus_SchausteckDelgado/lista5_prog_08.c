#include <stdio.h>

int main(){

    float a[3],k,b[3];
    for(int i=0;i<3;i++){
        printf("Informe um valor: \n");
        scanf("%f",&a[i]);
    }
    printf("Informe o valor de K: ");
    scanf("%f",&k);
    for(int i =0;i<3;i++){
        b[i]=k*a[i];
    }
    for(int i =0;i<3;i++){
        printf("Vetor A: %f \t",a[i]);
    }
    printf("\n");
    for(int i =0;i<3;i++){
        printf("Vetor B: %f \t",b[i]);
    }
    return 0;
}