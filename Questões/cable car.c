#include <stdio.h>

int main(void){
    int c,a,cont = 0;
    scanf("%d\n%d",&c,&a);
    while(a > 0){
        a = a - c+ 1;
        cont++;
    }
    printf("%d", cont);
    return 0;
}