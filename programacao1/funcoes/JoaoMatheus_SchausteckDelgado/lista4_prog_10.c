#include <stdio.h>

int conversor(int s) {
    int horas = s / 3600;
    int resto = s % 3600;
    int minutos = resto / 60;
    int segundos = resto % 60;

    printf("%d horas %d minutos e %d segundos\n", horas, minutos, segundos);
    return 0;
}

int main() {
    int s;
    printf("Digite a quantidade de segundos: \n");
    scanf("%d", &s);
    conversor(s);

    return 0;
}