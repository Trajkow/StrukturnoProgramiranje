#include <stdio.h>

int main() {

    int num;
    int counter = 0;
    int flag = 0;

    while (1) {
        if (scanf("%d", &num) != 1) {
            break;
        }
        if (num < 9) {
            continue;
        }
        int remeber = num;
        while (num) {
            int digit = num % 10;
            int secDigit = (num % 100) / 10;

            counter++;
            if (counter % 2 != 0) {
                if (digit >= 5) {
                    flag = 1;
                } else {
                    if (flag == 1) {
                        flag = 0;
                        break;
                    } else {
                        flag = 2;
                    }
                }
            } else {
                if (flag == 1) {
                    if (digit < 5) {
                        flag = 1;
                    } else {
                        flag = 0;
                        break;
                    }
                } else if (flag == 2) {
                    if (digit >= 5) {
                        flag = 2;
                    } else {
                        flag = 0;
                        break;
                    }
                }
            }
            num /= 10;
        }
        counter = 0;
        if (flag != 0) {
            printf("%d\n", remeber);
        }
        flag = 0;
    }


    return 0;
}