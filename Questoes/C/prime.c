#include <stdio.h>

int main(){
    long n;
    int div = 0;
    scanf("%ld", &n);
    if(n <= 1){
        puts("N");
    } else{
        for(int i=1; i*i<=n;++i){
            if(n % i == 0){
                ++div;
            }
        }
        if(div == 1){
            puts("S");
        } else if(div > 1){
            puts("N");
        }
    }
    return 0;
}

