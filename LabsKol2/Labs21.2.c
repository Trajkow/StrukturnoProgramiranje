#include <stdio.h>

int maxUneven(int num, int max) {

    if (num == 0) {
        return max;
    }

    int digit = num % 10;

    if (digit % 2 != 0) {
        if (max < digit) {
            max = digit;
        }
    }

    return maxUneven(num / 10, max);

}

int even(int num) {
    if (num % 2 == 0) {
        return 0;
    } else {
        return num;
    }
}

int main() {

    int a, b;
    scanf("%d%d", &a, &b);

    for (int i = a; i <= b; ++i) {
        if (i <= 9) {
            printf("%d -> %d\n", i, even(i));
        } else {
            printf("%d -> %d\n", i, maxUneven(i, 0));
        }
    }


    return 0;
}