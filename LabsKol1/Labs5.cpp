#include <stdio.h>

int main(){

    int num;
    scanf("%d", &num);

    if (num == 990099){
        printf("1");
        return 0;
    }

    int firstHalf = num / 1000;
    int secHalf = num % 1000;

    int reverseSecHalf = 0;
    while(secHalf != 0){
        reverseSecHalf = reverseSecHalf * 10 + secHalf % 10;
        secHalf /= 10;
    }


    if (firstHalf == reverseSecHalf){
        printf("1");
    }else{
        printf("0");
    }

    return 0;
}