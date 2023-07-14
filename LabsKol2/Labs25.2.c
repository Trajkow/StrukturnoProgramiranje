#include <stdio.h>

int reverse(int num) {

    int reversed = 0;
    while (num) {
        int digit = num % 10;
        reversed += digit;
        reversed *= 10;
        num /= 10;
    }

    return reversed;

}

int function(int num, int number) {


    if (num == 0) {
        return number;
    }

    int digit = num % 10;

    if (digit % 2 == 0) {
        digit = 0;
    } else {
        digit -= 1;
    }

    number += digit;
    number *= 10;

    return function(num / 10, number);

}

int main() {

    int num;
    scanf("%d", &num);

    printf("Brojot e %d", (reverse(function(num, 1)) / 10) - 1);

    return 0;
}