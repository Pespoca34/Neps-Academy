#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    int y = x / 10;
    int z = x % 10;

    if(y == z){
        puts("1");
    }else{
        puts("0");
    }
    return 0;
}