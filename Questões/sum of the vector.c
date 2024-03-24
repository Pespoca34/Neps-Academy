#include <stdio.h>

#define max 100000

int main(){

    int x, v[max], soma= 0;
    scanf("%d", &x);
    for(int i=0; i < x; ++i){
        scanf("%d", &v[i]);
    }
    for(int i=0; i < x; ++i){
        soma += v[i];
    }
    printf("%d", soma);
    return 0;
}