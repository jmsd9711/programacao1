#include <stdio.h>

void ler(int v[], int n){
    for (int i=0; i<n;i++){
        printf("Digite um valor: \n");
        scanf("%d",&v[i]);
    }
}

void mover(int a[],int k,int n){
    int a_mod[10];
    for(int i=0;i<k;i++){
        a_mod[i]=a[n-k+i];
    }
    for(int i = 0; i < n-k; i++){
        a_mod[k+i] = a[i];
    }
    for(int i = 0;i<n;i++){
        a[i]=a_mod[i];
    }
    for(int i = 0;i<n;i++){
        printf("%d \t",a[i]);
    }
}

int main(){
    int a[10],k=2;
    ler(a,10);
    mover(a,k,10);
    return 0;
}

