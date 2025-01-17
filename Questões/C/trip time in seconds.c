#include <stdio.h>

int main(void){
    int d1,h1,m1,d2,h2,m2;
    scanf("%d %d %d %d %d %d", &d1,&h1,&m1,&d2,&h2,&m2);
    int total1 =(d1 * 86400) + (h1 * 3600) + (m1 * 60);
    int total2 =(d2 * 86400) + (h2 * 3600) + (m2 * 60);

    printf("%d", total2 - total1);

    return 0;
}