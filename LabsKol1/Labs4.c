#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);
    int flag = 1;

    while (num) {

        int digit = num % 10;
        int secDigit = (num % 100) / 10;

        if (secDigit >= digit) {
            flag = 0;
            break;
        }

        num /= 10;
    }

    if (flag){
        printf("1");
    } else{
        printf("0");
    }

    return 0;
}