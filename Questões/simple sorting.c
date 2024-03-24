#include <stdio.h>
#include <stdlib.h>
#define max 10000

int main(){
    int x,n[max],flag,temp,i,j;
    scanf("%d", &x);
    for(i=0; i < x; ++i){
        scanf("%d", &n[i]);
    }
    for(i=0; i<x-1;++i){
        flag=0;
        for(j=0; j<x-i-1;++j){
            if(n[j] > n[j+1]){
                temp = n[j];
                n[j] = n[j+1];
                n[j+1] = temp;
                flag = 1;
            }
        }
    } if(flag == 0){
        for(int i=0; i<x;++i){
            printf("%d ", n[i]);
        }
    }
    return 0;
}