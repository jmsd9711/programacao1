#include <stdio.h>

void ler(int v[], int n){
    for (int i=0; i<n;i++){
        printf("Digite um valor: \n");
        scanf("%d",&v[i]);
    }
}

void ordem(int a[], int n){
    int crescente=0;
    for(int i=0;i<n-1;i++){
        //printf("valor:%d  crescente:%d\n",a[i],crescente);
        if(crescente==0){
            if(a[i+1]<a[i]){
            crescente++;
        }else{
            crescente=0;
        }
        }
    }
    if(crescente==0){
        printf("Esta em ordem crescente");
    }else{
        printf("Nao esta em ordem");
    }
}

int main(){
    int a[10];
    ler(a,10);
    ordem(a,10);
    return 0;
}
