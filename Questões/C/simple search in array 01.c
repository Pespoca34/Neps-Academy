#include <stdio.h>

#define n 10

int main(){

    int num[n];
    int busca,soma = 0;
    for(int i=0; i< n; ++i){
        scanf("%d", &num[i]);
    }
    scanf("%d", &busca);
    for(int i=0; i < n; ++i){
        if(num[i] == busca){
            ++soma;
        }
    }
    if(soma >= 1){
        puts("SIM");
    } else if(soma <= 0){
        puts("NAO");
    }
    return 0;
}