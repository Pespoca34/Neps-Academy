#include <stdio.h>
#define max 100

int main(void){
    int tam, soma_diag_principal = 0, soma_diag_secundaria = 0, soma_linha, soma_coluna;
    scanf("%d", &tam);
    int mat[max][max];
    for(int l = 0; l < tam; ++l){
        for(int c = 0; c < tam; ++c){
            scanf("%d", &mat[l][c]);
        }
    }
    for(int i = 0; i < tam; ++i){
        soma_diag_principal += mat[i][i];
        soma_diag_secundaria += mat[i][tam - i - 1];
    }
    if(soma_diag_principal != soma_diag_secundaria) {
        printf("-1\n");
        return 0;
    }
    int soma_esperada = soma_diag_principal;
    for(int i = 0; i < tam; ++i){
        soma_linha = 0;
        soma_coluna = 0;
        for(int j = 0; j < tam; ++j){
            soma_linha += mat[i][j];
            soma_coluna += mat[j][i];
        }
        if(soma_linha != soma_esperada || soma_coluna != soma_esperada){
            printf("-1\n");
            return 0;
        }
    }
    
    printf("%d\n", soma_diag_principal);
    return 0;
}
