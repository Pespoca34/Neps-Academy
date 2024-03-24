#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define max 10000

int main(){
    char f[max];
    int i;
    scanf("%1000[^\n]s", &f);
    fflush(stdin);
    //* int x = strlen(f);
    //* char f1[max];
    for(i=0; f[i] != '\0';++i){ //? for(i=0; i < x; ++i){f1[i] = tolower([f[i]])}
        f[i] = tolower(f[i]);
    }
    if(f[0] >= 'a' && f[0] <= 'z'){
        f[0] = toupper(f[0]);
    }
    for(i=1; f[i] != '\0'; ++i){
        if(f[i-1] == ' '){
            f[i] = toupper(f[i]);
        }
    }

    printf("%s", f);
    return 0;
}
