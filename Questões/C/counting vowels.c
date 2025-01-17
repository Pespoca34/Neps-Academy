#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, soma =0;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    for(int i=0; s[i] != '\0'; ++i){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'o' ||
        s[i] == 'i' || s[i] == 'u'){
            ++soma;
        }
    }

    printf("%d", soma);
    return 0;
}