#include <stdio.h>

int main(void){
    int a1,a2,a3,m1,m2,m3;
    scanf("%d %d %d",&a1,&a2,&a3);
    m1 = a2 * 2 + a3 * 4;
    m2 = a1 * 2 + a3 * 2;
    m3 = a2 * 2 + a1 * 4;
    int comparador = m1;

    if(m3 < comparador){
        comparador = m3;
    }
    if(m2 < comparador){
        comparador = m2;
    }
    printf("%d", comparador);
    return 0;
}