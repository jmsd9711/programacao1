#include <stdio.h>

void ler(float a[], int n){
    for(int i=0;i<n;i++){
        printf("Informe um valor: \n");
        scanf("%f",&a[i]);
    }
}

void multiplicar(float a[], float b[], int n, float k){
    for(int i=0;i<n;i++){
        b[i]=k*a[i];
    }
}

void mostrar(float a[], int n){
    for(int i=0;i<n;i++){
        printf("Vetor A: %f \t",a[i]);
    }
}

void mostrar_b(float b[], int n){
    for(int i=0;i<n;i++){
        printf("Vetor B: %f \t",b[i]);
    }
}

int main(){

    float a[3],k,b[3];
    ler(a,3);
    printf("Informe o valor de K: ");
    scanf("%f",&k);
    multiplicar(a,b,3,k);
    printf("\n");
    mostrar(a,3);
    printf("\n");
    mostrar_b(b,3);
    return 0;
}