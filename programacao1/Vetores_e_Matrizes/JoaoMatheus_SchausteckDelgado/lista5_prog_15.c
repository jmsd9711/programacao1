#include <stdio.h>

void ler(int v[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("Digite um valor: \n");
        scanf("%d",&v[i]);
    }
}

void mostrar(int v[], int n){
    for(int i=0;i<n;i++){
        printf("%d \t",v[i]);
    }
}

void separar(int v[], int n){
    int qtd_par=0, qtd_impar=0;
    int par[20], impar[20];
    for(int i = 0; i < n; i++){
        if(v[i]%2==0){
            par[qtd_par]=v[i];
            qtd_par++;
        }
        else{
            impar[qtd_impar]=v[i];
            qtd_impar++;
        }
    }
    mostrar(par,qtd_par);
    printf("\n");
    mostrar(impar,qtd_impar);
}


int main(){
    int numeros[20];
    ler(numeros,20);
    separar(numeros,20);

    return 0;
}
//={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}
