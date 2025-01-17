#include <stdio.h>

int main(){
    int n,disco,aviao;
    scanf("%d %d %d", &n,&disco,&aviao);
    if(disco > aviao){
        printf("%d", disco - aviao);
    } else if(disco < aviao){
        printf("%d", (n-aviao) + disco);
    } else if(disco == aviao){
        puts("0");
    }

    return 0;
}