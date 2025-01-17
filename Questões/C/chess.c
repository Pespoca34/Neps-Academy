#include <string.h>
#include <stdio.h>


int main(){
    //! Print 1 = Branca, Print 0 = Preto
    int l,c;
    scanf("%d\n%d", &l,&c);
    //* L=par e C= impar, imprime Preto
    //* L=IMpar e C= par, imprime = Preto
    if(l % 2 == 0 && c % 2 == 0){
        puts("1");
    } else if(l % 2 != 0 && c % 2 != 0){
        puts("1");
    } else if(l % 2 == 0 && c % 2 != 0){
        puts("0");
    } else{
        puts("0");
    }

    return 0;
}