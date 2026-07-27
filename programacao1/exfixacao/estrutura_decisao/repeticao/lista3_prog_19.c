#include <stdio.h>

int main(){
    char i, j;
    for(i='0';i<='9';i++){
        for(j='0';j<='9';j++){
            printf("%c %c\n",i,j);
        }
    }
    return 0;
}
