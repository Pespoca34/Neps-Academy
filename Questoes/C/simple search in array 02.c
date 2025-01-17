#include <stdio.h>
#include <string.h>

#define max 10

int main(){

    int v[max], busca, soma=0, v1[max];
    for(int i=0; i<max; ++i){
        scanf("%d", &v[i]);
    }
    scanf("%d", &busca);
    for(int i=0; i < max;++i){
        if(v[i] == busca){
            v1[soma] = i;
            ++soma;
        }

    }
    if(soma > 0){
        printf("%d\n", soma);
        for(int i=0; i<soma; i++){
            printf("%d ", v1[i]);
        }
    } else{
        puts("Mia x");
    }
    return 0;
}