#include <stdio.h>

int main(){

    int velocidade;
    printf("Digite a velocidade do veiculo: \n");
    scanf("%d",&velocidade);

    if(velocidade>60){
        printf("Multado!");
    }else{
        printf("Velocidade permitida");
    }
    return 0;
}