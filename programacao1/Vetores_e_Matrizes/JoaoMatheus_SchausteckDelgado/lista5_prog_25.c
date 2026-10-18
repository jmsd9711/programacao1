#include <stdio.h>

void ler(int v[], int n){
    for (int i=0; i<n;i++){
        printf("Digite um valor: \n");
        scanf("%d",&v[i]);
    }
}

void remover(int a[], int x, int n){
    for(int i =0;i<n;i++){
        if(a[i] ==x){
            for(int j =i;j<n-1;j++){
                a[j] =a[j+1];
            }
            n--;
            i--;
        }
    }
    for(int i = 0;i<n;i++){
        printf("%d ",a[i]);
    }
}

int main(){
    int a[15];
    int x;
    ler(a,15);
    printf("Digite o alvo: \n");
    scanf("%d",&x);
    remover(a,x,15);
    return 0;
}

