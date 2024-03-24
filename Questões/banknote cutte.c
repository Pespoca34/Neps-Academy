#include <stdio.h>

void prime(int n){
    int contador = 0;
    for(int i=1; i <= n; ++i){
        if(n % i == 0){
            ++contador;
        }
    }
    if(contador == 2){
        puts("S");
    } else{
        puts("N");
    }
}

int main(void){
    int num;
    scanf("%d", &num);
    
    prime(num);
    return 0;
}