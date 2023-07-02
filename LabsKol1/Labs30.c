#include <stdio.h>

int reverseNumber(int number) {
    int reverse = 0;
    while (number) {
        int digit = number % 10;

        reverse += digit;
        number /= 10;
        reverse *= 10;
    }
    return reverse /= 10;
}

int main() {

    int n;
    scanf("%d", &n);

    int sum = 0;
    int counter = 0;
    int flag = 0;
    int num;
    for (int i = 0; i < n; ++i) {

        scanf("%d", &num);
        if(num % 10 == 0 || (num % 100) / 10 == 0){
            continue;
        }
        int reverse = reverseNumber(num);
        while (reverse) {
            int digit = reverse % 10;
            int secDigit;
            if (reverse > 9) {
                secDigit = (reverse % 100) / 10;
            } else {
                break;
            }
            if (secDigit == 0) {
                flag = 0;
                break;
            }
            if (digit > secDigit) {
                flag = 0;
                break;
            } else {
                flag = 1;
            }
            reverse /= 10;
        }
        if (flag) {
            sum += num;
            counter++;
            printf("%d\n", num);
        }
    }

    printf("%d\n%d", sum, counter);

    return 0;
}