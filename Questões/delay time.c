#include <stdio.h>

int main(void){
    int h1,m1,h2,m2;
    scanf("%d %d %d %d", &h1,&m1,&h2,&m2);
    int total1 =(h1 * 60) + m1 + 45; 
    int total2 =(h2 * 60) + m2;
    if(total1 <= total2){
        puts("Sucesso");
    } else if(total1 > total2){
        printf("Atrasado %d", total1 - total2);
    }
    return 0;
}