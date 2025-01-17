#include <stdio.h>

int main(void){
    int tam;
    scanf("%d", &tam);
    float array[tam];
    for(int i=0; i < tam; ++i){
        scanf("%f", &array[i]);
    }
    float soma = 0;
    for(int j=0; j < tam; ++j){
        soma += array[j];
    }
    printf("%.2f", soma / tam);
    return 0;
}