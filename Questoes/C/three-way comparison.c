#include <stdio.h>

int main(){
    unsigned x,y;
    scanf("%d\n%d", &x,&y);
    if(x < y){
        puts("-1");
    } else if(x == y){
        puts("0");
    } else{
        puts("1");
    }

    return 0;
}