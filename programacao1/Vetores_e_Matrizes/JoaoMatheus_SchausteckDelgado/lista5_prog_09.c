#include <stdio.h>

void verificar_acima_minimo(float notas[], int n, float minimo){
    for(int i=0;i<n;i++){
        if(notas[i]>minimo){
            printf("A nota: %.2f, esta acima do minimo.\n",notas[i]);
        }
    }
}

int main(){

    float notas[5]={5,6,7,8.9,10};
    float minimo;
    printf("Informe o minimo para a aprovacao: \n");
    scanf("%f",minimo);
    verificar_minimo(notas,5,minimo);
    
    return 0;
}