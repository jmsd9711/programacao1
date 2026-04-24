#include <stdio.h>

int main(){

    float celsius, estevam;
    printf("digite a temperatura em celsius: ");
    scanf("%f", &celsius);
    
    estevam = 20 + (celsius * 130) / 100;
    
    printf("temperatura em estevam e: %f\n", estevam);
    
    return 0;
}
