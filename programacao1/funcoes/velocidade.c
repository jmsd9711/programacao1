#include <stdio.h>

float km_para_m(float km){
    return km/3.6;
}

int main(){
    printf("%.2f \n",km_para_m(36));
    return 0;
}