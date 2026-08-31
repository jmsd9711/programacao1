#include <stdio.h>

int eh_bissexto(int ano) {
    if (ano%4==0&&(ano%100!=0||ano % 400 == 0)){
        return 1;
    }
    return 0;
}

int validar_data(int dia, int mes, int ano) {
    int diames;
    if (ano < 0)
        return 0;
    if (mes < 1 || mes > 12)
        return 0;
    if (mes == 2) {
        if(eh_bissexto==1){
            diames=29;
        }else{
            diames=28;
        }
    } 
    else if (mes == 4||mes==6||mes== 9 ||mes == 11) {
        diames = 30;
    } else {
        diames = 31;
    }

    if (dia < 1 ||dia > diames)
        return 0;

    return 1;
}

int main() {
    int dia, mes, ano;

    printf("Digite uma data:\n");
    scanf("%d/%d/%d",&dia,&mes,&ano);

    if (validar_data(dia, mes, ano)) {
        if (eh_bissexto(ano)) {
            printf("Data valida e ano bissexto: %d/%d/%d\n", dia, mes, ano);
        } else {
            printf("Data valida: %d/%d/%d\n", dia, mes, ano);
        }
    } else {
        printf("Data invalida\n");
    }

    return 0;
}