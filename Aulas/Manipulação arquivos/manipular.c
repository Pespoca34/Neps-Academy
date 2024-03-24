#include <stdio.h>

int main(){
    FILE *p;
    p = fopen("nomes.txt","w");
    char x[30];
    scanf("%30[^\n]s", x);
    if(p == NULL){
        printf("nao consegui");
    } else{
        printf("abriu o arquivo");
        fprintf(p, "Seu nome = %s", x);
        fclose(p);


    }

    return 0;
}