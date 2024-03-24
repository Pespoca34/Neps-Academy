#include <stdio.h>

int main(){

    int x,a,b,soma=0;
    //? if x= 0(Alice- Even), if x=1(Bob-Even)
    scanf("\n%d %d %d", &x,&a,&b);
    soma = a + b;
    if(x == 0){
        if(soma % 2 == 0){
            puts("0");
        } else{
            puts("1");
        }
    } else{
        if(soma % 2 == 0){
            puts("1");
        } else{
            puts("0");
        }
    }
    return 0;
}