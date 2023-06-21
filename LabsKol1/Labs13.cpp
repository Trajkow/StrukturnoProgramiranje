#include <stdio.h>
#include <math.h>

int main() {

    int num;
    scanf("%d", &num);

    int num2;

    int firstDigit = num % 10;
    int secDigit = num / 10;
    if (firstDigit > secDigit) {
        int temp = firstDigit;
        firstDigit = secDigit;
        secDigit = temp;
        num2 = (secDigit * 10) + firstDigit;
    } else {
        num2 = (secDigit * 10) + firstDigit;
    }
    printf("%d", num2 * num2);

    return 0;
}