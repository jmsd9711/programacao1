#include <stdio.h>

int main() {
    float g,massa,tempomin,tempoh;
    int i = 0;
    printf("Digite a quantidade de gramas do material radioativo:\n");
    scanf("%f", &g);
    massa = g;
    while (massa > 0.05) {
        massa = massa / 2;
        i++;
    }
    tempomin = i * 50;
    tempoh = tempomin / 60;
    printf("Foi necessario %.2f horas ou %.0f minutos\n", tempoh, tempomin);
    
    return 0;
}