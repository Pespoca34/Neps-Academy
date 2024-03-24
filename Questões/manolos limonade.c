#include <stdio.h>

int main(void){
    int n,c;
    scanf("%d %d", &n,&c);
    int soma = 0, x = 0;
    while(x != n){
        if(c > 1){
            soma += c;
            c--;
        } else if(c == 1){
            soma++;
        }
        x++;
    }
    printf("%d", soma);
    return 0;
}