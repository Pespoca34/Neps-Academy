#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,d,m,p;
    scanf("%d %d %d %d", &n,&d,&m,&p);
    if(n * d > m * p){
        puts("NERF");
    } else{
        puts("BUFF");
    }


    return 0;
}