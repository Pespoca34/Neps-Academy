#include <stdio.h>
#define max 10000

int main(void){
    int num1=0,num2=0,num3=0,num4=0,num5=0,num6=0,
    num7=0,num8=0,num9=0,num0=0;
    int quantidade,num, digito;
    scanf("%d", &quantidade);
    for(int i=0; i < quantidade; ++i){
        scanf("%d", &num);
        while(num > 0){
            digito = num % 10;
            switch (digito){
                case 0 :
                    ++num0;
                    break;
                case 1:
                    ++num1;
                    break;
                case 2:
                    ++num2;
                    break;
                case 3:
                    ++num3;
                    break;
                case 4:
                    ++num4;
                    break;
                case 5:
                    ++num5;
                    break;
                case 6:
                    ++num6;
                    break;
                case 7:
                    ++num7;
                    break;
                case 8:
                    ++num8;
                    break;
                case 9:
                    ++num9;
                    break;
                default:
                    break;
            } 
            num /= 10;
        }
    }
    printf("0 - %d\n", num0);
    printf("1 - %d\n", num1);
    printf("2 - %d\n", num2);
    printf("3 - %d\n", num3);
    printf("4 - %d\n", num4);
    printf("5 - %d\n", num5);
    printf("6 - %d\n", num6);
    printf("7 - %d\n", num7);
    printf("8 - %d\n", num8);
    printf("9 - %d", num9);
    return 0;
}