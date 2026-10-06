#include <stdio.h>

void imprimir ( int v[] , int n ) {
    for ( int i = 0; i < n; i++) {
        printf ("%d \t",v[i]);
  }
}
void ler_vetor(int v[],int n){
    for(int i =0;i<n;i++){
        scanf("%d",&v[i]);
    }
}

int soma_vetor(int v[], int n){
    int soma =0;
    for(int i =0; i< n;i++){
        soma = soma + v[i];
    }
    return soma;
}

int pesquisa_vetor(const int v[], int n, int valor){
    for(int i =0; i< n;i++){
        if(v[i]==valor){
            return i;
        }
    }
    return -1;
}
int main(){

    int vt[]={5,1,3,10,15};

    imprimir(vt, 5);
    return 0;
}