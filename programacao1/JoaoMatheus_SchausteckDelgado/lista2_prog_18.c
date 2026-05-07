#include <stdio.h>

int main(){

    int ficha1, ficha2;
    float aposta, recebe;
    printf("Digite o valor apostado: \n");
    scanf("%f", &aposta);
    printf("Digite a cor da primeira ficha (0 - branca / 1 - preta): \n");
    scanf("%d", &ficha1);
    printf("Digite a cor da segunda ficha (0 - branca / 1 - preta): \n");
    scanf("%d", &ficha2);
    if(ficha1 == 0 && ficha2 == 0){
        recebe = 0;
    }else if(ficha1 == 0 && ficha2 == 1){
        recebe = aposta * 0.5;
    }else if(ficha1 == 1 && ficha2 == 0){
        recebe = aposta;
    }else{
        recebe = aposta * 2;
    }
    printf("Valor a receber: %.2f", recebe);
    return 0;
}