#include <stdio.h>

int main(void){
    int tam;
    scanf("%d", &tam);
    int array[tam];
    for(int i=0; i < tam; ++i){
        scanf("%d", &array[i]);
    }
    int mult2 = 0, mult3 = 0, mult4 = 0;
    for(int i=0; i < tam; ++i){
        if(array[i] % 2 == 0){
            ++mult2;
        }
        if(array[i] % 3 == 0){
            ++mult3;
        }
        if(array[i] % 4 == 0){
            ++mult4;
        }
    }
    printf("%d\n%d\n%d", mult2,mult3,mult4);
    return 0;
}