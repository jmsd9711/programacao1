#include <stdio.h>

void ler(int v[], int n){
    for (int i=0; i<n;i++){
        printf("Digite um valor: \n");
        scanf("%d",&v[i]);
    }
}

float p_escalar(float a[],float b[], int n){
    float soma=0;
    for(int i =0;i<n;i++){
        printf("%.2f*%.2f",a[i],b[i]);
        if(i!=n-1){
            printf("+");
        }
        soma = soma + (a[i]*b[i]);
    }
    return soma;
}

int main(){
    float a[10], b[10];
    ler(a,10);
    ler(b,10);
    printf("=%.2f",p_escalar(a,b,10));
    return 0;
}

