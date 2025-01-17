#include <stdio.h>

int main(){
    int x,y,z,sum;
    scanf("%d %d %d", &x,&y,&z);
    sum = x + y;
    if(sum > z + 1/2){
        puts("0");
    } else{
        puts("1");
    }

    return 0;
}