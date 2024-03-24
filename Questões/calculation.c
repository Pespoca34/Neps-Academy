#include <stdio.h>

int main(){
    int x,y,soma, sub;
    scanf("%d %d", &x, &y);
    soma = x + y;
    sub = x - y;
    if(soma > sub){
        printf("%d\n%d", soma, sub);
    } else{
        printf("%d\n%d", sub, soma);
    }
    return 0;
}