#include <stdio.h>

int max(int num, int maxDigit) {

//    int digit = 0;
//    int max = 0;
//
//    while (num) {
//        digit = num % 10;
//        if (max < digit){
//            max = digit;
//        }
//        num /= 10;
//    }
//
//    return max;

    if (num == 0) {
        return maxDigit;
    }
    int digit = num % 10;
    if (maxDigit < digit) {
        maxDigit = digit;
    } else {
        return max(num / 10, maxDigit);
    }
    return max(num, maxDigit);

}

int main() {

    int num;

    while (1) {

        if ((scanf("%d", &num) != 1)) {
            break;
        }

        printf("%d\n", max(num, 0));

    }


    return 0;
}