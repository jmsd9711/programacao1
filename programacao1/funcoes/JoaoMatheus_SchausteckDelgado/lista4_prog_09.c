#include <stdio.h>
#include <math.h>
float distancia(float x1,float y1,float x2,float y2){
    float d;
    d = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    return printf("A distancia eh de: %f",d);
}

int main(){
    float x1,x2,y1,y2;
    printf("Digite as coordenas x1 e y1: \n");
    scanf("%f %f",&x1,&y1);
    printf("Digite as coordenas x2 e y2: \n");
    scanf("%f %f",&x2,&y2);
    distancia(x1,y1,x2,y2);
    return 0;
}