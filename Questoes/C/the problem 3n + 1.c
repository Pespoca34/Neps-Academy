#include <stdio.h>

int main(void){
    int n, contador = 0;
    scanf("%d", &n);
    if(n == 1){
        puts("0");
    } else{
        while(n != 1){
            if(n % 2 == 0){
                n = n / 2;
                ++contador;
            } else if(n % 2 != 0){
                n = (3 * n) + 1;
                ++contador;
            }
        }
    printf("%d", contador);
    }

    return 0;
}