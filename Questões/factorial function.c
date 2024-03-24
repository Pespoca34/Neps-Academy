#include <stdio.h>

int fatorial(int x){
    int n = 1;
    for(int y = 1; y <= x; ++y){
        n *= y;
    }
    return n;
}


int main(){
    unsigned num;
    scanf("%d", &num);
    
    printf("%d", fatorial(num));

    return 0;
}