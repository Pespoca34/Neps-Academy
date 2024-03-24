#include <stdio.h>

int main(){
    FILE *p = fopen("nomes.txt","r");
    if(p == NULL){
        printf("Nao abriu arquivo");
    } else{
        printf("abriu o arquivo\n");
        for(int i=0; i<5;++i){
            char c = fgetc(p);
            printf("%c\n", c);
        }
        fclose(p);
    }


    return 0;
}