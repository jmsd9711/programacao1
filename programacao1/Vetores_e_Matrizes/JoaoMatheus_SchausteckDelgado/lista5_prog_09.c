#include <stdio.h>

int main(){

    float notas[5]={5,6,7,8.9,10};
    float minimo;
    printf("Informe o minimo para a aprovacao: \n");
    scanf("%f",&minimo);
    for(int i=0;i<5;i++){
        if(notas[i]>minimo){
            printf("A nota: %.2f, esta acima do minimo.\n",notas[i]);
        }
    }
    
    return 0;
}