#include <stdio.h>
#define tam 3

int mat[tam][tam];

int somad1(){
    int soma = 0;
    for(int i=0; i < tam; ++i){
        soma += mat[i][i];        
    }
    return soma;
}
int somad2(){
    int soma = 0;
    for(int i=0; i < tam; ++i){
        soma += mat[i][tam-i-1];
    }
    return soma;
}

int main(void){
    for(int l=0; l < tam; ++l){
        for(int c=0; c < tam; ++c){
            scanf("%d", &mat[l][c]);
        }
    }
    printf("Diagonal principal: %d\n", somad1());
    printf("Diagonal secundaria: %d", somad2());

    return 0;
}