#include <stdio.h>

int main() {

    int n, x;
    scanf("%d%d", &n, &x);
    int flag = 0;

    if (x < 10) {

        while (--n) {
            int temp = n;

            while (temp) {
                int digit = temp % 10;

                if (digit == x) {
                    flag = 0;
                    break;
                } else {
                    flag = 1;
                }
                temp /= 10;
            }
            if (flag) {
                printf("%d", n);
                return 0;
            }
        }
    } else {
        int tempN = n--;

        while (tempN) {
            int digitN = tempN % 10;
            int digit = x % 10;

            if (digitN == digit) {
                flag = 0;
                break;
            } else {
                flag = 1;
                digit /= 10;
            }
            tempN /= 10;

        }
        if (flag) {
            printf("%d", tempN);
            return 0;

        }
    }

    printf("0");


    return 0;
}