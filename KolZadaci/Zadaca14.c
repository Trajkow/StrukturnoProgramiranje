#include <stdio.h>

int maxDigit(int number) {

    int max = 0;
    while (number) {
        int digit = number % 10;
        if (max < digit) {
            max = digit;
        }
        number /= 10;
    }
    return max;
}

int main() {

    int num;
    int sum = 0;
    int max = 0;

    while (1) {

        if (scanf("%d", &num) != 1) {
            break;
        }
        sum += max;
        int remember = num;
        while (num) {
            int digit = num % 10;
            sum += digit;
            num /= 10;
        }
        max = maxDigit(remember);
        printf("%d: %d\n", remember, sum);
        sum = 0;
    }

    return 0;
}