#include <stdio.h>
#include <stdlib.h>

int main(){
    int **p;
    int n = 4, m = 3;
    //?scanf("%d %d", &n,&m)- para descobrir o valor que vc quer da matriz
    p = (int**)malloc(sizeof(int*)*n);
    for(int i=0; i < n;++i){
        p[i] = (int*)malloc(sizeof(int)*m);
    }
    int k;
    k = 1;
    for(int i =0; i < n;++i){
        for(int j=0; j < m; ++j){
            p[i][j] = k;
            ++k;
            printf("%d ", p[i][j]);
        } printf("\n");
    } 
    return 0;
}