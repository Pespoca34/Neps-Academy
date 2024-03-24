#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, resultado;
    scanf("%d", &x);
    resultado = ((x+1) * (x+2)) / 2; 

    printf("%d", resultado);
    return 0;
}