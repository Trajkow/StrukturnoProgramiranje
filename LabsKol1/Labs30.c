#include <stdio.h>

int reverseNum(int num) {
    int reversed = 0;

    while (num) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

int main() {



    return 0;
}