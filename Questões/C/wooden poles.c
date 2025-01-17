#include <stdio.h>


int main(void){
    int poles,x;
    scanf("%d", &poles);
    int repaired = 0, replaced = 0;
    for(int i=0; i < poles; ++i){
        scanf("%d", &x);
        if(x < 50){
            ++replaced;
        } else if(50 <= x && x < 85){
            ++repaired;
        }
    }    

    printf("%d %d",replaced, repaired);
    return 0;
}