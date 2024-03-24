#include <stdio.h>

void primo(int n){
    int contador = 0;
    for(int i=1; i <= n; ++i){
        if(n % i == 0)
            ++contador;
    }
    if(contador == 2){
        printf("Primo");
    } else
        printf("Nao primo");
}
void divisores(int n){
    for(int i=1; i <= n; ++i){
        if(n % i == 0){
            printf("%d ", i);
        }
    }
}
int quantidade(int n){
    int contador = 0;
    for(int i=1; i <= n; ++i){
        if(n % i == 0){
            ++contador;
        }
    }
    return contador;
}

int somad(int n){
    int soma = 0;
    for(int i=1; i <= n; ++i){
        if(n % i == 0){
            soma += i;
        }
    }
    return soma;
}

int main(void){
    int n;
    scanf("%d", &n);
    printf("%d divisor(es): ",quantidade(n));
    divisores(n);
    printf("\n");
    printf("Soma de divisores = %d\n", somad(n));
    primo(n);
    return 0;
}
