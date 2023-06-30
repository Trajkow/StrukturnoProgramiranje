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
        n--;
        int tempx = x;
        while (n) {
            int temp = n;
            int digitX = tempx % 10;

            while (temp) {
                int digit = temp % 10;
                if (digitX == digit) {
                    flag = 0;
                    break;
                    n--;
                } else {
                    flag = 1;
                    temp /= 10;
                }
            }
            if (flag) {
                tempx /= 10;
                if (tempx == 0) {
                    break;
                }

            } else {
                n--;
                tempx = x;
            }
        }

        if (flag) {
            printf("%d", n);
            return 0;
        }
    }

    printf("0");


    return 0;
}