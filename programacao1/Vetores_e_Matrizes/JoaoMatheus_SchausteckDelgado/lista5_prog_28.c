#include <stdio.h>

void ler(int v[], int n){
    for (int i=0; i<n;i++){
        printf("Digite um valor: \n");
        scanf("%d",&v[i]);
    }
}

void remov_rep(int a[],int n){
    for(int i =0;i<n;i++){
        if(a[i] ==a[i+1]){
            for(int j =i;j<n-1;j++){
                a[j] =a[j+1];
            }
            n--;
            i--;
        }
    }
}

int main(){
    return 0;
}
