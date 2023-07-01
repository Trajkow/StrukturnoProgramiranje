#include <stdio.h>

int reverseNumber(int number) {
    int reverse = 0;
    while (number) {
        int digit = number % 10;
        reverse += digit;
        reverse *= 10;
        number /= 10;
    }
    return reverse /= 10;
}

int main() {

    int n;
    scanf("%d", &n);

    int min =9999999;
    int flag = 0;
    int num;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &num);
        if(num % 10 ==0 && (num % 100) / 10 == 0){
            continue;
        }
        int reverse = reverseNumber(num);
        while (reverse) {
            int digit = reverse % 10;
            int secDigit = (reverse % 100) / 10;

            if (secDigit >= digit) {
                flag = 0;
                break;
            } else {
                flag = 1;
            }
            reverse /= 10;
        }
        if (flag) {
            if(min > num){
                min = num;
            }
            printf("%d\n", num);
        }
    }
    if(min == 9999999){
        printf("-1");
    } else{
        printf("%d", min);
    }

    return 0;
}