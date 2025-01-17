#include <stdio.h>
#define max 10000

int main(void){
    int n, array[max];
    scanf("%d", &n);
    for(int i=0; i < n; ++i){
        scanf("%d", &array[i]);
    }
    int contador = 1;
    for(int i=1; i < n; ++i){
        if(array[i] != array[i-1]){
            ++contador;
        }
    }

    printf("%d", contador);
    return 0;
}