#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,soma =0;
    scanf("%d", &x);
    for(int i=0; i<=x;++i){
        soma += i;
    }

    printf("%d", soma);
    return 0;
}