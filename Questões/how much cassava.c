#include <stdio.h>

int main(){
    //? Curu= 300, boitata=1500, boto = 600, mapinguari=1000, iara=150
    int x,y,z,w,h;
    scanf("%d %d %d %d %d", &x,&y,&z,&w,&h);

    printf("%d\n", x * 300 + y * 1500 + z * 600 + w * 1000 + h * 150 + 225);
    return 0;
}