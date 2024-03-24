#include <stdio.h>

int mainin(void){
    int a,m;
    scanf("%d\n%d", &a,&m);
    int b = (2*m - a);

    printf("%d", b);
    return 0;
}