#include <stdio.h>

int reverse(int num) {

    int reversed = 0;
    while (num) {
        int digit = num % 10;
        reversed += digit;
        reversed *= 10;
        num /= 10;
    }

    return reversed / 10;
}

int isPalindrome(int num) {

    if (num == reverse(num)) {
        return 1;
    } else {
        return 0;
    }
}

int containsDigit(int num) {

    while (num) {
        int digit = num % 10;
        if (digit != 0 && digit != 1 && digit != 2 && digit != 3 && digit != 4) {
            num /= 10;
            return 0;
        }
        num /= 10;
    }

    return 1;
}

int main() {

    int a, b;
    scanf("%d%d", &a, &b);

    for (int i = a + 1; i <= b; ++i) {
        if (isPalindrome(i) && containsDigit(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}