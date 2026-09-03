#include <stdio.h>
void alterar (int *x){
    *x = 100;
}
int main () {
    int n = 10;
    alterar(&n);
    printf ("%d\n",n);
return 0;
}