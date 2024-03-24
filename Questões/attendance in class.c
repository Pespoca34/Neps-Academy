#include <stdio.h>

int main(void){
    int tam;
    scanf("%d", &tam);
    int i, j, alunos[tam];
    for(i=0; i < tam; ++i){
        scanf("%d", &alunos[i]);
    }
    int contador = tam;
    for(i=0; i < tam; ++i){
        //fazer loop com elementos não repetidos, se não ele eliminar o mesmo elemento duas vezes
        for(j=i + 1; j < tam; ++j){
            if(alunos[i] == alunos[j]){
                --contador;
            }
        }
    }
    printf("%d", contador);
    return 0;
}