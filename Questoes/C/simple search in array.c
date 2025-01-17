#include <stdio.h>
#define max 10000

int main(){
    int n,x;
    scanf("%d", &n);
    int v[max], soma=0;
    //* Descobrir o Vetor
    for(int i=0; i<n;++i){
        scanf("%d", &v[i]);
    }
    //* Buscar pelo numero que queremos
    scanf("%d", &x);
    for(int i=0; i<n;++i){
        if(v[i] == x){
            ++soma;
        }
    }
    if(soma >= 1){
        puts("pertence");
    } else{
        puts("nao_pertence");
    }
    return 0;
}