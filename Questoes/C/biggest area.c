#include <stdio.h>


int main(void){
    int l1,h1;
    scanf("%d %d\n", &l1, &h1);
    int l2,h2;
    scanf("%d %d", &l2,&h2);
    int area1, area2;
    area1 = l1 * h1;
    area2 = l2 * h2;

    if(area1 == area2){
        puts("Empate");
    } else if(area1 > area2){
        puts("Primeiro");
    } else{
        puts("Segundo");
    }
    return 0;
}