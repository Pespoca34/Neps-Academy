#include <stdio.h>
#define tam 3

int somarc(int m[tam][tam], int c){
    int soma = 0;
    for(int i=0; i < tam; ++i){
        soma += m[i][c];
    }
    return soma;
}

int main(void){
    int matrix[tam][tam];
    for(int l=0; l < tam; ++l){
        for(int c=0; c < tam; ++c){
            scanf("%d", &matrix[l][c]);
        }
    }
    for(int i=0; i < tam; ++i){
        printf("Coluna %d: %d\n", i, somarc(matrix, i));
    }
    return 0;
}