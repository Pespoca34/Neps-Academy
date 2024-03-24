#include <stdio.h>
#define x 10000

int main(){
    int n;
    int y[x];
    scanf("%d", &n);
    for(int i=0; i < n; ++i){
        scanf("%d", &y[i]);
    }
    int soma = 1;
    int soma1 = 1;
    for(int i=0; i < n; ++i){
        if(y[i] == y[i+1]){
            ++soma;
        } else if(y[i] != y[i+1]){
            if(soma1 > soma){
                soma = 1;
            } else {
                soma1 = soma;
                soma = 1;
            } 
        } 
    } 
    printf("%d", soma1);
    return 0;
}