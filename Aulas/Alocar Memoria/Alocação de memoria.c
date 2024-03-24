#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    p = (int*) malloc(sizeof(int)*2);
    *p = 4;
    *(p+1) = 5;

    printf("%d %d", *p, p[1]);
    free(p);
    return 0;
}