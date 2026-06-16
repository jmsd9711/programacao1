#include <stdio.h>

int main(){

    int nota;
    printf("digite a nota do aluno de 0 a 100: \n");
    scanf("%d", &nota);
    if(nota >= 0 && nota <= 60){
        printf("conceito D");
    }else if(nota <= 80){
        printf("conceito C");
    }else if(nota <= 90){
        printf("conceito B");
    }else if(nota <= 100){
        printf("conceito A");
    }else{
        printf("nota invalida");
    }
    return 0;
}