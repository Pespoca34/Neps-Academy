#include <stdio.h>

int main(){

    int x;
    scanf("%d", &x);
    for(int i=x+1; i<=x+10;++i){
        printf("%d ", i);
    }

    return 0;
}