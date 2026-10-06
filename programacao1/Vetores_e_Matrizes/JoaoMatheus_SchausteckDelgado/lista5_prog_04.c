#include <stdio.h>

int main(){

    int a[10];
    int negativos=0;
    for(int i=0;i<10;i++){
        printf("Informe um valor: \n");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++){
        if(a[i]<0){
            negativos++;
            printf("Valor negativo na posicao: %d\n",i);
        }
    }
    printf("Foram encontrados %d numeros negativos",negativos);
    return 0;
}