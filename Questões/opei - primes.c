#include <stdio.h>

void primo(int n){
    int contador = 0;
    for(int i=1; i <= n; ++i){
        if(n % i == 0){
            ++contador;
        }
    }
    if(contador == 2){
        printf("%d\n", n);
    }
}
int main(void){
    unsigned num;
    scanf("%u", &num);
    for(unsigned i=1; i <= num; ++i){
        primo(i);
    }
    
    return 0;
}