#include <stdio.h>

int main() {
    int x,y,z;
    scanf("%d %d %d", &x,&y,&z);
    if(x==y || x==z || y==z){
        puts("S");
    } else if(x+y==z || x+z==y || y+z==x){
        puts("S");
    } else{
        puts("N");
    }
    return 0;
}
