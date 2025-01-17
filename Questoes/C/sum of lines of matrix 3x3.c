#include <stdio.h>
#define tam 3

int mat[tam][tam];

int somal(int l){
    int soma = 0;
    for(int c=0; c < tam; ++c){
        soma += mat[l][c];
    }
    return soma;
}

int main(void){
    for(int i=0; i < tam; ++i){
        for(int j=0; j < tam; ++j){
            scanf("%d", &mat[i][j]);
        }
    }
    for(int i=0; i < tam; ++i){
        printf("Linha %d: %d\n", i, somal(i));
    }

    return 0;
}