#include <stdio.h>
#define max 100000

int main(){
    int x[max], quantidade=0;
    for(int i=0; i < 3; ++i){
        scanf("%d", &x[i]);
    }
    for(int i=0; i < 3; ++i){
        if(x[i] % 2 == 0 || x[i] % 5 == 0){
            ++quantidade;
        }
    }
    printf("%d", quantidade);
    return 0;
}