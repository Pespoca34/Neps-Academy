#include <stdio.h>
#include <string.h>

#define max 50 //? tem que ser 50 por algum motivo
int main(){
    char s[max], c;
    int soma=0;
    scanf("%s %c", s, &c);
    int x = strlen(s);
    
    for(int i=0; i < x; ++i){
        if(s[i] == c){
            ++soma;
        }
    }
    printf("%d", soma);
    return 0;
}