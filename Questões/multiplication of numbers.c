#include <stdio.h>

int main(){
    int x,y;
    long long mult;
    scanf("%d %d", &x, &y);
    mult = (long long)x * y;

    printf("%lld", mult);
    return 0;
}