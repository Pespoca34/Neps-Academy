#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned s,m,l,humor;
    scanf("%d %d %d", &s,&m,&l);
    humor = s + (2*m) + (3 * l);
    if(humor >= 10){
        puts("happy");
    } else{
        puts("sad");
    }
    
    return 0;
}