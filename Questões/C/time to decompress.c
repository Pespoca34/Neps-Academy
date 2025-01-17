#include <stdio.h>

#define max 10000

int main(){
    int x,y,index=0;
    char p, list[max];
    scanf("%d", &x);

    for(int i=0; i<x;++i){
        scanf("%d %c", &y, &p);
        for(int j=0;j<y;++j){
            list[index] = p; //? list[index++] é ok.
            index++;
        }
    }
    for(int j=0;list[j] != '\0';++j){
        printf("%c", list[j]);
        if(list[j] != list[j+1]){
            printf("\n");
        }
    }
    return 0;
}