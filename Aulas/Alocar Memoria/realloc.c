#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    p =(int*)malloc(2*sizeof(int));
    p =(int*)realloc(p,sizeof(int)*5);

    return 0;
}