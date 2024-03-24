#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a, b, c;
    scanf("%d \n %d \n %d", &a, &b, &c);
    int ta, tb, tc;

    ta = b*2 + c*4; 
    tb = a*2 + c*2;
    tc = b*2 + a*4;

    if(ta >= tb && ta >= tc){
        printf("%d",ta);
    }
    else if(tb >= tc && tb >= ta){
        printf("%d",tb);
    }
    else{
        printf("%d",tc);
    }    
    return 0;
}