#include <stdio.h>

int main(){

    int a, b;
    scanf("%d%d", &a, &b);

    int sumA = 0;
    int sumB = 0;

    while(a){
        int digit = a %10;
        sumA += digit;
        a /= 10;
    }

    while(b){
        int digit = b %10;
        sumB += digit;
        b /= 10;
    }

    if (sumA > sumB){
        printf("1");
    }else{
        printf("0");
    }


    return 0;
}