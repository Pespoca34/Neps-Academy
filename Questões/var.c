#include <stdio.h>

int main(){
    int x,y;
    scanf("%d\n%d", &x,&y);
    if(x > 8 || x < -8){
        puts("N");
    } else if(x <=8 && x >=-8){
        if(y < 0 || y > 8){
            puts("N");
        } else{
            puts("S");
        }
    }

    return 0;
}