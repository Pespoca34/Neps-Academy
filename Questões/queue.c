#include <stdio.h>
#define tam 100000


int main(void){
    int tam1, tam2, i, j;
    int fila1[tam], fila2[tam];
    scanf("%d", &tam1);
    for(i=0; i < tam1; ++i){
        scanf("%d", &fila1[i]);
    }
    scanf("%d", &tam2);
    for(i=0; i < tam2; ++i){
        scanf("%d", &fila2[i]);
    }
    int fila3[tam], aux=0;
    for(i=0; i < tam2; ++i){
        for(j=0; j < tam1; ++j){
            if(fila2[i] != fila1[j]){
                fila3[aux] = fila1[j];
                ++aux;
            }
        }
    }
    int tam3 = tam1 - tam2;
    for(i=0; i < tam3; ++i){
        printf("%d->", fila3[i]);
    }
    return 0;
}