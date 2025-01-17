#include <stdio.h>
#define max 10000

int main(){
    int x;
    scanf("%d", &x);

    char y[max];
    scanf(" %[^\n]s", y);
    
    for(int i=0;i<x;++i){
        printf("%s\n", y);
    }

    return 0;
}