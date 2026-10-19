#include <stdio.h>

void ler(int v[], int n){
    for (int i=0; i<n;i++){
        printf("Digite um valor: \n");
        scanf("%d",&v[i]);
    }
}

void intercalar(int a[], int b[], int n){
    int i_a=0, i_b=0;
    int c[20];
    for(int i=0;i<n*2;i+=2){
        c[i]=a[i_a];
        i_a++;
        //printf("C(%d)->%d A->%d\n",i,c[i],a[i_a]);
    }
    for(int j=1;j<n*2;j+=2){
            c[j]=b[i_b];
            //printf("C(%d)->%d B->%d\n",j,c[j],b[i_b]);
            i_b++;
        }
    for(int i = 0;i<n*2;i++){
        printf("%d ",c[i]);
    }

}

int main(){
    int a[10];
    int b[10];
    ler(a,10);
    ler(b,10);
    intercalar(a, b, 10);

    return 0;
}