#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 1000

int main(){
    char s[max];
    scanf("%s", s);
    if(strcmp(s,"para") == 0 || strcmp(s,"acre") == 0|| strcmp(s,"roraima") == 0||
    strcmp(s,"amapa") == 0 || strcmp(s,"amazonas") == 0|| strcmp(s,"rondonia") == 0||
    strcmp(s,"tocantins") == 0){
        puts("Regiao Norte");
    } else{
        puts("Outra regiao");
    }

    return 0;
}