#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(){
    int n;
    scanf("%d", &n);
    fflush(stdin);
    int apertados[100000];
    for(int i = 0; i < n; ++i){
        scanf("%d", &apertados[i]);
        fflush(stdin);
    }
    int soma1 = 0;
    int soma2 = 0;
    int estado1;
    int estado2;
    for(int i = 0; i < n; ++i){
        if(apertados[i] == 1){
            ++soma1; 
        } else if(apertados[i] == 2){
            ++soma2 && --soma1;
        }
    if(soma1 % 2 == 0){
        estado1 = 0;
    } else if(soma1 % 2 != 0){
        estado1 = 1;
    }
    if(soma2 % 2 == 0){
        estado2 = 0;
    } else if(soma2 % 2 != 0){
        estado2 = 1;
    }

    }
    printf("%d\n%d", estado1, estado2);
    return 0;
}

#include <stdio.h>

int main(void)
{
	int n, ans = 0, a;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if(a == 2)
			ans = 1 - ans;
	}
	printf("%d\n%d\n", n % 2, ans);
}