#include <stdio.h>
#define max 100000

int main(){
    int n,y[max],minas;
    scanf("%d", &n);
    for(int i=1; i <n+1;++i){
        scanf("%d", &y[i]);
    }
    y[0] = 0;
    y[n + 1] = 0;
    for(int i=1; i<n+1;++i){
        minas = y[i-1] + y[i] + y[i +1];
        printf("%d", minas);
    }
    return 0;
}