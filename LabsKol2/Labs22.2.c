#include <stdio.h>

int digitCounter(int num, int counter) {

    if (num == 0) {
        return counter;
    }

    return digitCounter(num / 10, ++counter);
}

int sumFunction(int num, int sum) {

    if (num == 0) {
        return sum;
    }

    int digit = num % 10;
    sum += digit;

    return sumFunction(num / 10, sum);
}

int reverse(int num) {

    int reverse = 0;

    while (num) {
        int digit = num % 10;
        reverse += digit;
        reverse *= 10;
        num /= 10;
    }

    return reverse / 10;
}

int isPalindrome(int num) {

    if (num == reverse(num)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {

    int num;
    while (1) {

        if (scanf("%d", &num) != 1) {
            break;
        }

        if (isPalindrome(num)) {
            printf("%d\n", sumFunction(num, 0));
        } else {
            printf("%d\n", digitCounter(num, 0));
        }

    }

    return 0;
}

