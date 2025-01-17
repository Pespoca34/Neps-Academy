#include <stdio.h>
#include <stdlib.h>

int main(void){
    int k;
    scanf("%d", &k);
    int x,y;
    scanf("%d %d", &x,&y);
    int total = abs(x-y);
    if(total >= k){
        puts("EH SUFICIENTE");
    } else{
        puts("NAO EH SUFICIENTE");
    } 

    return 0;
}