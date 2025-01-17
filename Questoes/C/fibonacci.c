#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int vf, fs;
    int f1 = 1;
    int f2 = 2;
    scanf("%d", &vf);
    if(vf == 0 || vf == 1){
        printf("%d", f1);
    } else if(vf == 2){
        printf("%d", f2);
    } else{
        for(int i=2; i < vf; ++i){
            fs = f2 + f1;
            f1 = f2;
            f2 = fs;
        } 
        //! Esse printf tem que estar dentro do Else, apenas para rodar se essa afirmação for coerente
        printf("%d",fs);
    }
    return 0;
}