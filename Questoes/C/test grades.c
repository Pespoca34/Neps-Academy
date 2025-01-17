#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned n;
    scanf("%d", &n);
    if(n == 0){
        puts("E");
    } else if( 1<= n  && n <= 35){
        puts("D");
    } else if(36 <= n  && n <= 60){
        puts("C");
    } else if(61 <= n && n <= 85){
        puts("B");
    } else{
        puts("A");
    }

    return 0;
}