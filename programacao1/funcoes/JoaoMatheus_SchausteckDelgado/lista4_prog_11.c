#include <stdio.h>
int conversor_h(int h, int m, int s){
    int total = h * 3600 + m * 60 + s;
    return printf("%d segundos\n", total);
}
int conversor_s(int s) {
    int horas = s / 3600;
    int resto = s % 3600;
    int minutos = resto / 60;
    int segundos = resto % 60;

    
    return printf("%d horas %d minutos e %d segundos\n", horas, minutos, segundos);
}

int main() {
    int op,s,m,h;
    printf("Escolha um opcao: \n");
    printf("1 - Segundos para H/M/S\n");
    printf("2 - H/M/S para Segundos\n");
    scanf("%d", &op);
    if(op == 1){
        printf("Digite a quantidade de segundos: \n");
        scanf("%d", &s);
        conversor_s(s);
    }else if(op == 2){
        printf("Digite a quantidade de H/M/S: \n");
        scanf("%d %d %d", &h, &m, &s);
        conversor_h(h,m,s);
    }
    
    return 0;
}