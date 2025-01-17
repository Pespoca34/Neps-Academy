#include <stdio.h>

int main(){
    int x,y,z;
    scanf("%d %d %d", &x,&y,&z);
    if(x + y == z){
        puts("correct!");
    }else if(x + y != z){
        puts("wrong!");
    }

    return 0;
}