#include <stdio.h>

int main(){
    int x = 10;
    int y[10];
    int y1[10];
    int i;
    for(i=0; i < x; ++i){
        scanf("%d", &y[i]);
    }
    for(i=0; i < x; ++i){
        y1[i] = y[x-i-1];
        printf("%d\n", y1[i]);
    }
    return 0;
}