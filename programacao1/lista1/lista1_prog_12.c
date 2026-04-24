#include <stdio.h>

int main(){

    float tc, tf;
    printf("Digite a temperatura em celsius: ");
    scanf("%f",&tc);

    tf = (tf-32)*(5.0/9.0);

    printf("A conversao de temperatura de celsius para fahrenheit: %f", tf);
    return 0;

}