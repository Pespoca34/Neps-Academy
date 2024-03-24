#include <stdio.h>

int main(void){
    int num;
    scanf("%d", &num);
    if(num == 1000000){
        puts("1");
    }else{
        puts("0");
    }
    return 0;
}