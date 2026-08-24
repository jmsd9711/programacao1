#include <stdio.h>

int main(){
    int n = 459;
    int n_copia = n;
    do{
        int soma =0;
        do{
            int a = n_copia % 10;
            n_copia = n_copia / 10;
            soma = soma + a;
        }while(n_copia!=0);
        n_copia = soma;
    }while(n_copia>=10);
    printf("%d",n_copia);
    return 0;
}