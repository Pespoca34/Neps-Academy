#include <stdio.h>
#include <stdlib.h>


int main(){
    int *p1, *p2;
    p1 = (int*)malloc(2*sizeof(int));
    p2 = (int*)calloc(2,sizeof(int));

    printf("malloc = %d %d\n",p1[0], p1[1]);
    printf("calloc = %d %d",p2[0], p2[1]);
}