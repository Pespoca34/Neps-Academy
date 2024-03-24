#include <stdio.h>

#define max 10000

int main(){
    int x[max], i = 0;
    while(1){
        scanf("%d", &x[i]);
        if(x[i] == 0){
            break;
            ++i;
        } else{
            ++i;
            continue;
        }
    }
    int aux, j;
    for(j=0; j < i; ++j){
        if(x[j] > x[j+1]){
            x[j+1] = x[j];
            aux = x[j];
        }
    }
    printf("%d", aux);
    return 0;
}